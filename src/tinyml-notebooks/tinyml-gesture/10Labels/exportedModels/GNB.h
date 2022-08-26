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
                        float votes[10] = { 0.0f };
                        float theta[42] = { 0 };
                        float sigma[42] = { 0 };
                        theta[0] = 0.072375; theta[1] = -0.0475; theta[2] = 0.967125; theta[3] = 0.102375; theta[4] = -0.073; theta[5] = 1.046625; theta[6] = 0.092875; theta[7] = -0.16975; theta[8] = 0.905375; theta[9] = 0.12225; theta[10] = 0.08725; theta[11] = 0.758; theta[12] = 0.09625; theta[13] = 0.201875; theta[14] = 1.018875; theta[15] = 0.02575; theta[16] = 0.042125; theta[17] = 1.123875; theta[18] = 0.036875; theta[19] = -0.082; theta[20] = 1.034375; theta[21] = 0.081875; theta[22] = -0.02825; theta[23] = 0.85025; theta[24] = 0.091; theta[25] = 0.025125; theta[26] = 0.893625; theta[27] = 0.050375; theta[28] = 0.070625; theta[29] = 1.026875; theta[30] = 0.009; theta[31] = -0.016875; theta[32] = 1.032; theta[33] = 0.013375; theta[34] = -0.0535; theta[35] = 0.983125; theta[36] = 0.02275; theta[37] = -0.0325; theta[38] = 0.973625; theta[39] = 0.025875; theta[40] = -0.02975; theta[41] = 0.980875;
                        sigma[0] = 0.001598109488; sigma[1] = 0.001088750113; sigma[2] = 0.012470484488; sigma[3] = 0.001963109488; sigma[4] = 0.003383500113; sigma[5] = 0.004832359488; sigma[6] = 0.002110484488; sigma[7] = 0.006737437613; sigma[8] = 0.012499859488; sigma[9] = 0.001424937613; sigma[10] = 0.009099937613; sigma[11] = 0.006158500113; sigma[12] = 0.003230937613; sigma[13] = 0.005237734488; sigma[14] = 0.007514984488; sigma[15] = 0.002311937613; sigma[16] = 0.008974234488; sigma[17] = 0.004083734488; sigma[18] = 0.001916484488; sigma[19] = 0.003091000113; sigma[20] = 0.006592109488; sigma[21] = 0.001987734488; sigma[22] = 0.003521937613; sigma[23] = 0.006572437613; sigma[24] = 0.002764000113; sigma[25] = 0.003799984488; sigma[26] = 0.006288109488; sigma[27] = 0.004013609488; sigma[28] = 0.003495859488; sigma[29] = 0.004346484488; sigma[30] = 0.003409000113; sigma[31] = 0.005586484488; sigma[32] = 0.002228500113; sigma[33] = 0.002314859488; sigma[34] = 0.003175250113; sigma[35] = 0.000586484488; sigma[36] = 0.002119937613; sigma[37] = 0.003173750113; sigma[38] = 0.000638109488; sigma[39] = 0.002694234488; sigma[40] = 0.002707437613; sigma[41] = 0.000245484488;
                        votes[0] = 0.1 - gauss(x, theta, sigma);
                        theta[0] = 0.171375; theta[1] = -0.079; theta[2] = 0.955125; theta[3] = 0.18225; theta[4] = -0.033875; theta[5] = 0.94575; theta[6] = 0.2045; theta[7] = -0.089375; theta[8] = 1.22575; theta[9] = 0.218625; theta[10] = -0.238375; theta[11] = 0.869125; theta[12] = 0.327375; theta[13] = 0.050625; theta[14] = 0.518875; theta[15] = 0.323875; theta[16] = 0.2145; theta[17] = 0.842; theta[18] = 0.237; theta[19] = 0.19775; theta[20] = 1.162625; theta[21] = 0.168875; theta[22] = -0.0205; theta[23] = 1.017; theta[24] = 0.221875; theta[25] = 0.092; theta[26] = 0.828125; theta[27] = 0.2165; theta[28] = 0.049125; theta[29] = 0.982875; theta[30] = 0.201125; theta[31] = -0.050375; theta[32] = 0.960375; theta[33] = 0.211375; theta[34] = -0.032125; theta[35] = 0.94975; theta[36] = 0.213375; theta[37] = -0.023875; theta[38] = 0.95375; theta[39] = 0.213125; theta[40] = -0.03325; theta[41] = 0.95375;
                        sigma[0] = 0.002881859488; sigma[1] = 0.004981500113; sigma[2] = 0.013294984488; sigma[3] = 0.002939937613; sigma[4] = 0.009848734488; sigma[5] = 0.003064437613; sigma[6] = 0.006967250113; sigma[7] = 0.024298359488; sigma[8] = 0.023104437613; sigma[9] = 0.006646859488; sigma[10] = 0.017818609488; sigma[11] = 0.036980484488; sigma[12] = 0.003916859488; sigma[13] = 0.020730859488; sigma[14] = 0.030359984488; sigma[15] = 0.008063734488; sigma[16] = 0.013337250113; sigma[17] = 0.035931000113; sigma[18] = 0.008543500113; sigma[19] = 0.020332437613; sigma[20] = 0.028301859488; sigma[21] = 0.007139984488; sigma[22] = 0.019362250113; sigma[23] = 0.039796000113; sigma[24] = 0.004585234488; sigma[25] = 0.015393500113; sigma[26] = 0.021005234488; sigma[27] = 0.004587750113; sigma[28] = 0.016282984488; sigma[29] = 0.012845484488; sigma[30] = 0.004084984488; sigma[31] = 0.012846109488; sigma[32] = 0.003328609488; sigma[33] = 0.004064359488; sigma[34] = 0.007774234488; sigma[35] = 0.001092437613; sigma[36] = 0.003869859488; sigma[37] = 0.005443734488; sigma[38] = 0.001225937613; sigma[39] = 0.003593984488; sigma[40] = 0.005416937613; sigma[41] = 0.000708437613;
                        votes[1] = 0.1 - gauss(x, theta, sigma);
                        theta[0] = 0.110125; theta[1] = -0.021125; theta[2] = 0.973; theta[3] = 0.1445; theta[4] = -0.042125; theta[5] = 1.017875; theta[6] = 0.10475; theta[7] = -0.10875; theta[8] = 0.794625; theta[9] = 0.134625; theta[10] = 0.25625; theta[11] = 0.817125; theta[12] = 0.075875; theta[13] = 0.200625; theta[14] = 1.174; theta[15] = 0.058625; theta[16] = -0.027875; theta[17] = 1.132625; theta[18] = 0.193; theta[19] = 0.030375; theta[20] = 0.831875; theta[21] = 0.310875; theta[22] = 0.0535; theta[23] = 0.678375; theta[24] = 0.24975; theta[25] = 0.086375; theta[26] = 0.846125; theta[27] = 0.1445; theta[28] = 0.122125; theta[29] = 1.00125; theta[30] = 0.057375; theta[31] = 0.074125; theta[32] = 1.053875; theta[33] = 0.036125; theta[34] = 0.01675; theta[35] = 1.003; theta[36] = 0.04075; theta[37] = 0.014875; theta[38] = 0.982875; theta[39] = 0.049125; theta[40] = 0.0155; theta[41] = 0.9715;
                        sigma[0] = 0.006331234488; sigma[1] = 0.004542484488; sigma[2] = 0.014823500113; sigma[3] = 0.006957250113; sigma[4] = 0.006604234488; sigma[5] = 0.019056734488; sigma[6] = 0.007937437613; sigma[7] = 0.041865937613; sigma[8] = 0.048094859488; sigma[9] = 0.010507359488; sigma[10] = 0.035263437613; sigma[11] = 0.045505484488; sigma[12] = 0.010374234488; sigma[13] = 0.036985859488; sigma[14] = 0.029419000113; sigma[15] = 0.011811859488; sigma[16] = 0.011766734488; sigma[17] = 0.032979359488; sigma[18] = 0.013233500113; sigma[19] = 0.007058609488; sigma[20] = 0.038927734488; sigma[21] = 0.008182984488; sigma[22] = 0.005747750113; sigma[23] = 0.024973609488; sigma[24] = 0.012257437613; sigma[25] = 0.008035609488; sigma[26] = 0.026233734488; sigma[27] = 0.011729750113; sigma[28] = 0.011954234488; sigma[29] = 0.016820937613; sigma[30] = 0.007439359488; sigma[31] = 0.011471734488; sigma[32] = 0.005983734488; sigma[33] = 0.005913734488; sigma[34] = 0.010674437613; sigma[35] = 0.002946000113; sigma[36] = 0.005874437613; sigma[37] = 0.005354984488; sigma[38] = 0.001560484488; sigma[39] = 0.004682984488; sigma[40] = 0.005117250113; sigma[41] = 0.000640250113;
                        votes[2] = 0.1 - gauss(x, theta, sigma);
                        theta[0] = 0.06525; theta[1] = -0.04175; theta[2] = 0.98025; theta[3] = 0.06975; theta[4] = 0.022875; theta[5] = 0.971; theta[6] = 0.074375; theta[7] = 0.033625; theta[8] = 1.06125; theta[9] = 0.079; theta[10] = -0.135875; theta[11] = 1.043875; theta[12] = 0.119375; theta[13] = -0.0695; theta[14] = 0.8375; theta[15] = 0.16125; theta[16] = 0.102625; theta[17] = 0.864375; theta[18] = 0.11975; theta[19] = 0.155125; theta[20] = 1.011625; theta[21] = 0.066125; theta[22] = 0.08175; theta[23] = 1.023; theta[24] = 0.053625; theta[25] = 0.011; theta[26] = 0.98575; theta[27] = 0.05525; theta[28] = -0.004375; theta[29] = 0.981375; theta[30] = 0.06025; theta[31] = 0.01925; theta[32] = 0.981875; theta[33] = 0.0635; theta[34] = 0.0285; theta[35] = 0.977625; theta[36] = 0.066; theta[37] = 0.027125; theta[38] = 0.978625; theta[39] = 0.066375; theta[40] = 0.026; theta[41] = 0.9785;
                        sigma[0] = 0.001117437613; sigma[1] = 0.001474437613; sigma[2] = 0.000494937613; sigma[3] = 0.001242437613; sigma[4] = 0.004032984488; sigma[5] = 0.001216500113; sigma[6] = 0.001522109488; sigma[7] = 0.006610609488; sigma[8] = 0.002703437613; sigma[9] = 0.002131500113; sigma[10] = 0.005941734488; sigma[11] = 0.005636234488; sigma[12] = 0.001278359488; sigma[13] = 0.005432250113; sigma[14] = 0.009403750113; sigma[15] = 0.001320937613; sigma[16] = 0.009524359488; sigma[17] = 0.005162109488; sigma[18] = 0.002042437613; sigma[19] = 0.004732484488; sigma[20] = 0.004553609488; sigma[21] = 0.001988734488; sigma[22] = 0.004006937613; sigma[23] = 0.001378500113; sigma[24] = 0.001335609488; sigma[25] = 0.003526500113; sigma[26] = 0.000891937613; sigma[27] = 0.001194937613; sigma[28] = 0.002642109488; sigma[29] = 0.000576859488; sigma[30] = 0.001357437613; sigma[31] = 0.002809437613; sigma[32] = 0.000342734488; sigma[33] = 0.001195250113; sigma[34] = 0.002270250113; sigma[35] = 0.000445609488; sigma[36] = 0.001086500113; sigma[37] = 0.001770484488; sigma[38] = 0.000341859488; sigma[39] = 0.001288109488; sigma[40] = 0.001996500113; sigma[41] = 0.000305250113;
                        votes[3] = 0.1 - gauss(x, theta, sigma);
                        theta[0] = 0.13525; theta[1] = -0.03775; theta[2] = 0.942125; theta[3] = 0.15725; theta[4] = -0.032875; theta[5] = 1.017125; theta[6] = 0.11575; theta[7] = -0.0785; theta[8] = 0.777375; theta[9] = 0.132625; theta[10] = 0.27125; theta[11] = 0.9685; theta[12] = 0.09175; theta[13] = 0.052375; theta[14] = 1.102625; theta[15] = 0.122125; theta[16] = 0.057625; theta[17] = 0.891; theta[18] = 0.123875; theta[19] = 0.085625; theta[20] = 0.853125; theta[21] = 0.075625; theta[22] = 0.04225; theta[23] = 0.956375; theta[24] = 0.025625; theta[25] = 0.145625; theta[26] = 1.05175; theta[27] = 0.003875; theta[28] = 0.18725; theta[29] = 1.019125; theta[30] = 0.030875; theta[31] = 0.1325; theta[32] = 0.99775; theta[33] = 0.07125; theta[34] = 0.0585; theta[35] = 0.9485; theta[36] = 0.124; theta[37] = 0.011125; theta[38] = 0.93725; theta[39] = 0.150875; theta[40] = 0.003875; theta[41] = 0.938375;
                        sigma[0] = 0.005399937613; sigma[1] = 0.004399937613; sigma[2] = 0.024206734488; sigma[3] = 0.012779937613; sigma[4] = 0.024167984488; sigma[5] = 0.011415484488; sigma[6] = 0.005216937613; sigma[7] = 0.040465250113; sigma[8] = 0.080051859488; sigma[9] = 0.007574359488; sigma[10] = 0.056518437613; sigma[11] = 0.051387750113; sigma[12] = 0.007426937613; sigma[13] = 0.060953109488; sigma[14] = 0.035446859488; sigma[15] = 0.007774234488; sigma[16] = 0.043520609488; sigma[17] = 0.031949000113; sigma[18] = 0.008468734488; sigma[19] = 0.017049609488; sigma[20] = 0.011361484488; sigma[21] = 0.009574609488; sigma[22] = 0.021699937613; sigma[23] = 0.017308109488; sigma[24] = 0.009629609488; sigma[25] = 0.032604609488; sigma[26] = 0.017241937613; sigma[27] = 0.006351234488; sigma[28] = 0.023937437613; sigma[29] = 0.013180484488; sigma[30] = 0.006357984488; sigma[31] = 0.039123750113; sigma[32] = 0.009247437613; sigma[33] = 0.006783437613; sigma[34] = 0.025822750113; sigma[35] = 0.010145250113; sigma[36] = 0.006669000113; sigma[37] = 0.009872484488; sigma[38] = 0.006787437613; sigma[39] = 0.005425484488; sigma[40] = 0.007453734488; sigma[41] = 0.004948609488;
                        votes[4] = 0.1 - gauss(x, theta, sigma);
                        theta[0] = 0.0685; theta[1] = -0.0505; theta[2] = 0.962625; theta[3] = 0.063875; theta[4] = -0.03; theta[5] = 0.96175; theta[6] = 0.082125; theta[7] = 0.01775; theta[8] = 1.07175; theta[9] = 0.084; theta[10] = -0.0905; theta[11] = 1.066875; theta[12] = 0.144125; theta[13] = -0.03575; theta[14] = 0.80425; theta[15] = 0.164125; theta[16] = -0.014125; theta[17] = 0.850625; theta[18] = 0.127625; theta[19] = 0.0705; theta[20] = 1.01075; theta[21] = 0.075125; theta[22] = 0.05575; theta[23] = 1.039625; theta[24] = 0.040625; theta[25] = -0.030375; theta[26] = 0.997625; theta[27] = 0.046375; theta[28] = -0.034875; theta[29] = 0.98075; theta[30] = 0.05825; theta[31] = -0.009625; theta[32] = 0.986875; theta[33] = 0.063625; theta[34] = -0.00125; theta[35] = 0.982625; theta[36] = 0.0605; theta[37] = -0.0075; theta[38] = 0.98225; theta[39] = 0.06075; theta[40] = -0.008125; theta[41] = 0.983875;
                        sigma[0] = 0.001467750113; sigma[1] = 0.002524750113; sigma[2] = 0.012471859488; sigma[3] = 0.002008734488; sigma[4] = 0.003595000113; sigma[5] = 0.001864437613; sigma[6] = 0.001719234488; sigma[7] = 0.007059937613; sigma[8] = 0.005701937613; sigma[9] = 0.001786500113; sigma[10] = 0.005737250113; sigma[11] = 0.008328984488; sigma[12] = 0.002264234488; sigma[13] = 0.002589437613; sigma[14] = 0.009926937613; sigma[15] = 0.003579234488; sigma[16] = 0.006099234488; sigma[17] = 0.006400859488; sigma[18] = 0.003243109488; sigma[19] = 0.013739750113; sigma[20] = 0.006446937613; sigma[21] = 0.003524984488; sigma[22] = 0.007766937613; sigma[23] = 0.002341109488; sigma[24] = 0.001785859488; sigma[25] = 0.004171109488; sigma[26] = 0.001300609488; sigma[27] = 0.001790609488; sigma[28] = 0.004032484488; sigma[29] = 0.001174437613; sigma[30] = 0.001581937613; sigma[31] = 0.003668609488; sigma[32] = 0.000678984488; sigma[33] = 0.001600609488; sigma[34] = 0.003810937613; sigma[35] = 0.000551859488; sigma[36] = 0.001599750113; sigma[37] = 0.003363750113; sigma[38] = 0.000612437613; sigma[39] = 0.001551937613; sigma[40] = 0.004035234488; sigma[41] = 0.000663734488;
                        votes[5] = 0.1 - gauss(x, theta, sigma);
                        theta[0] = 0.123125; theta[1] = -0.010625; theta[2] = 0.958375; theta[3] = 0.144125; theta[4] = 0.0575; theta[5] = 0.964375; theta[6] = 0.1275; theta[7] = -0.0425; theta[8] = 1.175875; theta[9] = 0.183125; theta[10] = -0.12675; theta[11] = 0.957375; theta[12] = 0.319875; theta[13] = 0.033875; theta[14] = 0.647125; theta[15] = 0.36325; theta[16] = 0.144; theta[17] = 0.739625; theta[18] = 0.271125; theta[19] = 0.16725; theta[20] = 0.9635; theta[21] = 0.174625; theta[22] = 0.13225; theta[23] = 1.04725; theta[24] = 0.1205; theta[25] = 0.032875; theta[26] = 0.995; theta[27] = 0.11825; theta[28] = 0.01475; theta[29] = 0.976125; theta[30] = 0.122875; theta[31] = 0.032875; theta[32] = 0.975; theta[33] = 0.128875; theta[34] = 0.03375; theta[35] = 0.968375; theta[36] = 0.125875; theta[37] = 0.031125; theta[38] = 0.968125; theta[39] = 0.12475; theta[40] = 0.02425; theta[41] = 0.966875;
                        sigma[0] = 0.002598984488; sigma[1] = 0.002318359488; sigma[2] = 0.012438609488; sigma[3] = 0.003609234488; sigma[4] = 0.005686250113; sigma[5] = 0.002472109488; sigma[6] = 0.007718750113; sigma[7] = 0.021178750113; sigma[8] = 0.015129234488; sigma[9] = 0.007253984488; sigma[10] = 0.005914437613; sigma[11] = 0.023249359488; sigma[12] = 0.004921234488; sigma[13] = 0.008031234488; sigma[14] = 0.018682984488; sigma[15] = 0.004661937613; sigma[16] = 0.004454000113; sigma[17] = 0.015658609488; sigma[18] = 0.006827484488; sigma[19] = 0.007507437613; sigma[20] = 0.012047750113; sigma[21] = 0.007927359488; sigma[22] = 0.008539937613; sigma[23] = 0.003084937613; sigma[24] = 0.005292250113; sigma[25] = 0.007850484488; sigma[26] = 0.002005000113; sigma[27] = 0.004579437613; sigma[28] = 0.005284937613; sigma[29] = 0.001183734488; sigma[30] = 0.004755484488; sigma[31] = 0.005352984488; sigma[32] = 0.001097500113; sigma[33] = 0.004002484488; sigma[34] = 0.004328437613; sigma[35] = 0.000573609488; sigma[36] = 0.004261734488; sigma[37] = 0.004247484488; sigma[38] = 0.000520234488; sigma[39] = 0.003897437613; sigma[40] = 0.003059437613; sigma[41] = 0.000433984488;
                        votes[6] = 0.1 - gauss(x, theta, sigma);
                        theta[0] = 0.15; theta[1] = -0.03325; theta[2] = 0.961375; theta[3] = 0.168875; theta[4] = -0.023375; theta[5] = 0.997625; theta[6] = 0.170375; theta[7] = -0.025375; theta[8] = 0.8585; theta[9] = 0.12775; theta[10] = -0.128125; theta[11] = 0.968375; theta[12] = 0.16275; theta[13] = 0.02425; theta[14] = 1.087125; theta[15] = 0.154875; theta[16] = -0.024125; theta[17] = 0.85; theta[18] = 0.132375; theta[19] = -0.11975; theta[20] = 0.931875; theta[21] = 0.140875; theta[22] = -0.024375; theta[23] = 1.052875; theta[24] = 0.143375; theta[25] = -0.011625; theta[26] = 0.95; theta[27] = 0.127125; theta[28] = -0.11575; theta[29] = 0.9005; theta[30] = 0.119125; theta[31] = -0.126125; theta[32] = 0.99625; theta[33] = 0.118375; theta[34] = -0.094125; theta[35] = 0.976875; theta[36] = 0.1105; theta[37] = -0.093; theta[38] = 0.965375; theta[39] = 0.114125; theta[40] = -0.089375; theta[41] = 0.966125;
                        sigma[0] = 0.005782500113; sigma[1] = 0.002861937613; sigma[2] = 0.012826859488; sigma[3] = 0.006689984488; sigma[4] = 0.004219859488; sigma[5] = 0.007188109488; sigma[6] = 0.005666109488; sigma[7] = 0.009394859488; sigma[8] = 0.019252750113; sigma[9] = 0.006944937613; sigma[10] = 0.007002734488; sigma[11] = 0.017591109488; sigma[12] = 0.009019937613; sigma[13] = 0.005224437613; sigma[14] = 0.010710484488; sigma[15] = 0.004407484488; sigma[16] = 0.007146734488; sigma[17] = 0.015032500113; sigma[18] = 0.006575609488; sigma[19] = 0.004919937613; sigma[20] = 0.011995234488; sigma[21] = 0.009300484488; sigma[22] = 0.008322109488; sigma[23] = 0.006110484488; sigma[24] = 0.005194859488; sigma[25] = 0.007373609488; sigma[26] = 0.014775000113; sigma[27] = 0.006045484488; sigma[28] = 0.004421937613; sigma[29] = 0.008807250113; sigma[30] = 0.007200484488; sigma[31] = 0.005276234488; sigma[32] = 0.003658437613; sigma[33] = 0.005968609488; sigma[34] = 0.003771734488; sigma[35] = 0.001038984488; sigma[36] = 0.005739750113; sigma[37] = 0.002381000113; sigma[38] = 0.000522359488; sigma[39] = 0.005679234488; sigma[40] = 0.002923359488; sigma[41] = 0.000436234488;
                        votes[7] = 0.1 - gauss(x, theta, sigma);
                        theta[0] = 0.016125; theta[1] = 0.005125; theta[2] = 0.984625; theta[3] = 0.016375; theta[4] = 0.03175; theta[5] = 0.9665; theta[6] = 0.016125; theta[7] = 0.055625; theta[8] = 1.10125; theta[9] = 0.03525; theta[10] = -0.11425; theta[11] = 1.094625; theta[12] = 0.1055; theta[13] = -0.05675; theta[14] = 0.86625; theta[15] = 0.173375; theta[16] = 0.100125; theta[17] = 0.779875; theta[18] = 0.165375; theta[19] = 0.148625; theta[20] = 0.877375; theta[21] = 0.094125; theta[22] = 0.140125; theta[23] = 1.0; theta[24] = 0.020375; theta[25] = 0.076375; theta[26] = 1.035875; theta[27] = -0.014625; theta[28] = 0.03725; theta[29] = 1.007625; theta[30] = -0.01275; theta[31] = 0.036375; theta[32] = 0.993125; theta[33] = -0.01125; theta[34] = 0.029875; theta[35] = 0.97675; theta[36] = -0.003625; theta[37] = 0.0335; theta[38] = 0.978625; theta[39] = -0.00325; theta[40] = 0.023375; theta[41] = 0.9855;
                        sigma[0] = 0.002651234488; sigma[1] = 0.001974984488; sigma[2] = 0.000567359488; sigma[3] = 0.003043109488; sigma[4] = 0.005076937613; sigma[5] = 0.001232750113; sigma[6] = 0.004396234488; sigma[7] = 0.018302109488; sigma[8] = 0.006258437613; sigma[9] = 0.005157437613; sigma[10] = 0.023804437613; sigma[11] = 0.006717359488; sigma[12] = 0.003904750113; sigma[13] = 0.021759437613; sigma[14] = 0.010163437613; sigma[15] = 0.002624859488; sigma[16] = 0.010928734488; sigma[17] = 0.005941234488; sigma[18] = 0.003719859488; sigma[19] = 0.017769359488; sigma[20] = 0.008334359488; sigma[21] = 0.005351734488; sigma[22] = 0.018956234488; sigma[23] = 0.005705000113; sigma[24] = 0.004326109488; sigma[25] = 0.011173109488; sigma[26] = 0.002039234488; sigma[27] = 0.003607359488; sigma[28] = 0.005092437613; sigma[29] = 0.002003109488; sigma[30] = 0.003734937613; sigma[31] = 0.004165609488; sigma[32] = 0.001158984488; sigma[33] = 0.003748437613; sigma[34] = 0.002381234488; sigma[35] = 0.000914437613; sigma[36] = 0.003505609488; sigma[37] = 0.001617750113; sigma[38] = 0.000649359488; sigma[39] = 0.002854437613; sigma[40] = 0.001804859488; sigma[41] = 0.000797250113;
                        votes[8] = 0.1 - gauss(x, theta, sigma);
                        theta[0] = 0.085; theta[1] = -0.03175; theta[2] = 0.9685; theta[3] = 0.091; theta[4] = -0.014875; theta[5] = 0.954875; theta[6] = 0.097375; theta[7] = 0.011125; theta[8] = 1.06875; theta[9] = 0.1065; theta[10] = -0.0755; theta[11] = 1.003875; theta[12] = 0.143875; theta[13] = 0.0055; theta[14] = 0.78775; theta[15] = 0.1335; theta[16] = 0.08675; theta[17] = 0.951375; theta[18] = 0.099125; theta[19] = 0.08575; theta[20] = 1.095375; theta[21] = 0.095; theta[22] = -0.012625; theta[23] = 1.021625; theta[24] = 0.1235; theta[25] = 0.009; theta[26] = 0.874375; theta[27] = 0.129125; theta[28] = 0.063625; theta[29] = 0.9095; theta[30] = 0.09975; theta[31] = 0.080875; theta[32] = 1.004375; theta[33] = 0.0605; theta[34] = 0.007875; theta[35] = 1.014375; theta[36] = 0.05575; theta[37] = -0.033; theta[38] = 0.985875; theta[39] = 0.059125; theta[40] = -0.0295; theta[41] = 0.975625;
                        sigma[0] = 0.001130000113; sigma[1] = 0.001614437613; sigma[2] = 0.012247750113; sigma[3] = 0.003259000113; sigma[4] = 0.007304984488; sigma[5] = 0.001992484488; sigma[6] = 0.002961859488; sigma[7] = 0.005927484488; sigma[8] = 0.006953437613; sigma[9] = 0.001675250113; sigma[10] = 0.003612250113; sigma[11] = 0.013156234488; sigma[12] = 0.001568734488; sigma[13] = 0.003007250113; sigma[14] = 0.004447437613; sigma[15] = 0.001605250113; sigma[16] = 0.006106937613; sigma[17] = 0.008654359488; sigma[18] = 0.001885484488; sigma[19] = 0.006329437613; sigma[20] = 0.004637359488; sigma[21] = 0.001640000113; sigma[22] = 0.004314359488; sigma[23] = 0.012173609488; sigma[24] = 0.001595250113; sigma[25] = 0.005626500113; sigma[26] = 0.008527109488; sigma[27] = 0.002330484488; sigma[28] = 0.005953109488; sigma[29] = 0.008507250113; sigma[30] = 0.002899937613; sigma[31] = 0.005295484488; sigma[32] = 0.005159609488; sigma[33] = 0.002429750113; sigma[34] = 0.010046734488; sigma[35] = 0.002439609488; sigma[36] = 0.001506937613; sigma[37] = 0.004803500113; sigma[38] = 0.001151734488; sigma[39] = 0.001560484488; sigma[40] = 0.002174750113; sigma[41] = 0.000334609488;
                        votes[9] = 0.1 - gauss(x, theta, sigma);
                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 10; i++) {
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

                        for (uint16_t i = 0; i < 42; i++) {
                            gauss += log(sigma[i]);
                            gauss += abs(x[i] - theta[i]) / sigma[i];
                        }

                        return gauss;
                    }
                };
            }
        }
    }