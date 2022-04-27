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
                        float votes[4] = { 0.621581617429 ,-1.34319730961 ,1.039089363794 ,-0.317473671614  };
                        votes[0] += dot(x,   0.02328067799  , 2.178677476165  , 0.598063713635  , -0.175087595775  , 0.600649582099 );
                        votes[1] += dot(x,   -1.135501612662  , -3.123028599375  , -0.708978917706  , 0.019984071241  , 0.000991110195 );
                        votes[2] += dot(x,   0.557175343108  , 0.234741629467  , -0.172581409314  , 0.411034241938  , -0.424025562631 );
                        votes[3] += dot(x,   0.555045591565  , 0.709609493743  , 0.283496613385  , -0.255930717404  , -0.177615129662 );
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