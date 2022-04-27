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
                        float votes[2] = { -1.127093640259  };
                        votes[0] += dot(x,   0.820143486663  , -1.202166068398  , -0.374014162052  , 0.705812251166  , 0.595839361507  , -0.250307072803  , 0.180735357846  , -0.296242368271  , -0.917319568978  , -0.443319224232  , 0.243244321961  , 0.368291582589  , 0.283632982238  , 0.319829495457  , 0.286902200684  , 0.297597540597  , 0.692806705624  , 0.937673352497  , 0.9069148631  , 0.29970463817  , 0.271604439997  , 0.150662092006  , 0.208947598646  , -0.235940345947  , 0.022406349636  , 0.285958823059  , 0.026497315178  , 0.286565595423  , -0.896442852797  , 0.067513082704  , 0.160643984451  , -0.060054137447 );
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