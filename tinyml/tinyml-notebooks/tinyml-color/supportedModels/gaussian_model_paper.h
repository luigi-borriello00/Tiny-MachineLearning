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
                        float theta[5] = { 0 };
                        float sigma[5] = { 0 };
                        theta[0] = 57.5; theta[1] = 115.232394366197; theta[2] = 104.112676056338; theta[3] = 810.915492957746; theta[4] = 98.753521126761;
                        sigma[0] = 1621.912121563542; sigma[1] = 406.967269351679; sigma[2] = 237.762101726208; sigma[3] = 139943.86624772896; sigma[4] = 149569.73517254586;
                        votes[0] = 0.298947368421 - gauss(x, theta, sigma);
                        theta[0] = 18.789473684211; theta[1] = 92.210526315789; theta[2] = 58.484210526316; theta[3] = 295.747368421053; theta[4] = 0.0;
                        sigma[0] = 14.797933666073; sigma[1] = 653.618986297652; sigma[2] = 1563.19726884613; sigma[3] = 65516.9468533336; sigma[4] = 0.000149732555;
                        votes[1] = 0.2 - gauss(x, theta, sigma);
                        theta[0] = 68.831578947368; theta[1] = 110.415789473684; theta[2] = 101.415789473684; theta[3] = 885.263157894737; theta[4] = 0.0;
                        sigma[0] = 1468.824415660531; sigma[1] = 6.274637267181; sigma[2] = 38.727268846129; sigma[3] = 79645.06773976005; sigma[4] = 0.000149732555;
                        votes[2] = 0.4 - gauss(x, theta, sigma);
                        theta[0] = 61.229166666667; theta[1] = 109.770833333333; theta[2] = 102.270833333333; theta[3] = 763.0; theta[4] = 0.0;
                        sigma[0] = 1557.42679903811; sigma[1] = 23.343465704778; sigma[2] = 10.280965704778; sigma[3] = 133771.2084830659; sigma[4] = 0.000149732555;
                        votes[3] = 0.101052631579 - gauss(x, theta, sigma);
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