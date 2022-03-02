/*
 * Voice classifier for Arduino Nano 33 BLE Sense by Alan Wang
 */

#include <math.h>
#include <PDM.h>
#include <EloquentTinyML.h>      // https://github.com/eloquentarduino/EloquentTinyML
//#include "2-100/RF.h"            // RF model file
//#include "2-100/CART.h"
//#include "2-100/SVC.h"
//#include "2-100/LR.h"
//#include "2-100/GNB.h"
#include "5-200/RF2.h"            // RF model file
//#include "2-100/CART.h"
//#include "2-100/SVC.h"
//#include "2-100/LR.h"
//#include "2-100/GNB.h"


#define PDM_SOUND_GAIN     255   // sound gain of PDM mic
#define PDM_BUFFER_SIZE    256   // buffer size of PDM mic

#define SAMPLE_THRESHOLD   200   // RMS threshold to trigger sampling
#define FEATURE_SIZE       32    // sampling size of one voice instance
#define SAMPLE_DELAY       20     // delay time (ms) between sampling

#define NUMBER_OF_LABELS   2     // number of voice labels
const String words[NUMBER_OF_LABELS] = {"no", "yes", "ok", "start", "stop"};  // words for each label



#define NUMBER_OF_INPUTS   FEATURE_SIZE
#define NUMBER_OF_OUTPUTS  NUMBER_OF_LABELS
#define TENSOR_ARENA_SIZE  4 * 1024
#define TEST_SIZE 40

Eloquent::ML::Port::RandomForest model;
//Eloquent::ML::Port::DecisionTree model;
//Eloquent::ML::Port::SVM model;
//Eloquent::ML::Port::LogisticRegression model;
//Eloquent::ML::Port::GaussianNB model;

float feature_data[FEATURE_SIZE];
volatile float rms;
bool voice_detected;

float X_test [TEST_SIZE][FEATURE_SIZE] = {{ 5.01369886e-02,  1.59745389e-01, -4.70352056e-01,
        -6.50503859e-01, -5.18005488e-01, -2.94960490e-01,
        -1.08477030e-01,  3.95737110e-01,  5.68538087e-01,
         6.92991305e-01,  6.13313848e-01,  4.61188674e-01,
         1.28295302e-01, -1.61160013e-01, -1.40193845e-01,
        -1.59369553e-01, -1.34702548e-01, -1.37098198e-01,
        -1.45020972e-01, -1.04312185e-01, -1.79660297e-01,
        -1.32054435e-01, -2.67196935e-01, -2.21900960e-01,
        -3.20697181e-01, -4.35830349e-01, -5.59271910e-01,
        -3.40444816e-01, -2.39640600e-01, -2.91047338e-01,
         3.37724520e-02, -1.76836233e-01},
       { 5.33811467e+00,  3.53055655e+00,  3.12242533e+00,
         4.51444321e+00,  3.95926211e+00,  2.91457290e+00,
         2.80422404e+00,  2.20361950e+00,  1.75474418e+00,
         1.38564008e+00,  8.63974314e-01,  6.13224367e-01,
         4.86573803e-01, -1.12489783e-01,  7.04901623e-01,
         1.15720976e+00,  1.12865922e+00,  1.25314367e+00,
         1.31191411e+00,  2.05794349e+00,  2.14505044e+00,
         3.35689072e+00,  2.66671880e+00,  4.47868154e+00,
         3.16567342e+00,  2.24922736e+00,  2.73987581e+00,
         1.45253201e+00,  1.20881064e+00,  3.96226175e-01,
         3.91161296e-01, -3.78137867e-01},
       { 3.64347775e-01, -1.64601926e+00, -1.55331939e+00,
        -1.39331374e+00,  5.68591888e-01,  1.54389978e-01,
         2.98111569e-01,  5.02868122e-01,  3.98233816e-01,
         3.15327286e-01,  3.22268090e-01,  2.78914879e-01,
         5.43973977e-01,  5.82989626e-01,  4.24299113e-01,
         4.77328083e-01,  7.26976860e-01,  7.18883050e-01,
         2.85454682e-01,  4.80886169e-01, -2.48119119e-03,
         1.65446400e-01,  7.80655648e-02,  2.07881412e-01,
         2.41815396e-01,  1.01370861e-01,  3.24432271e-01,
         2.49436427e-01, -1.30318956e-01, -2.82757130e-01,
        -5.65784589e-01, -5.72586001e-01},
       {-2.48774643e-01, -1.21212339e+00, -6.52497676e-01,
         1.20836970e+00,  2.47093373e+00,  1.49487131e+00,
         8.21975936e-01,  9.68459645e-01,  1.27557338e+00,
         1.70904882e+00,  1.53473000e+00,  1.31705477e+00,
         3.70363580e-01,  4.35979252e-01, -4.80957858e-03,
         2.78451408e-01,  1.43517624e-01,  1.59745596e-01,
         1.59021777e-01,  1.90799282e-01,  2.21245062e-01,
         3.24726396e-01,  4.19730882e-01,  5.04576804e-01,
         5.47343003e-01,  7.36826953e-01,  5.86640767e-01,
         8.42478329e-01,  7.39119905e-01,  9.02996936e-01,
         9.55384005e-01,  9.82574047e-01},
       {-6.32677855e-01, -1.23133671e-01,  8.02400092e-01,
         8.66643961e-01,  8.43025223e-01,  3.72737531e-01,
         7.38299447e-01,  1.25365438e+00,  6.68934605e-01,
         7.79173411e-01,  6.44781522e-01,  5.53830841e-01,
         2.36438268e-01,  1.76513675e-01,  1.43792078e-01,
         1.81325453e-01,  1.61670321e-01,  1.74267923e-01,
         1.79296096e-01,  2.59917677e-01,  2.30850029e-01,
         3.73961029e-01,  3.47049919e-01,  5.26353648e-01,
         3.54070244e-01,  2.11784828e-01,  1.83986818e-02,
        -4.51486207e-01, -2.58337168e-01, -2.05805689e-01,
        -2.66108487e-01, -3.06521450e-01},
       {-1.57348370e-02, -1.09899788e+00, -4.49221422e-01,
        -4.67792206e-01, -2.31825358e-01,  8.57283386e-02,
        -1.72419894e-01, -2.69137832e-01, -2.56425446e-01,
        -1.05149245e-01,  3.62041808e-01, -2.11191730e-02,
         6.74953096e-01,  7.98846275e-01,  5.61085676e-01,
         7.28515086e-01,  7.44141268e-01,  7.39344359e-01,
         8.24793475e-01,  1.06780575e+00,  1.25701557e+00,
         1.30267305e+00,  1.20548068e+00,  9.95825165e-01,
         5.04279987e-01,  1.05577429e+00,  1.00655849e+00,
         9.72855516e-01,  1.24324913e+00,  6.13755134e-01,
         6.40703614e-01,  1.08673131e-01},
       {-3.81892370e-01,  1.58465807e-01,  1.00367720e+00,
         5.70355721e-01, -1.30314250e-01,  4.15618719e-01,
         2.20972204e-01,  2.55296345e-01,  2.02118188e-01,
         2.51978018e-01, -1.85502825e-01,  9.08644821e-02,
        -4.66870350e-02, -7.35900660e-02, -9.31244210e-02,
        -2.13073767e-02, -1.50742352e-02, -9.95816703e-03,
        -7.59533874e-02, -8.70564917e-02,  9.46160908e-03,
        -2.41858293e-01, -1.58745231e-01, -4.21757098e-01,
        -3.26950761e-01, -3.34798181e-01, -5.16887284e-01,
        -6.37128448e-01, -2.61776174e-01, -1.20208018e-01,
         6.14766166e-02, -3.57285164e-02},
       {-6.92902566e-02, -1.42576138e+00, -1.30321399e+00,
         8.61789967e-01,  7.56164718e-01,  4.31630237e-01,
         4.66210912e-01,  4.15590951e-01,  9.57584868e-01,
         8.99375165e-01,  7.46822121e-01,  1.66938209e-01,
        -2.15874983e-02, -7.91920780e-02, -1.38087417e-01,
        -7.00200133e-02, -4.59724415e-02, -3.98450539e-02,
        -5.16517087e-02, -7.59989394e-02, -2.89692856e-02,
         1.93847281e-02,  4.35683604e-02,  2.66724024e-01,
         4.21311704e-01,  2.97846758e-01,  3.49705905e-01,
         3.71447164e-01,  2.82507084e-01,  1.51893906e-01,
         2.66313323e-01, -2.10997476e-01},
       { 1.93424547e+00,  9.94333279e-01,  8.68986160e-01,
         5.90996643e-01,  1.30580198e+00,  1.13024846e+00,
         1.23965062e+00,  1.45368935e+00,  1.19435218e+00,
         6.71039259e-01,  3.47513343e-01, -2.01831818e-02,
         8.35492136e-03, -3.08110657e-02, -8.73600874e-03,
         3.36733436e-02,  1.05337892e-01,  1.18500949e-01,
         1.15179218e-01,  1.33225250e-01,  8.29489784e-02,
        -1.85314136e-02, -2.73408219e-01, -2.74763402e-01,
         2.46861601e-01,  1.38728715e+00,  2.39905278e+00,
         4.00313742e+00,  5.15901770e+00,  6.94818620e+00,
         7.46345585e+00,  8.39907026e+00},
       {-1.85567183e-01, -1.02843806e+00, -8.99788638e-01,
        -6.19983229e-01, -1.26790212e-01,  2.28735978e-03,
         3.61932184e-01,  5.37014376e-01,  7.11442190e-01,
         6.99239658e-01,  5.98166697e-01,  1.19698946e+00,
         1.01460610e+00,  4.90980824e-01,  1.33844724e-01,
         3.14137816e-02, -1.15601322e-01, -1.51546210e-01,
        -1.44804870e-01, -1.52897609e-01, -1.44967731e-01,
        -1.22716277e-01, -1.72217909e-01, -2.95750413e-01,
        -2.78470040e-01, -3.43705811e-01, -2.92130908e-01,
         9.63768621e-02,  2.93042067e-03, -4.55961448e-02,
        -1.76850892e-01, -3.24106787e-01},
       {-6.97879400e-01, -5.20927044e-01,  1.10325475e+00,
         7.06473614e-01,  1.20757997e+00,  2.69465959e-01,
        -2.35822288e-01, -3.43514581e-01, -5.20743592e-01,
        -3.61723190e-01, -1.19054476e-01,  3.46669461e-01,
        -1.48479249e-02,  1.97274756e+00,  1.31675640e+00,
         1.34042210e+00,  1.51590349e+00,  1.32965682e+00,
         1.58132811e+00,  1.59269176e+00,  2.45601537e+00,
         4.11601856e+00,  5.16050472e+00,  3.26529950e+00,
         4.05040014e+00,  3.07120177e+00,  3.25185242e+00,
         3.70631435e+00,  4.01198808e+00,  4.30874668e+00,
         4.52246163e+00,  4.44826670e+00},
       { 6.40670951e-01,  9.50853599e-01,  5.02718112e-01,
         3.26579909e-01,  3.55918505e-01,  9.01328677e-02,
         1.92912753e-01,  4.19845345e-01,  2.20896309e-01,
         1.05766552e-01,  1.32409570e-01,  1.61531812e-01,
        -7.83175091e-02, -1.41496385e-02, -1.36756727e-01,
        -1.26849466e-01, -9.25583033e-02, -1.45669157e-01,
        -1.15617971e-01, -1.47846950e-01, -1.87589082e-01,
        -2.12652399e-01, -2.71978283e-01, -2.35412759e-01,
        -2.75157500e-01, -9.62227246e-02, -3.18408503e-01,
        -5.00011620e-01, -5.08561188e-01, -6.19705774e-01,
        -3.07997593e-01, -5.27294461e-02},
       {-4.99761213e-01,  2.08630651e-01, -4.50829673e-01,
         2.57307464e-01,  1.22852686e-01,  1.51598854e-01,
         3.43633381e-01,  3.22092299e-01,  8.06339499e-01,
         7.65434562e-01,  1.05051184e+00,  6.17275672e-01,
         1.26371110e+00,  7.98770827e-01,  1.11995751e+00,
         7.64955660e-01,  3.27611864e-02,  2.31614084e-03,
         2.37024862e-02,  1.00365543e-01,  1.16097693e-01,
         2.93218163e-01,  2.83149657e-01,  7.12951862e-01,
         4.62300512e-01,  7.07123564e-01,  9.07384572e-01,
         6.62785563e-01,  7.41493304e-01,  6.40151563e-01,
         5.36441730e-01,  6.27360871e-01},
       {-3.38089533e-01, -4.97803166e-01,  1.02124511e+00,
         1.31281071e+00,  3.30140398e+00,  1.49622603e+00,
         2.16236649e-01,  2.79051682e-03, -3.52706118e-01,
        -2.32096210e-01, -2.69373953e-01, -1.09360784e-01,
        -8.35492136e-03,  2.01568689e-01,  1.24119350e+00,
         9.17021252e-01,  8.96331974e-01,  8.96922443e-01,
         9.59385877e-01,  1.17986778e+00,  1.60644448e+00,
         2.36038045e+00,  2.12725313e+00,  3.84055232e+00,
         2.55322508e+00,  1.88624990e+00,  1.73525977e+00,
         8.51449023e-01,  1.04136495e+00,  9.14999936e-01,
         6.95702270e-01,  8.42263249e-01},
       {-6.38693623e-01, -5.79918394e-01, -2.05392667e-01,
        -1.73873722e-01,  5.14067962e-01,  1.32571561e-01,
         3.64158409e-01,  2.99271492e-01,  1.43181460e-01,
        -2.50743403e-01, -2.90210176e-01, -1.75774245e-01,
        -1.42969364e-01, -8.36246463e-02, -1.47611098e-01,
        -7.19098288e-02, -1.10705320e-01, -3.39060724e-02,
        -1.21727770e-01, -1.77185975e-01, -1.83994111e-01,
        -3.50712236e-01, -4.03241933e-01, -3.38598891e-01,
        -3.13360061e-01, -3.60538861e-01, -2.81611140e-01,
        -1.27820772e-03, -9.95616478e-02, -1.27633603e-01,
        -3.60256558e-02,  2.21038651e-01},
       { 1.24387322e-01,  2.28803656e-01,  9.82317613e-02,
        -2.06981623e-01,  5.43641695e-02,  2.82761238e-01,
         3.89193797e-01,  7.73992645e-01,  8.85759583e-01,
         8.28038544e-01,  1.09002955e+00,  7.80689944e-01,
         3.64110824e-01, -7.00880226e-02,  1.29405113e-01,
        -8.32721980e-02, -5.28904590e-02, -1.39637282e-01,
        -1.25499736e-01, -2.18573558e-01, -2.07229088e-01,
        -2.84926522e-01, -4.20401164e-01, -4.59894783e-01,
        -4.57749640e-01, -4.19674685e-01, -4.12737213e-01,
        -4.96479119e-01, -3.33704681e-01, -6.46305644e-01,
        -3.20697469e-01, -5.50537920e-01},
       {-4.39972183e-01, -4.90465154e-01,  7.60418034e-01,
         5.39319926e-01, -2.73033117e-01, -3.44295301e-01,
        -4.32605199e-01, -3.24065920e-01, -3.27237178e-01,
         2.95483118e-01, -3.96645582e-01,  1.10219940e-01,
         1.01837419e+00,  5.27711412e-01,  8.03677000e-01,
         6.22802796e-01,  7.13788325e-01,  5.58679180e-01,
         4.06347512e-01,  4.07734201e-01,  1.61773666e-02,
        -8.26104982e-02,  1.88796229e-02, -2.47232056e-01,
        -2.44446852e-01, -1.96340420e-01, -2.46079640e-01,
        -3.72748611e-01, -5.37477901e-01, -5.16001882e-01,
        -4.03195453e-01, -2.36419179e-03},
       { 6.61365864e-01,  6.20721397e-01,  1.14432100e+00,
         8.47731702e-01,  1.07898545e+00,  2.83401154e-01,
         5.73642388e-01,  2.15105061e-01, -3.52617089e-01,
        -3.03560809e-01, -3.62667605e-01, -1.80691690e-01,
        -1.96797438e-01, -2.42423766e-01, -2.15452412e-01,
        -2.10740843e-01, -1.89047040e-01, -1.43315859e-01,
        -1.79774140e-01, -2.02604436e-01, -1.67938047e-01,
        -2.23858189e-01, -1.46210949e-01, -3.36934599e-01,
        -1.57608780e-01, -1.10075275e-01, -1.83222934e-01,
        -2.35887425e-02, -8.57571868e-02,  4.78339924e-02,
        -1.40646004e-01, -3.41692124e-01},
       {-4.35280219e-01, -5.21945487e-01, -1.27593515e-01,
         5.81013901e-01,  3.43363530e-01,  5.25684293e-01,
         6.14338566e-01,  8.35057256e-01,  7.20447744e-01,
         1.59113562e+00,  1.16006201e+00,  8.01700850e-01,
         2.29964232e-01, -4.54039610e-02, -1.46268474e-01,
        -1.82657714e-01, -1.09177449e-01, -1.38033324e-01,
        -1.77036845e-01, -2.25206351e-01, -2.07151896e-01,
        -2.58956783e-01, -1.86584296e-01,  3.84056642e-02,
        -2.06894417e-01, -4.58929222e-02,  2.59087486e-01,
         2.36793790e-01,  4.40701363e-01,  1.01905985e+00,
         1.21916247e+00,  1.70192589e+00},
       { 1.99073337e-02, -5.89489146e-01, -8.59537684e-01,
        -1.34516304e+00, -9.32310266e-01, -8.53471120e-01,
        -6.54230472e-01, -5.08240030e-01, -5.09293184e-01,
         1.74814620e-01, -3.01751878e-01,  1.54403960e+00,
         6.96727103e-01,  1.03044011e+00,  7.52496162e-01,
         8.46487702e-01,  1.04125819e+00,  9.67416110e-01,
         1.05090190e+00,  1.58864080e+00,  1.76482167e+00,
         2.28272884e+00,  1.98265086e+00,  3.23920678e+00,
         1.18019287e+00,  1.17350403e+00,  4.89823979e-01,
         4.83232239e-01,  2.87253881e-01,  1.06984373e-01,
         3.69755860e-01,  1.35290211e-01},
       { 5.53048520e-01,  2.51346499e-03, -5.63206228e-01,
        -1.32399550e+00, -7.03144382e-01, -8.06770857e-01,
        -6.92282203e-01, -5.01567623e-01, -6.09991029e-01,
        -5.21974630e-01, -5.39363037e-01, -3.60297212e-01,
        -2.19387021e-01, -2.18110657e-01, -1.18347856e-01,
        -7.19626497e-02, -2.10153241e-02,  4.76295166e-02,
         6.63794035e-02,  2.59617767e-02, -2.98294319e-02,
         6.95692775e-02,  1.02329790e-01,  2.34143383e-01,
         4.82918750e-01,  8.37181734e-01,  1.87195129e-01,
         1.02184573e+00,  1.08619312e-01, -3.02490877e-01,
        -2.88742943e-01, -3.93412140e-02},
       {-1.40591355e-01,  1.12722703e+00,  2.19107476e-01,
         2.69934717e-01, -2.26478217e-03, -7.83059922e-01,
        -6.94160983e-01, -4.92477205e-01, -4.77160819e-01,
        -2.91033990e-01, -1.67902262e-01, -4.50498118e-02,
         9.72211905e-02,  9.69163785e-01,  8.51510229e-01,
         9.18042456e-01,  1.34757074e+00,  1.26964772e+00,
         9.98035434e-01,  1.32123406e+00,  1.03008031e+00,
         1.82788004e+00,  9.20409543e-01,  9.28745716e-01,
         1.28693714e-01,  2.98151582e-01,  8.95380687e-01,
         3.77675521e-01,  1.40054733e-01,  1.94158709e-01,
         3.47966356e-02, -3.59489972e-01},
       {-6.28689685e-01, -3.42490615e-01, -1.62360779e-01,
        -3.55291740e-01, -2.21864075e-01, -1.49154919e-01,
        -3.04706601e-01, -2.18241942e-01, -3.89036508e-01,
        -3.47878948e-01,  1.08031901e-01, -2.81530765e-02,
         4.11117135e-01,  1.17351462e+00,  1.00089956e+00,
         7.44355497e-01,  7.71529348e-01,  8.89503361e-01,
         8.84012036e-01,  1.28379312e+00,  2.16501024e+00,
         1.93398083e+00,  1.64062805e+00,  1.33503054e+00,
         1.79558225e-01,  5.97082158e-01,  3.30281437e-01,
         5.87348068e-01, -8.11314814e-03, -3.27666662e-01,
        -1.54984573e-01, -3.06680834e-01},
       {-5.69487152e-01,  3.03933409e-01,  8.37100345e-01,
         2.40832506e+00,  8.84552494e-01,  3.75930304e-01,
         9.77319521e-02, -2.88717195e-01, -4.18771957e-01,
        -4.77317725e-01,  2.29728240e-01, -2.38922213e-02,
        -1.25146796e-01,  1.19965105e+00,  1.27919275e+00,
         1.26399608e+00,  1.42735514e+00,  1.09242579e+00,
         1.28000956e+00,  1.92895610e+00,  2.40180410e+00,
         1.71355200e+00,  1.61991633e+00,  1.75682995e+00,
         6.19166293e-01,  6.27700019e-01,  5.35045888e-01,
         8.88865649e-01,  7.19842096e-01,  5.91681819e-01,
         6.59497382e-01,  4.70899190e-01},
       {-4.92270827e-01,  9.76066591e-01,  3.35516385e+00,
         4.07677095e+00,  2.50414427e+00,  6.21399408e-01,
         1.58522069e-01,  1.68548523e-01,  6.82264880e-02,
         2.30056085e-01, -2.89253701e-02,  2.70005501e-02,
         1.38752073e+00,  1.17897831e+00,  1.50627528e+00,
         1.65350936e+00,  1.20414967e+00,  1.18834127e+00,
         6.15737482e-01,  5.53603484e-01,  5.43491146e-01,
         7.57195816e-01,  6.76471410e-01,  8.20961623e-01,
         4.98769407e-01,  4.34644923e-01,  6.29221821e-02,
        -3.33193892e-01, -5.60000969e-01,  2.35965771e-01,
         1.85351615e-01,  5.14012485e-02},
       { 4.03224050e-01, -4.33393178e-01, -1.84630591e-01,
        -6.14442349e-01, -4.70661204e-01, -8.61694723e-01,
        -5.54275512e-01, -3.89620192e-01, -5.34419707e-01,
        -5.09846802e-01, -4.71328860e-01, -3.26000821e-01,
        -2.39624708e-01, -2.43310280e-01, -1.99328986e-01,
        -1.50613016e-01, -1.23956334e-01, -1.27530183e-01,
        -1.30574865e-01, -1.22411103e-01, -1.16990922e-01,
        -8.01632568e-02, -5.24607745e-02,  5.80104653e-02,
         8.93766543e-02,  2.62385585e-01, -5.77714242e-02,
         2.22803226e-01, -1.24894045e-01, -2.91683090e-02,
        -3.85323450e-01, -6.98339753e-01},
       { 7.86188868e-01,  1.29753550e-01, -3.13759762e-01,
        -4.92680372e-01, -1.00863624e+00, -8.38405860e-01,
        -7.23713164e-01, -4.92333431e-01, -8.51418632e-02,
        -1.44163812e-03, -2.63677771e-01,  8.05738184e-01,
         1.06927504e+00,  1.14784973e+00,  8.00162308e-01,
         5.76132569e-01,  4.59332508e-01,  5.48844871e-01,
         6.06497474e-01,  7.51665805e-01,  8.51026524e-01,
         1.52992839e+00,  1.14969083e+00,  6.38143327e-01,
         2.96828321e-01,  2.56797148e-01, -5.20968604e-02,
        -4.88763392e-01, -3.46734155e-01, -5.66811194e-01,
        -5.09864168e-01, -4.18196308e-01},
       { 2.83513611e+00,  1.07189163e+00,  2.23496662e-01,
        -3.67552654e-01, -7.22878999e-01, -6.48248655e-01,
        -5.89515506e-01, -4.45894526e-01, -5.49301128e-01,
        -4.84522152e-01, -4.98238166e-01, -3.13323030e-01,
        -2.52231377e-01, -2.56733732e-01, -2.53332319e-01,
        -2.34322454e-01, -1.92182299e-01, -1.86356444e-01,
        -1.76552253e-01, -1.69040592e-01, -1.53646386e-01,
        -9.58932230e-02, -1.41206173e-02, -1.06754489e-01,
         2.38348064e-01,  2.05485136e-01,  8.72464179e-01,
         6.17188408e-01,  9.33108910e-01,  9.46482383e-01,
         8.32686817e-01,  5.31411874e-01},
       { 5.85322531e-02, -1.07571732e+00, -7.98178432e-01,
        -1.52574534e+00, -1.33031049e+00, -8.92594503e-01,
        -7.20849955e-01, -5.08181214e-01, -2.75210415e-01,
        -4.41303120e-01, -2.61999495e-01,  4.67887297e-01,
         7.78910699e-01,  6.43599497e-01,  6.07200345e-01,
         5.92941363e-01,  5.12495598e-01,  5.16722351e-01,
         6.77457590e-01,  1.08164507e+00,  1.23288736e+00,
         1.70838381e+00,  2.38097738e+00,  4.15099928e-01,
         7.15880067e-01,  1.61556634e-02, -1.30012986e-01,
        -2.15738223e-01, -2.88222615e-01, -4.75873206e-01,
        -5.19798748e-01, -4.74405632e-01},
       { 4.00643469e-01, -1.22653827e+00, -1.19347318e+00,
        -8.64686336e-01, -2.35321204e-01, -2.04970583e-01,
        -7.30504440e-02,  1.18613303e-01,  4.09615740e-01,
         7.05013739e-01,  3.19167547e-01,  4.07683509e-01,
         8.20403963e-01,  6.10855077e-01, -1.16569625e-01,
        -1.47484843e-01, -7.82565233e-02, -7.01964075e-02,
        -2.28380772e-02, -8.77562818e-03, -3.54755203e-02,
        -3.36978703e-02, -1.52891431e-01, -1.30393083e-01,
        -3.32120799e-01, -2.97643542e-01, -3.61229634e-01,
        -5.61923354e-01, -5.12484561e-01, -4.01769934e-01,
        -4.59320710e-01, -3.81484925e-01},
       {-3.41474450e-01,  2.59142158e+00,  4.23114702e+00,
         1.09636151e+00, -2.10248844e-01, -7.53651011e-01,
        -5.74234333e-01, -9.49233180e-02, -2.50398915e-01,
        -3.23728686e-01,  8.25985543e-01,  1.95352874e+00,
         1.09625862e+00,  2.14820811e+00,  2.87922498e+00,
         1.12595738e+00,  1.36685940e+00,  5.95353475e-01,
         8.46957051e-02,  3.69845568e-02,  9.08998178e-02,
         5.49341298e-02, -9.19850974e-02, -1.35301336e-01,
        -6.64055849e-02, -1.54240862e-01, -2.05004529e-01,
        -4.05889052e-01, -2.97643554e-02, -1.51029283e-01,
         8.35477718e-02,  2.36419179e-03},
       { 5.86327952e-01, -2.44876775e-01, -7.05402440e-01,
        -8.48647550e-01, -1.30292636e+00, -8.02325482e-01,
        -5.83287222e-01, -4.39189443e-01, -4.63121743e-01,
        -3.89426732e-01, -3.96346905e-01, -2.46399665e-01,
        -2.57036326e-01, -2.15790632e-01, -1.86553170e-01,
        -1.37331487e-01, -1.42393021e-01, -1.13720038e-01,
        -1.28086415e-01, -2.30795979e-01, -2.54250418e-01,
        -3.17030466e-01, -3.51719554e-01, -3.74451700e-01,
        -3.93325387e-01, -4.03586760e-01, -5.30855440e-01,
        -5.06751261e-01, -6.11004819e-01, -5.92546442e-01,
        -4.73608071e-01, -6.77301102e-01},
       { 7.17736462e-01, -8.81344867e-04, -3.28535570e-01,
        -1.29856927e+00, -1.15041537e+00, -7.66122568e-01,
        -6.73037576e-01, -5.16023416e-01, -5.18422008e-01,
        -4.18101404e-01, -3.81661991e-01, -2.48921253e-01,
        -1.57074418e-01, -1.77142408e-01, -1.12589490e-01,
        -7.87589429e-02, -4.48648771e-02, -6.75396577e-02,
        -1.17968901e-01, -1.93407195e-01, -1.79880848e-01,
        -2.48588207e-01, -3.31432338e-01, -2.81166697e-01,
        -1.81725307e-01, -3.01233690e-01, -4.01606338e-01,
        -4.76910921e-01, -3.19076796e-01, -5.97988480e-01,
        -4.34023377e-01, -6.48452650e-01},
       { 2.69033874e+00,  3.99362167e+00,  2.43755602e+00,
         2.53378477e+00,  1.53643386e+00,  6.75642512e-01,
         1.87656029e-01, -2.74999877e-02, -2.45146246e-01,
        -3.00233372e-01, -4.02306207e-01, -2.93562442e-01,
        -1.93446618e-01, -2.08063502e-01, -1.65661936e-01,
        -1.15850975e-01, -6.99128716e-02, -1.09292122e-01,
        -1.25840261e-01, -2.20242623e-01, -2.67031310e-01,
        -3.42050289e-01, -4.70761720e-01, -4.00939338e-01,
        -4.79822918e-01, -3.43976766e-01, -3.65638334e-01,
        -3.85716610e-01, -5.63391538e-01, -1.22445866e-01,
        -2.80037383e-01,  1.85682029e-02},
       {-3.07625280e-01, -2.39170883e-01, -2.61659123e-01,
         2.21555052e-01,  8.40196594e-01,  4.80338747e-01,
         6.22580749e-01,  9.78791745e-01,  5.42911636e-01,
         2.90205895e-01, -2.64090229e-01, -2.57247383e-01,
        -2.28016963e-01, -2.53885571e-01, -2.12295753e-01,
        -1.86953817e-01, -1.09756790e-01, -9.07691879e-02,
        -1.17621828e-01, -1.10840661e-01, -2.00381001e-01,
        -1.80017147e-01, -3.12351630e-01, -4.23506015e-01,
        -4.41434608e-01, -3.91122852e-01, -5.25988411e-03,
        -4.80908225e-01, -2.73061926e-01, -6.67666917e-01,
        -5.42586832e-01, -7.36538717e-01},
       {-6.23696095e-02, -4.66440346e-01, -3.09996007e-01,
        -5.59548716e-01,  2.26478217e-03,  1.29344750e-03,
         4.00415005e-01,  6.38302948e-01,  1.01740503e+00,
         7.27665901e-01,  9.74875640e-01,  9.42323039e-01,
         9.41874341e-01,  9.08975165e-01,  9.84811936e-01,
         3.58422297e-01,  2.58817916e-01, -2.19414091e-02,
        -7.62415237e-02, -1.32529806e-01, -1.90412126e-01,
        -2.43355619e-01, -3.89925655e-01, -3.56172691e-01,
        -3.60107116e-01, -2.43351030e-01, -5.29196722e-01,
        -5.03544121e-01, -2.92436608e-01, -6.44932420e-01,
        -5.17187080e-01, -8.09430203e-01},
       {-2.05139376e-01, -1.10531745e+00,  4.54381228e-01,
        -6.65638246e-01,  2.17494268e-01,  1.78053259e-01,
         4.95241925e-01,  4.71551596e-01,  7.35356558e-01,
         5.57424625e-01,  5.57681846e-01, -1.09703050e-01,
        -1.35521693e-01, -2.33370009e-01, -1.52909989e-01,
        -1.98938299e-01, -1.56711840e-01, -1.80603249e-01,
        -1.47136154e-01, -1.94911092e-01, -2.27045535e-01,
        -3.07112698e-01, -4.59366918e-01, -4.17271971e-01,
        -2.77355541e-01, -1.24435864e-01,  5.82734048e-03,
        -4.59899138e-01, -3.64074496e-01, -6.77838951e-01,
        -6.24521514e-01,  4.58095365e-01},
       {-7.25360904e-01, -1.16378652e+00, -2.21972174e-02,
         6.06199718e-01, -2.42810961e-01,  2.13902178e-01,
         6.37874791e-01,  8.17614892e-01,  8.91238247e-01,
         9.59600256e-01,  1.46449842e+00,  9.37768814e-01,
         9.67150902e-01,  8.24812952e-01,  6.30496368e-02,
        -7.70217211e-02, -1.35179653e-01, -7.71634087e-02,
        -1.34785584e-01, -1.38727947e-01, -2.48582275e-01,
        -3.74524539e-01, -4.22300298e-01, -3.86383831e-01,
        -4.26326951e-01, -4.18015089e-01, -5.03093729e-01,
        -5.08285110e-01, -3.81753893e-01, -2.57123603e-01,
        -4.02324897e-01,  1.41878071e-01},
       {-6.82178077e-02,  8.81344867e-04, -1.27922424e+00,
        -1.97075583e+00, -1.25650303e+00, -9.59669967e-01,
        -7.17870930e-01, -6.77435535e-02, -4.44597010e-01,
        -2.57838672e-03,  9.54160311e-01,  8.65376186e-01,
         9.18001331e-01,  8.24548884e-01,  8.75868417e-01,
         8.80052469e-01,  1.06739103e+00,  9.26202427e-01,
         9.41829207e-01,  8.51861833e-01,  4.51874540e-01,
         8.85514987e-02, -4.49759536e-02, -6.41034682e-02,
        -4.73971797e-02, -1.97119415e-02, -1.19711470e-01,
        -1.37604871e-01,  2.79746192e-01,  7.00090277e-02,
         2.45727234e-01, -3.36432461e-01},
       { 5.79926772e-01,  1.19941897e+00,  2.61569218e+00,
         2.65121937e+00,  1.83951998e+00,  8.04061425e-01,
         1.36510423e+00,  1.81471818e+00,  1.54002164e+00,
         1.50074529e+00,  8.60752877e-01,  6.40857061e-01,
        -1.08070260e-01, -1.04825527e-01, -1.36160005e-01,
        -1.22582709e-01, -1.48595381e-01, -1.68576657e-01,
        -1.70553778e-01, -2.05681774e-01, -2.82282365e-01,
        -3.36447394e-01, -4.27483815e-01, -3.94451418e-01,
        -3.97319010e-01, -1.76255917e-01,  1.50048561e-01,
         6.24485812e-01,  3.60102686e-01,  7.59672969e-01,
         6.82080629e-01,  1.00913800e+00}};

int prediction [TEST_SIZE];
void setup() {
  
  Serial.begin(115200);
}

void loop() {
  long start = millis();
  for(int i = 0; i < TEST_SIZE; i++){
    float X_temp [FEATURE_SIZE];
    for(int j = 0; j < FEATURE_SIZE; j++){
      X_temp[j] = X_test[i][j];
    }
    prediction[i] = model.predict(X_temp);
  }
  Serial.print("Time to predict the X_test: ");
  long totTime = millis() - start;
  Serial.println(totTime);
  delay(1000);
}
