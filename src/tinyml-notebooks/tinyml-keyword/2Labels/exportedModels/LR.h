#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class LogisticRegression {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        float votes[2] = { -4.3511295e-05  };
                        votes[0] += dot(x,   0.001110660747  , -0.001082961235  , -0.000816629104  , 0.001010499262  , 0.001117938089  , -0.000801383748  , -0.000228207291  , -0.000609329666  , -0.000199200561  , 0.000600516333  , -0.000738193674  , 0.000248284943  , 8.637524e-05  , -0.000492279497  , 0.000639618303  , -0.002077713649  , 0.001997800839  , -0.000771553382  , 0.007303965598  , -0.0020584908  , -0.002062632903  , 0.001274903981  , -0.004846371867  , 0.006499408679  , -0.006878353263  , 0.005514165715  , -0.00496591617  , 0.005295325213  , -0.003230469117  , 0.000224068671  , 0.004749736203  , -0.006359720812 );
                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 2; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                    /**
                    * Compute dot product
                    */
                    float dot(float *x, ...) {
                        va_list w;
                        va_start(w, 32);
                        float dot = 0.0;

                        for (uint16_t i = 0; i < 32; i++) {
                            const float wi = va_arg(w, double);
                            dot += x[i] * wi;
                        }

                        return dot;
                    }
                };
            }
        }
    }