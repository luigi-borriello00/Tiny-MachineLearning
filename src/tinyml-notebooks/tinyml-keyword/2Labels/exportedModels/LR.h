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
                        float votes[2] = { -0.19301717551  };
                        votes[0] += dot(x,   0.001178781739  , -0.001080848828  , -0.000829393482  , 0.001019965357  , 0.001096842163  , -0.000765637438  , -0.000219932119  , -0.000687493178  , -6.8037638e-05  , 0.000622801101  , -0.000848004781  , 0.000332160643  , 0.000197007534  , -0.000856404097  , 0.00094099298  , -0.002105041939  , 0.001699277633  , -0.000434754087  , 0.006571218884  , -0.001303814353  , -0.002380397061  , 0.001362163743  , -0.004446428676  , 0.006130210886  , -0.007342331776  , 0.006440964653  , -0.005253696973  , 0.005462851942  , -0.003506490457  , -0.000647916394  , 0.006209111536  , -0.006825865833 );
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