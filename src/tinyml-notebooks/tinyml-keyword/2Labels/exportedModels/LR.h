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
                        float votes[2] = { -0.236755360851  };
                        votes[0] += dot(x,   0.599298249179  , -0.693699598157  , -0.501660130046  , 0.638624844672  , 0.917870457687  , -0.521968318167  , -0.366132673704  , -0.641032990014  , -0.187501137099  , 0.29287867704  , -0.277015699267  , 0.103366717474  , 0.002393302442  , -0.256763147755  , 0.221462950011  , -0.513753033406  , 0.477746257407  , 0.034803353935  , 1.160665627647  , 0.010480973942  , -0.164037104006  , 0.081591210564  , -0.682953803325  , 0.67738361816  , -0.742988615096  , 0.664374254156  , -0.622765285551  , 0.671812523714  , -0.375925202752  , -0.081420049374  , 0.515391645238  , -0.667524861548 );
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