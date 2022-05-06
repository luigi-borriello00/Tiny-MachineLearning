#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class GaussianNB {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        float votes[11] = { 0.0f };
                        float theta[32] = { 0 };
                        float sigma[32] = { 0 };
                        theta[0] = -0.755132797697; theta[1] = -0.745442578697; theta[2] = -0.768195028992; theta[3] = -0.748601619741; theta[4] = -0.755628242725; theta[5] = -0.76310480626; theta[6] = -0.753176013371; theta[7] = -0.758089260809; theta[8] = -0.754598326891; theta[9] = -0.755684124885; theta[10] = -0.762514196537; theta[11] = -0.748735526375; theta[12] = -0.748468450603; theta[13] = -0.737995691854; theta[14] = -0.744201257685; theta[15] = -0.749353386034; theta[16] = -0.75887958397; theta[17] = -0.753823550302; theta[18] = -0.763081679341; theta[19] = -0.74628726771; theta[20] = -0.758643375863; theta[21] = -0.757620992737; theta[22] = -0.752151783607; theta[23] = -0.756002690475; theta[24] = -0.749551374198; theta[25] = -0.754372014858; theta[26] = -0.757335458061; theta[27] = -0.752131618636; theta[28] = -0.765615485532; theta[29] = -0.748616973199; theta[30] = -0.751054555226; theta[31] = -0.757968475287;
                        sigma[0] = 0.007071118897; sigma[1] = 0.007103333135; sigma[2] = 0.007072580625; sigma[3] = 0.006504769848; sigma[4] = 0.007111388216; sigma[5] = 0.007456225667; sigma[6] = 0.007499220824; sigma[7] = 0.007350279725; sigma[8] = 0.005820011907; sigma[9] = 0.005910763844; sigma[10] = 0.007120128196; sigma[11] = 0.006418018173; sigma[12] = 0.006554903356; sigma[13] = 0.006881370455; sigma[14] = 0.007572653075; sigma[15] = 0.006669751453; sigma[16] = 0.006260540747; sigma[17] = 0.006191748623; sigma[18] = 0.005933942654; sigma[19] = 0.005097627789; sigma[20] = 0.004981352026; sigma[21] = 0.005311228429; sigma[22] = 0.00527905535; sigma[23] = 0.00507812142; sigma[24] = 0.007814733619; sigma[25] = 0.006045337826; sigma[26] = 0.005903651234; sigma[27] = 0.006965986158; sigma[28] = 0.007788034293; sigma[29] = 0.006809937312; sigma[30] = 0.006969121145; sigma[31] = 0.006609414777;
                        votes[0] = 0.090909090909 - gauss(x, theta, sigma);
                        theta[0] = -0.714442054502; theta[1] = -0.710584472613; theta[2] = -0.729234375159; theta[3] = -0.712535007497; theta[4] = -0.72049412372; theta[5] = -0.722370981116; theta[6] = -0.715248535521; theta[7] = -0.717816332769; theta[8] = -0.711319090335; theta[9] = -0.723653531267; theta[10] = -0.720940607408; theta[11] = -0.712143315817; theta[12] = -0.70241810938; theta[13] = -0.701034035157; theta[14] = -0.710086312474; theta[15] = -0.707227078715; theta[16] = -0.723342289431; theta[17] = -0.718496372584; theta[18] = -0.728191159273; theta[19] = -0.709482734416; theta[20] = -0.720775032442; theta[21] = -0.714184453728; theta[22] = -0.717762108424; theta[23] = -0.718221253941; theta[24] = -0.718922132547; theta[25] = -0.719780812183; theta[26] = -0.720725784965; theta[27] = -0.718324195981; theta[28] = -0.733195644282; theta[29] = -0.716606106704; theta[30] = -0.714149567227; theta[31] = -0.720621856238;
                        sigma[0] = 0.000263150601; sigma[1] = 0.00031618688; sigma[2] = 0.000266095709; sigma[3] = 0.000327852717; sigma[4] = 0.000292019867; sigma[5] = 0.000294098483; sigma[6] = 0.000322348295; sigma[7] = 0.000231143284; sigma[8] = 0.000218139441; sigma[9] = 0.00021948408; sigma[10] = 0.000229390416; sigma[11] = 0.000515880009; sigma[12] = 0.000803692849; sigma[13] = 0.000226388837; sigma[14] = 0.000201446284; sigma[15] = 0.00019021034; sigma[16] = 0.000265896091; sigma[17] = 0.000226848239; sigma[18] = 0.000194464946; sigma[19] = 0.000225177494; sigma[20] = 0.00034561615; sigma[21] = 0.000241437478; sigma[22] = 0.000264581579; sigma[23] = 0.000208562168; sigma[24] = 0.000250113307; sigma[25] = 0.000230470169; sigma[26] = 0.000202636774; sigma[27] = 0.000224051972; sigma[28] = 0.000241931507; sigma[29] = 0.000191670787; sigma[30] = 0.00020852067; sigma[31] = 0.000238359261;
                        votes[1] = 0.090909090909 - gauss(x, theta, sigma);
                        theta[0] = -0.039050695704; theta[1] = -0.042579000834; theta[2] = -0.048491475507; theta[3] = -0.037309706725; theta[4] = -0.042450865032; theta[5] = -0.049880510717; theta[6] = -0.040382813261; theta[7] = -0.04166337728; theta[8] = -0.037078169138; theta[9] = -0.037817133325; theta[10] = -0.04003505217; theta[11] = -0.038423436605; theta[12] = -0.040846358314; theta[13] = -0.036693747587; theta[14] = -0.036705827701; theta[15] = -0.035593146071; theta[16] = -0.041321418597; theta[17] = -0.041465679062; theta[18] = -0.042820365254; theta[19] = -0.03762539559; theta[20] = -0.049957684837; theta[21] = -0.037126077976; theta[22] = -0.036968234461; theta[23] = -0.042832183131; theta[24] = -0.031119172107; theta[25] = -0.040200054317; theta[26] = -0.036853296894; theta[27] = -0.035477214364; theta[28] = -0.03556492735; theta[29] = -0.036131096011; theta[30] = -0.03867971989; theta[31] = -0.039937516935;
                        sigma[0] = 0.018599477558; sigma[1] = 0.019838703357; sigma[2] = 0.019622532639; sigma[3] = 0.02101508207; sigma[4] = 0.022421935998; sigma[5] = 0.020973733123; sigma[6] = 0.021436321822; sigma[7] = 0.022079730896; sigma[8] = 0.020169832951; sigma[9] = 0.024003260452; sigma[10] = 0.023914537196; sigma[11] = 0.021449654126; sigma[12] = 0.022984545043; sigma[13] = 0.021642742633; sigma[14] = 0.021996067999; sigma[15] = 0.023109385837; sigma[16] = 0.023271163858; sigma[17] = 0.023984007984; sigma[18] = 0.02200556447; sigma[19] = 0.022571598633; sigma[20] = 0.021826701864; sigma[21] = 0.02083225046; sigma[22] = 0.023208014663; sigma[23] = 0.023019980732; sigma[24] = 0.023242416108; sigma[25] = 0.024449126741; sigma[26] = 0.025042027278; sigma[27] = 0.025623840998; sigma[28] = 0.025197857201; sigma[29] = 0.020125229212; sigma[30] = 0.021119592529; sigma[31] = 0.020108415869;
                        votes[2] = 0.090909090909 - gauss(x, theta, sigma);
                        theta[0] = -0.963326936057; theta[1] = -0.956497434092; theta[2] = -0.974614232286; theta[3] = -0.953774242565; theta[4] = -0.960217390863; theta[5] = -0.95971744299; theta[6] = -0.948174370396; theta[7] = -0.946533390822; theta[8] = -0.937854839978; theta[9] = -0.949948588168; theta[10] = -0.946577204651; theta[11] = -0.937604907113; theta[12] = -0.926846282197; theta[13] = -0.929117189984; theta[14] = -0.944269430865; theta[15] = -0.939780750761; theta[16] = -0.959239594652; theta[17] = -0.947504236213; theta[18] = -0.955373333634; theta[19] = -0.929989751756; theta[20] = -0.945239745625; theta[21] = -0.93363940338; theta[22] = -0.941013396382; theta[23] = -0.940414113395; theta[24] = -0.942440941501; theta[25] = -0.942060720784; theta[26] = -0.940829188836; theta[27] = -0.937410324869; theta[28] = -0.954773633011; theta[29] = -0.930426186114; theta[30] = -0.932308848606; theta[31] = -0.937742766164;
                        sigma[0] = 0.035363859529; sigma[1] = 0.035251337852; sigma[2] = 0.036317954854; sigma[3] = 0.035808542334; sigma[4] = 0.037005157384; sigma[5] = 0.037445656624; sigma[6] = 0.037984782596; sigma[7] = 0.039213028903; sigma[8] = 0.039364866754; sigma[9] = 0.042454736638; sigma[10] = 0.042848665541; sigma[11] = 0.043520430291; sigma[12] = 0.040724518724; sigma[13] = 0.036832563573; sigma[14] = 0.036086646244; sigma[15] = 0.035655369482; sigma[16] = 0.037122670284; sigma[17] = 0.040628307316; sigma[18] = 0.048074972427; sigma[19] = 0.049420232591; sigma[20] = 0.050526300926; sigma[21] = 0.055274520655; sigma[22] = 0.055416153909; sigma[23] = 0.056528728309; sigma[24] = 0.057109906821; sigma[25] = 0.060505715902; sigma[26] = 0.059256564562; sigma[27] = 0.065189246501; sigma[28] = 0.067458734401; sigma[29] = 0.069148286; sigma[30] = 0.068044158744; sigma[31] = 0.0741716053;
                        votes[3] = 0.090909090909 - gauss(x, theta, sigma);
                        theta[0] = -0.133227480097; theta[1] = -0.131592340319; theta[2] = -0.144630639261; theta[3] = -0.133324408863; theta[4] = -0.132258775807; theta[5] = -0.138787769513; theta[6] = -0.130250928991; theta[7] = -0.129460560754; theta[8] = -0.125488292473; theta[9] = -0.135839975306; theta[10] = -0.139091442041; theta[11] = -0.137005437897; theta[12] = -0.13898900914; theta[13] = -0.130470335991; theta[14] = -0.13317751371; theta[15] = -0.130179534215; theta[16] = -0.128331780626; theta[17] = -0.133332656892; theta[18] = -0.137113092739; theta[19] = -0.134929265054; theta[20] = -0.144938199711; theta[21] = -0.138138178764; theta[22] = -0.136393028347; theta[23] = -0.140296684936; theta[24] = -0.143026976847; theta[25] = -0.142155163084; theta[26] = -0.146050650336; theta[27] = -0.134844902784; theta[28] = -0.142157499773; theta[29] = -0.14292780015; theta[30] = -0.139189874492; theta[31] = -0.133365590105;
                        sigma[0] = 0.021871810481; sigma[1] = 0.021318685487; sigma[2] = 0.021681333727; sigma[3] = 0.022645063832; sigma[4] = 0.024886659639; sigma[5] = 0.021858525295; sigma[6] = 0.0303211795; sigma[7] = 0.020558201774; sigma[8] = 0.021871765895; sigma[9] = 0.022210753353; sigma[10] = 0.022260420031; sigma[11] = 0.021818828294; sigma[12] = 0.020714357366; sigma[13] = 0.022060657454; sigma[14] = 0.0245177751; sigma[15] = 0.02324327006; sigma[16] = 0.025044965969; sigma[17] = 0.023410311882; sigma[18] = 0.022430424214; sigma[19] = 0.021581700747; sigma[20] = 0.022523499672; sigma[21] = 0.023808555298; sigma[22] = 0.0238841866; sigma[23] = 0.023552798341; sigma[24] = 0.025928109921; sigma[25] = 0.025052505951; sigma[26] = 0.026227532804; sigma[27] = 0.026748765177; sigma[28] = 0.028864719235; sigma[29] = 0.025832659197; sigma[30] = 0.025811192394; sigma[31] = 0.023704010108;
                        votes[4] = 0.090909090909 - gauss(x, theta, sigma);
                        theta[0] = -0.02686368109; theta[1] = -0.02898656743; theta[2] = -0.039916334621; theta[3] = -0.030549774295; theta[4] = -0.033059384672; theta[5] = -0.036551802118; theta[6] = -0.032046843053; theta[7] = -0.034996143826; theta[8] = -0.030344299877; theta[9] = -0.033724833244; theta[10] = -0.02972377011; theta[11] = -0.028577815168; theta[12] = -0.027067621732; theta[13] = -0.024573635504; theta[14] = -0.029546537748; theta[15] = -0.032670088453; theta[16] = -0.032142980913; theta[17] = -0.030561412409; theta[18] = -0.032269289297; theta[19] = -0.029627553538; theta[20] = -0.039559740951; theta[21] = -0.029337899313; theta[22] = -0.027475807567; theta[23] = -0.029264515236; theta[24] = -0.025619825416; theta[25] = -0.026959243808; theta[26] = -0.035650921612; theta[27] = -0.027476562182; theta[28] = -0.033244737906; theta[29] = -0.03184835328; theta[30] = -0.028380860212; theta[31] = -0.028522592304;
                        sigma[0] = 0.062524114594; sigma[1] = 0.061116885658; sigma[2] = 0.063035845947; sigma[3] = 0.061706199174; sigma[4] = 0.063119437836; sigma[5] = 0.061938550821; sigma[6] = 0.061273268401; sigma[7] = 0.060947627525; sigma[8] = 0.061523892022; sigma[9] = 0.06316947608; sigma[10] = 0.063689358272; sigma[11] = 0.062978750159; sigma[12] = 0.061127088584; sigma[13] = 0.062273549213; sigma[14] = 0.062852494097; sigma[15] = 0.061807951222; sigma[16] = 0.064510936923; sigma[17] = 0.064193498566; sigma[18] = 0.065718148277; sigma[19] = 0.062703263202; sigma[20] = 0.063470531024; sigma[21] = 0.063541107837; sigma[22] = 0.065054184238; sigma[23] = 0.065058363469; sigma[24] = 0.065463621306; sigma[25] = 0.06553145739; sigma[26] = 0.064271719714; sigma[27] = 0.066185720984; sigma[28] = 0.067486868927; sigma[29] = 0.064846588868; sigma[30] = 0.065568856731; sigma[31] = 0.066582844088;
                        votes[5] = 0.090909090909 - gauss(x, theta, sigma);
                        theta[0] = 0.681287865234; theta[1] = 0.674771638215; theta[2] = 0.668188405059; theta[3] = 0.671619579142; theta[4] = 0.671606582897; theta[5] = 0.669888497043; theta[6] = 0.67776810924; theta[7] = 0.666059192774; theta[8] = 0.679468125646; theta[9] = 0.678435342722; theta[10] = 0.682587895971; theta[11] = 0.679534629; theta[12] = 0.670323376059; theta[13] = 0.672208855101; theta[14] = 0.669750514315; theta[15] = 0.665957811252; theta[16] = 0.676381994573; theta[17] = 0.676530972553; theta[18] = 0.684791802778; theta[19] = 0.664185294672; theta[20] = 0.662715706583; theta[21] = 0.672248751658; theta[22] = 0.678601396609; theta[23] = 0.678750129741; theta[24] = 0.68990561273; theta[25] = 0.685658145419; theta[26] = 0.670678351997; theta[27] = 0.685041372845; theta[28] = 0.688219077205; theta[29] = 0.672839613277; theta[30] = 0.676150322862; theta[31] = 0.681633707037;
                        sigma[0] = 0.004368405513; sigma[1] = 0.004562053129; sigma[2] = 0.004464947251; sigma[3] = 0.004577726108; sigma[4] = 0.005267486521; sigma[5] = 0.004677508307; sigma[6] = 0.004857352075; sigma[7] = 0.004689753671; sigma[8] = 0.005432792741; sigma[9] = 0.004952995719; sigma[10] = 0.005714041374; sigma[11] = 0.004725337898; sigma[12] = 0.004080584753; sigma[13] = 0.004602328851; sigma[14] = 0.004628279378; sigma[15] = 0.004770021629; sigma[16] = 0.005508622579; sigma[17] = 0.00499845633; sigma[18] = 0.006156910232; sigma[19] = 0.00398339539; sigma[20] = 0.004993342892; sigma[21] = 0.004312949778; sigma[22] = 0.004935916086; sigma[23] = 0.004859368426; sigma[24] = 0.005572444673; sigma[25] = 0.004870488926; sigma[26] = 0.004844390863; sigma[27] = 0.005367648519; sigma[28] = 0.007524134308; sigma[29] = 0.006532856762; sigma[30] = 0.005836572815; sigma[31] = 0.005228844343;
                        votes[6] = 0.090909090909 - gauss(x, theta, sigma);
                        theta[0] = 0.027339512397; theta[1] = 0.028021012927; theta[2] = 0.016755087691; theta[3] = 0.02557901288; theta[4] = 0.0252680043; theta[5] = 0.022637463608; theta[6] = 0.02913948658; theta[7] = 0.023004758984; theta[8] = 0.026934569716; theta[9] = 0.02243181033; theta[10] = 0.026034713087; theta[11] = 0.027842398527; theta[12] = 0.026727600139; theta[13] = 0.029191092497; theta[14] = 0.026361301766; theta[15] = 0.02190560412; theta[16] = 0.02498904271; theta[17] = 0.025002282989; theta[18] = 0.023708841342; theta[19] = 0.025109802616; theta[20] = 0.016381005731; theta[21] = 0.023784822829; theta[22] = 0.025340403194; theta[23] = 0.024434481229; theta[24] = 0.026654895522; theta[25] = 0.025095514348; theta[26] = 0.015808298145; theta[27] = 0.024493845025; theta[28] = 0.018944982137; theta[29] = 0.018457708231; theta[30] = 0.022433467758; theta[31] = 0.02110224446;
                        sigma[0] = 0.007730919468; sigma[1] = 0.007264083323; sigma[2] = 0.007530946612; sigma[3] = 0.007264748257; sigma[4] = 0.007666030935; sigma[5] = 0.007926538206; sigma[6] = 0.007733096506; sigma[7] = 0.007485594697; sigma[8] = 0.007423276148; sigma[9] = 0.007887241212; sigma[10] = 0.007896500162; sigma[11] = 0.007563587781; sigma[12] = 0.007278510364; sigma[13] = 0.006996618299; sigma[14] = 0.007386987129; sigma[15] = 0.007283074782; sigma[16] = 0.007660848806; sigma[17] = 0.007649023997; sigma[18] = 0.007746227421; sigma[19] = 0.007233699265; sigma[20] = 0.007396819677; sigma[21] = 0.007178370138; sigma[22] = 0.007378611693; sigma[23] = 0.007149565328; sigma[24] = 0.00758243609; sigma[25] = 0.007349803517; sigma[26] = 0.007376447794; sigma[27] = 0.007430658298; sigma[28] = 0.007870943691; sigma[29] = 0.007229340843; sigma[30] = 0.007686183463; sigma[31] = 0.007779116018;
                        votes[7] = 0.090909090909 - gauss(x, theta, sigma);
                        theta[0] = 0.266616586294; theta[1] = 0.262503237739; theta[2] = 0.255939426673; theta[3] = 0.26765347731; theta[4] = 0.270915208012; theta[5] = 0.263420693955; theta[6] = 0.268946548535; theta[7] = 0.264053779961; theta[8] = 0.266421688715; theta[9] = 0.262671330187; theta[10] = 0.268447532049; theta[11] = 0.269594311748; theta[12] = 0.266458547412; theta[13] = 0.268682435203; theta[14] = 0.263615531419; theta[15] = 0.262897523687; theta[16] = 0.264483294974; theta[17] = 0.266727208158; theta[18] = 0.260961612901; theta[19] = 0.268577900694; theta[20] = 0.250251472971; theta[21] = 0.262014368298; theta[22] = 0.269090047123; theta[23] = 0.264024356738; theta[24] = 0.273184895583; theta[25] = 0.264421900812; theta[26] = 0.256674323222; theta[27] = 0.272946643297; theta[28] = 0.264142470523; theta[29] = 0.256909888389; theta[30] = 0.261339170984; theta[31] = 0.259622127195;
                        sigma[0] = 0.006760671688; sigma[1] = 0.006722474005; sigma[2] = 0.007740694016; sigma[3] = 0.007057636718; sigma[4] = 0.008870335544; sigma[5] = 0.007223739695; sigma[6] = 0.007917473667; sigma[7] = 0.007228141821; sigma[8] = 0.006343123859; sigma[9] = 0.007572976921; sigma[10] = 0.007842929904; sigma[11] = 0.00708768214; sigma[12] = 0.007829149345; sigma[13] = 0.006301388193; sigma[14] = 0.006382625572; sigma[15] = 0.007797517075; sigma[16] = 0.006320562762; sigma[17] = 0.006761677771; sigma[18] = 0.006092141272; sigma[19] = 0.006688412542; sigma[20] = 0.006291074859; sigma[21] = 0.006720944783; sigma[22] = 0.006274749262; sigma[23] = 0.005863621206; sigma[24] = 0.005933778952; sigma[25] = 0.006030684568; sigma[26] = 0.006604489474; sigma[27] = 0.007247258614; sigma[28] = 0.006557585155; sigma[29] = 0.007046143864; sigma[30] = 0.006584914376; sigma[31] = 0.006180670118;
                        votes[8] = 0.090909090909 - gauss(x, theta, sigma);
                        theta[0] = 0.446268876709; theta[1] = 0.444260399213; theta[2] = 0.432454829867; theta[3] = 0.438150189738; theta[4] = 0.437757970016; theta[5] = 0.441016809993; theta[6] = 0.4463665904; theta[7] = 0.443074372537; theta[8] = 0.446351542353; theta[9] = 0.452054940135; theta[10] = 0.451268394218; theta[11] = 0.453077410781; theta[12] = 0.443360615184; theta[13] = 0.444357108142; theta[14] = 0.439868339289; theta[15] = 0.432728446035; theta[16] = 0.439300588534; theta[17] = 0.439746841865; theta[18] = 0.440830044464; theta[19] = 0.43708741291; theta[20] = 0.429265670715; theta[21] = 0.44067514442; theta[22] = 0.443431418828; theta[23] = 0.445468930302; theta[24] = 0.447998871279; theta[25] = 0.447449343192; theta[26] = 0.431494885313; theta[27] = 0.446048893327; theta[28] = 0.443292531993; theta[29] = 0.437253254299; theta[30] = 0.439722354672; theta[31] = 0.443149883977;
                        sigma[0] = 0.014747844159; sigma[1] = 0.01435832411; sigma[2] = 0.014869241309; sigma[3] = 0.014512437192; sigma[4] = 0.014762867812; sigma[5] = 0.014094856421; sigma[6] = 0.01511237389; sigma[7] = 0.014841015133; sigma[8] = 0.015667209666; sigma[9] = 0.01617224319; sigma[10] = 0.015726436476; sigma[11] = 0.014737533869; sigma[12] = 0.014279158541; sigma[13] = 0.013977994012; sigma[14] = 0.014394906198; sigma[15] = 0.013882422434; sigma[16] = 0.015352240395; sigma[17] = 0.014498287602; sigma[18] = 0.014925870309; sigma[19] = 0.014170005821; sigma[20] = 0.014267714137; sigma[21] = 0.013391279815; sigma[22] = 0.014558715109; sigma[23] = 0.014276609754; sigma[24] = 0.014541411731; sigma[25] = 0.014357552622; sigma[26] = 0.014560983788; sigma[27] = 0.014273278652; sigma[28] = 0.015582899424; sigma[29] = 0.014692891197; sigma[30] = 0.014933487516; sigma[31] = 0.015135023794;
                        votes[9] = 0.090909090909 - gauss(x, theta, sigma);
                        theta[0] = 0.351509221836; theta[1] = 0.339860008256; theta[2] = 0.334786046938; theta[3] = 0.340681135758; theta[4] = 0.335191123901; theta[5] = 0.340614539594; theta[6] = 0.341157648557; theta[7] = 0.345480584519; theta[8] = 0.345118385847; theta[9] = 0.34567946409; theta[10] = 0.345961544747; theta[11] = 0.352253394621; theta[12] = 0.34369522848; theta[13] = 0.34052177774; theta[14] = 0.339297615145; theta[15] = 0.32880932606; theta[16] = 0.337414609584; theta[17] = 0.341942164274; theta[18] = 0.344543616862; theta[19] = 0.347852681992; theta[20] = 0.333910465144; theta[21] = 0.33781612375; theta[22] = 0.346156984268; theta[23] = 0.341355779739; theta[24] = 0.350301401291; theta[25] = 0.348223872155; theta[26] = 0.333053007856; theta[27] = 0.346997615457; theta[28] = 0.340988328919; theta[29] = 0.334230064642; theta[30] = 0.3426750891; theta[31] = 0.343229744954;
                        sigma[0] = 0.003168161203; sigma[1] = 0.002126766222; sigma[2] = 0.002327796877; sigma[3] = 0.00352799255; sigma[4] = 0.002792770929; sigma[5] = 0.002804785984; sigma[6] = 0.002080746827; sigma[7] = 0.003460084715; sigma[8] = 0.003397126241; sigma[9] = 0.004167714534; sigma[10] = 0.003349977304; sigma[11] = 0.004352439207; sigma[12] = 0.002686856703; sigma[13] = 0.002165367282; sigma[14] = 0.002321629426; sigma[15] = 0.002439540336; sigma[16] = 0.002520447493; sigma[17] = 0.002235504429; sigma[18] = 0.002735986776; sigma[19] = 0.002682022664; sigma[20] = 0.002779368272; sigma[21] = 0.002283113455; sigma[22] = 0.002532254082; sigma[23] = 0.002652024187; sigma[24] = 0.002651890461; sigma[25] = 0.00295601933; sigma[26] = 0.002475092986; sigma[27] = 0.003495641981; sigma[28] = 0.002596134143; sigma[29] = 0.002715286561; sigma[30] = 0.002566632132; sigma[31] = 0.002602800969;
                        votes[10] = 0.090909090909 - gauss(x, theta, sigma);
                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 11; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                    /**
                    * Compute gaussian value
                    */
                    float gauss(float *x, float *theta, float *sigma) {
                        float gauss = 0.0f;

                        for (uint16_t i = 0; i < 32; i++) {
                            gauss += log(sigma[i]);
                            gauss += abs(x[i] - theta[i]) / sigma[i];
                        }

                        return gauss;
                    }
                };
            }
        }
    }