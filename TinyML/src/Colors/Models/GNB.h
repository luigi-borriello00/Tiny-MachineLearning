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
                        float theta[5] = { 0 };
                        float sigma[5] = { 0 };
                        theta[0] = 50.3875; theta[1] = 112.825; theta[2] = 98.25; theta[3] = 693.025; theta[4] = 87.64375;
                        sigma[0] = 1521.175136954357; sigma[1] = 388.694668204358; sigma[2] = 598.012793204358; sigma[3] = 169248.23716820483; sigma[4] = 133716.84212914176;
                        votes[0] = 0.333333333333 - gauss(x, theta, sigma);
                        theta[0] = 101.75625; theta[1] = 133.3; theta[2] = 117.3125; theta[3] = 1094.03125; theta[4] = 0.0;
                        sigma[0] = 274.572129141859; sigma[1] = 1039.410293204358; sigma[2] = 554.690136954358; sigma[3] = 29412.830566641856; sigma[4] = 0.000293204358;
                        votes[1] = 0.333333333333 - gauss(x, theta, sigma);
                        theta[0] = 118.56875; theta[1] = 179.03125; theta[2] = 131.69375; theta[3] = 1256.78125; theta[4] = 0.0;
                        sigma[0] = 238.395566641858; sigma[1] = 1332.618066641858; sigma[2] = 969.775254141859; sigma[3] = 72773.90869164186; sigma[4] = 0.000293204358;
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