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
                        float votes[3] = { 0.0f };
                        float theta[42] = { 0 };
                        float sigma[42] = { 0 };
                        theta[0] = 0.01625; theta[1] = -0.001666666667; theta[2] = 0.044166666667; theta[3] = 0.008333333333; theta[4] = 0.002083333333; theta[5] = 0.022083333333; theta[6] = 0.024166666667; theta[7] = 0.015416666667; theta[8] = 0.22625; theta[9] = 0.038333333333; theta[10] = 0.02875; theta[11] = 0.1575; theta[12] = 0.09; theta[13] = 0.00375; theta[14] = -0.272083333333; theta[15] = 0.075; theta[16] = 0.004166666667; theta[17] = -0.055; theta[18] = 0.01; theta[19] = 0.009166666667; theta[20] = 0.156666666667; theta[21] = -0.040833333333; theta[22] = -0.004583333333; theta[23] = 0.102916666667; theta[24] = -0.037083333333; theta[25] = -0.01; theta[26] = 0.05; theta[27] = -0.019583333333; theta[28] = -0.0175; theta[29] = 0.03875; theta[30] = -0.017916666667; theta[31] = -0.0125; theta[32] = 0.043333333333; theta[33] = -0.023333333333; theta[34] = -0.020416666667; theta[35] = 0.041666666667; theta[36] = -0.020416666667; theta[37] = -0.01; theta[38] = 0.038333333333; theta[39] = -0.025416666667; theta[40] = -0.019583333333; theta[41] = 0.051666666667;
                        sigma[0] = 0.002965104401; sigma[1] = 0.00103055579; sigma[2] = 0.037682639123; sigma[3] = 0.001797222457; sigma[4] = 0.003658159957; sigma[5] = 0.039308159957; sigma[6] = 0.00369930579; sigma[7] = 0.03239149329; sigma[8] = 0.042781771068; sigma[9] = 0.00468055579; sigma[10] = 0.014452604401; sigma[11] = 0.084477083568; sigma[12] = 0.002383333568; sigma[13] = 0.008073437735; sigma[14] = 0.088983159957; sigma[15] = 0.006608333568; sigma[16] = 0.032715972457; sigma[17] = 0.028583333568; sigma[18] = 0.004400000235; sigma[19] = 0.042540972457; sigma[20] = 0.030122222457; sigma[21] = 0.002732639123; sigma[22] = 0.01699149329; sigma[23] = 0.062520659957; sigma[24] = 0.00302899329; sigma[25] = 0.016208333568; sigma[26] = 0.039875000235; sigma[27] = 0.001687326623; sigma[28] = 0.025302083568; sigma[29] = 0.035869271068; sigma[30] = 0.00181649329; sigma[31] = 0.023993750235; sigma[32] = 0.036413889123; sigma[33] = 0.001847222457; sigma[34] = 0.02740399329; sigma[35] = 0.041147222457; sigma[36] = 0.002462326623; sigma[37] = 0.025891666901; sigma[38] = 0.03990555579; sigma[39] = 0.00199149329; sigma[40] = 0.023545659957; sigma[41] = 0.03713055579;
                        votes[0] = 0.333333333333 - gauss(x, theta, sigma);
                        theta[0] = 0.000833333333; theta[1] = -0.005; theta[2] = 0.127916666667; theta[3] = -0.0; theta[4] = -0.009583333333; theta[5] = 0.123333333333; theta[6] = -0.017916666667; theta[7] = 0.114583333333; theta[8] = 0.22; theta[9] = -0.026666666667; theta[10] = -0.054166666667; theta[11] = 0.225416666667; theta[12] = 0.028333333333; theta[13] = -0.0225; theta[14] = -0.045416666667; theta[15] = 0.061666666667; theta[16] = 0.096666666667; theta[17] = -0.020833333333; theta[18] = 0.019166666667; theta[19] = 0.123333333333; theta[20] = 0.150416666667; theta[21] = -0.040833333333; theta[22] = 0.070416666667; theta[23] = 0.165416666667; theta[24] = -0.0575; theta[25] = 0.04875; theta[26] = 0.135833333333; theta[27] = -0.053333333333; theta[28] = 0.035833333333; theta[29] = 0.1225; theta[30] = -0.045; theta[31] = 0.031666666667; theta[32] = 0.123333333333; theta[33] = -0.03; theta[34] = 0.011666666667; theta[35] = 0.1175; theta[36] = -0.014166666667; theta[37] = -0.0125; theta[38] = 0.0225; theta[39] = -0.029583333333; theta[40] = -0.004583333333; theta[41] = 0.12375;
                        sigma[0] = 0.000232639123; sigma[1] = 0.001616666901; sigma[2] = 0.10566649329; sigma[3] = 0.000150000235; sigma[4] = 0.002712326623; sigma[5] = 0.104297222457; sigma[6] = 0.004249826623; sigma[7] = 0.043249826623; sigma[8] = 0.132108333568; sigma[9] = 0.008247222457; sigma[10] = 0.058515972457; sigma[11] = 0.192708159957; sigma[12] = 0.014463889123; sigma[13] = 0.036827083568; sigma[14] = 0.113833159957; sigma[15] = 0.009997222457; sigma[16] = 0.041897222457; sigma[17] = 0.11984930579; sigma[18] = 0.00542430579; sigma[19] = 0.021872222457; sigma[20] = 0.12037899329; sigma[21] = 0.004632639123; sigma[22] = 0.02212899329; sigma[23] = 0.10246649329; sigma[24] = 0.003527083568; sigma[25] = 0.015935937735; sigma[26] = 0.106032639123; sigma[27] = 0.002963889123; sigma[28] = 0.009040972457; sigma[29] = 0.106093750235; sigma[30] = 0.003316666901; sigma[31] = 0.00300555579; sigma[32] = 0.095722222457; sigma[33] = 0.004441666901; sigma[34] = 0.00640555579; sigma[35] = 0.098343750235; sigma[36] = 0.010007639123; sigma[37] = 0.032185416901; sigma[38] = 0.185377083568; sigma[39] = 0.00290399329; sigma[40] = 0.017933159957; sigma[41] = 0.099723437735;
                        votes[1] = 0.333333333333 - gauss(x, theta, sigma);
                        theta[0] = 0.005833333333; theta[1] = -0.005416666667; theta[2] = -0.009166666667; theta[3] = -0.005833333333; theta[4] = -0.010416666667; theta[5] = -0.007083333333; theta[6] = -0.012083333333; theta[7] = 0.039583333333; theta[8] = 0.1; theta[9] = -0.04625; theta[10] = -0.01625; theta[11] = 0.01625; theta[12] = 0.014166666667; theta[13] = 0.075416666667; theta[14] = -0.269166666667; theta[15] = 0.007916666667; theta[16] = 0.07125; theta[17] = 0.125833333333; theta[18] = 0.001666666667; theta[19] = 0.03375; theta[20] = 0.196666666667; theta[21] = -0.00375; theta[22] = 0.028333333333; theta[23] = -0.180416666667; theta[24] = 0.021666666667; theta[25] = 0.06; theta[26] = -0.087916666667; theta[27] = -0.0175; theta[28] = 0.027916666667; theta[29] = 0.077916666667; theta[30] = -0.05375; theta[31] = 0.014583333333; theta[32] = 0.019583333333; theta[33] = -0.059166666667; theta[34] = 0.002083333333; theta[35] = 0.0; theta[36] = -0.052916666667; theta[37] = -0.024583333333; theta[38] = 0.025833333333; theta[39] = -0.04375; theta[40] = -0.015; theta[41] = -0.00875;
                        sigma[0] = 0.000365972457; sigma[1] = 0.001599826623; sigma[2] = 0.001840972457; sigma[3] = 0.000765972457; sigma[4] = 0.003570659957; sigma[5] = 0.001762326623; sigma[6] = 0.011724826623; sigma[7] = 0.023937326623; sigma[8] = 0.027800000235; sigma[9] = 0.002365104401; sigma[10] = 0.015348437735; sigma[11] = 0.051940104401; sigma[12] = 0.005015972457; sigma[13] = 0.016633159957; sigma[14] = 0.020507639123; sigma[15] = 0.00474149329; sigma[16] = 0.033194271068; sigma[17] = 0.033665972457; sigma[18] = 0.00310555579; sigma[19] = 0.010406771068; sigma[20] = 0.01923055579; sigma[21] = 0.003606771068; sigma[22] = 0.007297222457; sigma[23] = 0.02372899329; sigma[24] = 0.00560555579; sigma[25] = 0.036733333568; sigma[26] = 0.02141649329; sigma[27] = 0.004785416901; sigma[28] = 0.046758159957; sigma[29] = 0.011099826623; sigma[30] = 0.003856771068; sigma[31] = 0.012149826623; sigma[32] = 0.00320399329; sigma[33] = 0.003407639123; sigma[34] = 0.020633159957; sigma[35] = 0.002158333568; sigma[36] = 0.002312326623; sigma[37] = 0.02276649329; sigma[38] = 0.009140972457; sigma[39] = 0.002390104401; sigma[40] = 0.024433333568; sigma[41] = 0.001860937735;
                        votes[2] = 0.333333333333 - gauss(x, theta, sigma);
                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 3; i++) {
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