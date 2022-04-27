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
                        theta[0] = 57.87037037037; theta[1] = 116.796296296296; theta[2] = 104.435185185185; theta[3] = 826.037037037037; theta[4] = 129.842592592593;
                        sigma[0] = 1650.483494155836; sigma[1] = 514.810654649664; sigma[2] = 242.394245184643; sigma[3] = 138365.07300032876; sigma[4] = 192619.81811349763;
                        votes[0] = 0.3 - gauss(x, theta, sigma);
                        theta[0] = 19.152777777778; theta[1] = 94.791666666667; theta[2] = 61.736111111111; theta[3] = 305.444444444444; theta[4] = 0.0;
                        sigma[0] = 13.185290280665; sigma[1] = 488.887450774493; sigma[2] = 1560.166771762147; sigma[3] = 69312.96943379918; sigma[4] = 0.000297996715;
                        votes[1] = 0.2 - gauss(x, theta, sigma);
                        theta[0] = 70.25; theta[1] = 110.472222222222; theta[2] = 101.902777777778; theta[3] = 896.118055555556; theta[4] = 0.0;
                        sigma[0] = 1444.215575774493; sigma[1] = 6.346748613999; sigma[2] = 4.796401391776; sigma[3] = 73559.96552754918; sigma[4] = 0.000297996715;
                        votes[2] = 0.4 - gauss(x, theta, sigma);
                        theta[0] = 61.277777777778; theta[1] = 109.666666666667; theta[2] = 102.361111111111; theta[3] = 725.916666666667; theta[4] = 0.0;
                        sigma[0] = 1567.367581947332; sigma[1] = 28.944742441159; sigma[2] = 11.619896762147; sigma[3] = 144448.6877979967; sigma[4] = 0.000297996715;
                        votes[3] = 0.1 - gauss(x, theta, sigma);
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