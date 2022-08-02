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
                        float votes[7] = { 0.00073475452 ,0.001441002308 ,0.000610024411 ,-0.000911324726 ,0.000979824734 ,0.000423610093 ,-0.003277891339  };
                        votes[0] += dot(x,   -0.012023278966  , 0.000628928028  , 0.010084957079  , 1.8864753e-05  , 0.043551951675 );
                        votes[1] += dot(x,   -0.036513172599  , 0.045034093366  , -0.017972124252  , -0.003291735562  , -0.002202327606 );
                        votes[2] += dot(x,   -0.014933386742  , -0.005449666899  , 0.023368911012  , -0.000632361678  , -0.004683710324 );
                        votes[3] += dot(x,   0.022253130856  , -0.009937007999  , -0.00424954325  , 0.000580324293  , -0.009651814367 );
                        votes[4] += dot(x,   -0.00055569543  , -0.017333954956  , 0.014923839654  , 0.001153204998  , -0.007844831627 );
                        votes[5] += dot(x,   0.026174846946  , -0.02816173975  , 0.02039265788  , -0.000388562167  , -0.008750976377 );
                        votes[6] += dot(x,   0.015597555935  , 0.015219348211  , -0.046548698123  , 0.002560265363  , -0.010418291373 );
                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 7; i++) {
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