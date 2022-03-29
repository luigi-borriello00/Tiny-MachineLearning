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
                        float votes[2] = { -0.256447794199  };
                        votes[0] += dot(x,   0.621229142096  , -0.686443111741  , -0.529525585221  , 0.594775902553  , 0.802119365687  , -0.494271909281  , -0.450844862527  , -0.620028910311  , -0.101272863402  , 0.27084851101  , -0.266238885578  , 0.114407523825  , -0.019183000141  , -0.226343725225  , 0.236306032537  , -0.595534337182  , 0.538104162226  , 0.143758883399  , 1.333709707812  , -0.160502777648  , -0.362037005746  , 0.108536214424  , -0.401067752099  , 0.568387119454  , -0.718655624656  , 0.733595792476  , -0.48350905051  , 0.625581171868  , -0.719882159509  , -0.199260444283  , 0.527160363732  , -0.353462310526 );
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