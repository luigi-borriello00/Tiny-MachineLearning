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
                        theta[0] = 0.449578059072; theta[1] = 0.562037037037; theta[2] = 1.729166666667; theta[3] = -0.247422898183; theta[4] = 116.858333333333;
                        sigma[0] = 0.262384290141; sigma[1] = 5.813546017211; sigma[2] = 55.095509966114; sigma[3] = 0.232364276188; sigma[4] = 174875.155041216;
                        votes[0] = 0.3 - gauss(x, theta, sigma);
                        theta[0] = -0.041139240506; theta[1] = -2.065277777778; theta[2] = -21.175; theta[3] = -0.897005703422; theta[4] = 0.0;
                        sigma[0] = 0.00250811289; sigma[1] = 7.840139595744; sigma[2] = 389.538235660558; sigma[3] = 0.102676909077; sigma[4] = 0.000110660558;
                        votes[1] = 0.2 - gauss(x, theta, sigma);
                        theta[0] = 0.605221518987; theta[1] = -0.061805555556; theta[2] = 0.4125; theta[3] = -0.131820342205; theta[4] = 0.0;
                        sigma[0] = 0.232643883399; sigma[1] = 0.076614807935; sigma[2] = 1.101829410558; sigma[3] = 0.117188327353; sigma[4] = 0.000110660558;
                        votes[2] = 0.4 - gauss(x, theta, sigma);
                        theta[0] = 0.496835443038; theta[1] = -0.136111111111; theta[2] = 0.6375; theta[3] = -0.313212927757; theta[4] = 0.0;
                        sigma[0] = 0.250509234505; sigma[1] = 0.323868376608; sigma[2] = 2.637454410558; sigma[3] = 0.220249996219; sigma[4] = 0.000110660558;
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