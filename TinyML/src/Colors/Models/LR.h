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
                        float votes[3] = { -1.5453862019 ,-0.913473473067 ,-3.03561379134  };
                        votes[0] += dot(x,   -1.422477087444  , -2.149275264995  , 0.53107173852  , -1.046560259718  , 1.7190051573 );
                        votes[1] += dot(x,   0.915856900799  , -1.036120997231  , 0.091953585773  , 0.250218419828  , -0.802773428334 );
                        votes[2] += dot(x,   5.142405782312  , 0.869167779717  , -0.78599407845  , 0.451627837577  , -0.782421950198 );
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