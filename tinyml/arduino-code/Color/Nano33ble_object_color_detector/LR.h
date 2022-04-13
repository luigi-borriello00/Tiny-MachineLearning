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
                        float votes[4] = { -0.927380820621 ,-2.543997008783 ,-0.59597573023 ,-2.292239638138  };
                        votes[0] += dot(x,   -0.568575831671  , 2.208648921716  , 0.741057263141  , -0.153407773418  , 0.77140569118 );
                        votes[1] += dot(x,   -0.976651563138  , -3.421558977828  , -0.762961507972  , -0.119763834888  , 0.371067428814 );
                        votes[2] += dot(x,   0.357586834335  , -0.051139326402  , 0.334451840382  , 0.481219427253  , -1.056459548465 );
                        votes[3] += dot(x,   0.289413333095  , 0.203175283902  , 0.623290216083  , -0.462707493875  , -0.579797198823 );
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
                    * Compute dot product
                    */
                    float dot(float *x, ...) {
                        va_list w;
                        va_start(w, 5);
                        float dot = 0.0;

                        for (uint16_t i = 0; i < 5; i++) {
                            const float wi = va_arg(w, double);
                            dot += x[i] * wi;
                        }

                        return dot;
                    }
                };
            }
        }
    }