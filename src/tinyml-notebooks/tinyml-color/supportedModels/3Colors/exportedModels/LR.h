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
                        float votes[3] = { 1.390231007962 ,0.170738605649 ,-1.56096961361  };
                        votes[0] += dot(x,   -0.040264853759  , 0.00547467092  , 0.011693249367  , -0.000158265363  , 4.866545788101 );
                        votes[1] += dot(x,   0.017783414569  , -0.017947727503  , 0.010080385591  , -0.000238263354  , -2.45918865987 );
                        votes[2] += dot(x,   0.022481439192  , 0.012473056584  , -0.021773634957  , 0.000396528717  , -2.407357128233 );
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