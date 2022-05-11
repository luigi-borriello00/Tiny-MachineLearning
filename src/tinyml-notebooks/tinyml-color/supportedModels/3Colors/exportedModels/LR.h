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
                        float votes[3] = { 4.545630648689 ,-0.228339740717 ,-5.929917280831  };
                        votes[0] += dot(x,   -0.042012420571  , -0.027071576245  , 0.029692723114  , -0.001666214604  , 0.502802890612 );
                        votes[1] += dot(x,   0.02478115171  , -0.027040293736  , 0.003298062955  , 0.000631558871  , -0.411358598353 );
                        votes[2] += dot(x,   0.036097562872  , 0.028763807721  , -0.028522474545  , 0.000829668802  , -0.309043444012 );
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