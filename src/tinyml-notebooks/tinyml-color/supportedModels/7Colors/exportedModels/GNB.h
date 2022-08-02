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
                        float votes[7] = { 0.0f };
                        float theta[5] = { 0 };
                        float sigma[5] = { 0 };
                        theta[0] = 50.3875; theta[1] = 112.825; theta[2] = 98.25; theta[3] = 693.025; theta[4] = 87.64375;
                        sigma[0] = 1521.175216099239; sigma[1] = 388.69474734924; sigma[2] = 598.01287234924; sigma[3] = 169248.23724734967; sigma[4] = 133716.8422082866;
                        votes[0] = 0.142857142857 - gauss(x, theta, sigma);
                        theta[0] = 19.44375; theta[1] = 96.56875; theta[2] = 65.5625; theta[3] = 248.58125; theta[4] = 0.0;
                        sigma[0] = 10.37220828674; sigma[1] = 376.620645786739; sigma[2] = 1532.94646609924; sigma[3] = 30109.818770786755; sigma[4] = 0.00037234924;
                        votes[1] = 0.142857142857 - gauss(x, theta, sigma);
                        theta[0] = 40.0; theta[1] = 107.2625; theta[2] = 98.75; theta[3] = 568.79375; theta[4] = 0.00625;
                        sigma[0] = 1138.46287234924; sigma[1] = 123.45646609924; sigma[2] = 328.67537234924; sigma[3] = 157778.8015832865; sigma[4] = 0.00658328674;
                        votes[2] = 0.142857142857 - gauss(x, theta, sigma);
                        theta[0] = 101.91875; theta[1] = 133.7375; theta[2] = 117.875; theta[3] = 1090.75625; theta[4] = 0.0;
                        sigma[0] = 277.17502078674; sigma[1] = 1081.693966099239; sigma[2] = 600.02224734924; sigma[3] = 34087.084708286835; sigma[4] = 0.00037234924;
                        votes[3] = 0.142857142857 - gauss(x, theta, sigma);
                        theta[0] = 68.81875; theta[1] = 110.4; theta[2] = 101.24375; theta[3] = 877.3125; theta[4] = 0.0;
                        sigma[0] = 1468.273770786742; sigma[1] = 6.37787234924; sigma[2] = 44.49720828674; sigma[3] = 83768.10271609924; sigma[4] = 0.00037234924;
                        votes[4] = 0.142857142857 - gauss(x, theta, sigma);
                        theta[0] = 89.90625; theta[1] = 115.16875; theta[2] = 107.275; theta[3] = 955.6625; theta[4] = 0.0;
                        sigma[0] = 782.44783328674; sigma[1] = 72.10314578674; sigma[2] = 21.29974734924; sigma[3] = 48257.673966099246; sigma[4] = 0.00037234924;
                        votes[5] = 0.142857142857 - gauss(x, theta, sigma);
                        theta[0] = 118.51875; theta[1] = 177.525; theta[2] = 132.54375; theta[3] = 1267.10625; theta[4] = 0.0;
                        sigma[0] = 239.01252078674; sigma[1] = 1382.712247349239; sigma[2] = 1030.635958286741; sigma[3] = 79538.67033328673; sigma[4] = 0.00037234924;
                        votes[6] = 0.142857142857 - gauss(x, theta, sigma);
                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 7; i++) {
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

                        for (uint16_t i = 0; i < 5; i++) {
                            gauss += log(sigma[i]);
                            gauss += abs(x[i] - theta[i]) / sigma[i];
                        }

                        return gauss;
                    }
                };
            }
        }
    }