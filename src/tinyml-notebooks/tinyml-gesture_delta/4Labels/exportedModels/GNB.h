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
                        float votes[4] = { 0.0f };
                        float theta[42] = { 0 };
                        float sigma[42] = { 0 };
                        theta[0] = 0.013333333333; theta[1] = -0.0075; theta[2] = 0.077916666667; theta[3] = 0.01; theta[4] = 0.018333333333; theta[5] = 0.064583333333; theta[6] = 0.028333333333; theta[7] = 0.11375; theta[8] = 0.20375; theta[9] = 0.012916666667; theta[10] = -0.160416666667; theta[11] = 0.209166666667; theta[12] = 0.060833333333; theta[13] = 0.05125; theta[14] = -0.182083333333; theta[15] = 0.09875; theta[16] = 0.291666666667; theta[17] = -0.048333333333; theta[18] = 0.01625; theta[19] = 0.17375; theta[20] = 0.155833333333; theta[21] = -0.022083333333; theta[22] = 0.059583333333; theta[23] = 0.129166666667; theta[24] = -0.020833333333; theta[25] = 0.075416666667; theta[26] = 0.0975; theta[27] = -0.020416666667; theta[28] = 0.102916666667; theta[29] = 0.084166666667; theta[30] = -0.012916666667; theta[31] = 0.10875; theta[32] = 0.074583333333; theta[33] = -0.00625; theta[34] = 0.106666666667; theta[35] = 0.07375; theta[36] = -0.0075; theta[37] = 0.1025; theta[38] = 0.076666666667; theta[39] = -0.0075; theta[40] = 0.096666666667; theta[41] = 0.0775;
                        sigma[0] = 0.001088889121; sigma[1] = 0.001277083565; sigma[2] = 0.073766493288; sigma[3] = 0.001250000232; sigma[4] = 0.002297222454; sigma[5] = 0.070233159954; sigma[6] = 0.001513889121; sigma[7] = 0.015306771065; sigma[8] = 0.100023437732; sigma[9] = 0.003262326621; sigma[10] = 0.018420659954; sigma[11] = 0.074349305788; sigma[12] = 0.002132639121; sigma[13] = 0.041335937732; sigma[14] = 0.074808159954; sigma[15] = 0.002194271065; sigma[16] = 0.016938889121; sigma[17] = 0.117547222454; sigma[18] = 0.003098437732; sigma[19] = 0.028748437732; sigma[20] = 0.086532639121; sigma[21] = 0.002074826621; sigma[22] = 0.012037326621; sigma[23] = 0.067524305788; sigma[24] = 0.001990972454; sigma[25] = 0.006433159954; sigma[26] = 0.068152083565; sigma[27] = 0.001553993288; sigma[28] = 0.006453993288; sigma[29] = 0.071815972454; sigma[30] = 0.001695659954; sigma[31] = 0.010060937732; sigma[32] = 0.070599826621; sigma[33] = 0.002006771065; sigma[34] = 0.010488889121; sigma[35] = 0.070306771065; sigma[36] = 0.002052083565; sigma[37] = 0.011402083565; sigma[38] = 0.070955555788; sigma[39] = 0.001868750232; sigma[40] = 0.013597222454; sigma[41] = 0.072927083565;
                        votes[0] = 0.25 - gauss(x, theta, sigma);
                        theta[0] = 0.019583333333; theta[1] = -0.002083333333; theta[2] = 0.121666666667; theta[3] = 0.01125; theta[4] = 0.0075; theta[5] = 0.099166666667; theta[6] = 0.034583333333; theta[7] = 0.039166666667; theta[8] = 0.327916666667; theta[9] = 0.041666666667; theta[10] = -0.0; theta[11] = 0.2175; theta[12] = 0.09125; theta[13] = 0.010416666667; theta[14] = -0.21; theta[15] = 0.075833333333; theta[16] = 0.041666666667; theta[17] = 0.03875; theta[18] = 0.0; theta[19] = -0.010833333333; theta[20] = 0.2425; theta[21] = -0.037083333333; theta[22] = 0.004583333333; theta[23] = 0.196666666667; theta[24] = -0.034583333333; theta[25] = 0.000416666667; theta[26] = 0.126666666667; theta[27] = -0.017916666667; theta[28] = -0.004166666667; theta[29] = 0.12; theta[30] = -0.0125; theta[31] = 0.0075; theta[32] = 0.12125; theta[33] = -0.018333333333; theta[34] = -0.002916666667; theta[35] = 0.118333333333; theta[36] = -0.015833333333; theta[37] = 0.004583333333; theta[38] = 0.123333333333; theta[39] = -0.016666666667; theta[40] = -0.001666666667; theta[41] = 0.125;
                        sigma[0] = 0.003695659954; sigma[1] = 0.000999826621; sigma[2] = 0.099397222454; sigma[3] = 0.002419271065; sigma[4] = 0.003410416899; sigma[5] = 0.107732639121; sigma[6] = 0.006274826621; sigma[7] = 0.031440972454; sigma[8] = 0.135833159954; sigma[9] = 0.004580555788; sigma[10] = 0.011183333565; sigma[11] = 0.105935416899; sigma[12] = 0.003060937732; sigma[13] = 0.008520659954; sigma[14] = 0.154991666899; sigma[15] = 0.006840972454; sigma[16] = 0.039213889121; sigma[17] = 0.137527604399; sigma[18] = 0.003950000232; sigma[19] = 0.043957639121; sigma[20] = 0.089335416899; sigma[21] = 0.006453993288; sigma[22] = 0.016483159954; sigma[23] = 0.119547222454; sigma[24] = 0.005033159954; sigma[25] = 0.018478993288; sigma[26] = 0.109163889121; sigma[27] = 0.003024826621; sigma[28] = 0.026249305788; sigma[29] = 0.103858333565; sigma[30] = 0.003293750232; sigma[31] = 0.022652083565; sigma[32] = 0.098919271065; sigma[33] = 0.003305555788; sigma[34] = 0.025520659954; sigma[35] = 0.105730555788; sigma[36] = 0.003507639121; sigma[37] = 0.026983159954; sigma[38] = 0.107455555788; sigma[39] = 0.003355555788; sigma[40] = 0.023513889121; sigma[41] = 0.101825000232;
                        votes[1] = 0.25 - gauss(x, theta, sigma);
                        theta[0] = -0.00125; theta[1] = -0.004583333333; theta[2] = 0.12625; theta[3] = -0.002083333333; theta[4] = -0.012916666667; theta[5] = 0.120833333333; theta[6] = -0.01125; theta[7] = 0.137916666667; theta[8] = 0.265; theta[9] = -0.013333333333; theta[10] = -0.069166666667; theta[11] = 0.20625; theta[12] = 0.055416666667; theta[13] = -0.005416666667; theta[14] = -0.090833333333; theta[15] = 0.0775; theta[16] = 0.100833333333; theta[17] = -0.020833333333; theta[18] = 0.014583333333; theta[19] = 0.114583333333; theta[20] = 0.170416666667; theta[21] = -0.054583333333; theta[22] = 0.04875; theta[23] = 0.185; theta[24] = -0.065416666667; theta[25] = 0.0175; theta[26] = 0.13875; theta[27] = -0.060416666667; theta[28] = 0.025416666667; theta[29] = 0.12; theta[30] = -0.05; theta[31] = 0.021666666667; theta[32] = 0.1125; theta[33] = -0.033333333333; theta[34] = 0.005416666667; theta[35] = 0.118333333333; theta[36] = -0.01875; theta[37] = -0.016666666667; theta[38] = 0.01875; theta[39] = -0.032083333333; theta[40] = -0.004583333333; theta[41] = 0.120833333333;
                        sigma[0] = 0.000235937732; sigma[1] = 0.001716493288; sigma[2] = 0.106073437732; sigma[3] = 0.000133159954; sigma[4] = 0.002903993288; sigma[5] = 0.104490972454; sigma[6] = 0.003860937732; sigma[7] = 0.042891493288; sigma[8] = 0.121333333565; sigma[9] = 0.008530555788; sigma[10] = 0.062174305788; sigma[11] = 0.201090104399; sigma[12] = 0.014241493288; sigma[13] = 0.030199826621; sigma[14] = 0.115615972454; sigma[15] = 0.009735416899; sigma[16] = 0.038149305788; sigma[17] = 0.116099305788; sigma[18] = 0.005574826621; sigma[19] = 0.025099826621; sigma[20] = 0.109837326621; sigma[21] = 0.003533159954; sigma[22] = 0.020810937732; sigma[23] = 0.093441666899; sigma[24] = 0.002799826621; sigma[25] = 0.012477083565; sigma[26] = 0.103969271065; sigma[27] = 0.002620659954; sigma[28] = 0.010008159954; sigma[29] = 0.104491666899; sigma[30] = 0.002300000232; sigma[31] = 0.003922222454; sigma[32] = 0.098535416899; sigma[33] = 0.003438889121; sigma[34] = 0.006191493288; sigma[35] = 0.098147222454; sigma[36] = 0.009060937732; sigma[37] = 0.031888889121; sigma[38] = 0.185510937732; sigma[39] = 0.002249826621; sigma[40] = 0.018191493288; sigma[41] = 0.100399305788;
                        votes[2] = 0.25 - gauss(x, theta, sigma);
                        theta[0] = 0.009166666667; theta[1] = -0.00375; theta[2] = 0.0; theta[3] = -0.000416666667; theta[4] = -0.0; theta[5] = 0.000416666667; theta[6] = -0.01625; theta[7] = 0.0125; theta[8] = 0.104583333333; theta[9] = -0.034166666667; theta[10] = -0.000833333333; theta[11] = 0.029166666667; theta[12] = 0.01875; theta[13] = 0.080833333333; theta[14] = -0.26875; theta[15] = 0.02125; theta[16] = 0.07375; theta[17] = 0.123333333333; theta[18] = 0.005; theta[19] = 0.010833333333; theta[20] = 0.2025; theta[21] = -0.000416666667; theta[22] = 0.04; theta[23] = -0.185833333333; theta[24] = 0.03; theta[25] = 0.070833333333; theta[26] = -0.08; theta[27] = -0.012916666667; theta[28] = 0.035833333333; theta[29] = 0.0875; theta[30] = -0.05125; theta[31] = -0.005; theta[32] = 0.018333333333; theta[33] = -0.0475; theta[34] = 0.00125; theta[35] = 0.016666666667; theta[36] = -0.03125; theta[37] = -0.00375; theta[38] = 0.026666666667; theta[39] = -0.02875; theta[40] = -0.007916666667; theta[41] = -0.005416666667;
                        sigma[0] = 0.000440972454; sigma[1] = 0.001640104399; sigma[2] = 0.000516666899; sigma[3] = 0.000603993288; sigma[4] = 0.002341666899; sigma[5] = 0.000778993288; sigma[6] = 0.014406771065; sigma[7] = 0.032660416899; sigma[8] = 0.032441493288; sigma[9] = 0.002649305788; sigma[10] = 0.015699305788; sigma[11] = 0.057940972454; sigma[12] = 0.004177604399; sigma[13] = 0.014049305788; sigma[14] = 0.022569271065; sigma[15] = 0.003635937732; sigma[16] = 0.035215104399; sigma[17] = 0.014972222454; sigma[18] = 0.003425000232; sigma[19] = 0.008274305788; sigma[20] = 0.021052083565; sigma[21] = 0.003653993288; sigma[22] = 0.006900000232; sigma[23] = 0.021949305788; sigma[24] = 0.005391666899; sigma[25] = 0.032882639121; sigma[26] = 0.020966666899; sigma[27] = 0.005095659954; sigma[28] = 0.044990972454; sigma[29] = 0.008177083565; sigma[30] = 0.004644271065; sigma[31] = 0.009475000232; sigma[32] = 0.002780555788; sigma[33] = 0.003593750232; sigma[34] = 0.021519271065; sigma[35] = 0.003213889121; sigma[36] = 0.003052604399; sigma[37] = 0.022831771065; sigma[38] = 0.008338889121; sigma[39] = 0.002460937732; sigma[40] = 0.022633159954; sigma[41] = 0.000724826621;
                        votes[3] = 0.25 - gauss(x, theta, sigma);
                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 4; i++) {
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