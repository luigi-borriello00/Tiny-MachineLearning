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
                        float votes[3] = { 0.03493436392 ,1.836362386208 ,-1.871296750128  };
                        votes[0] += dot(x,   -3.116242146352  , -2.121089371092  , 0.591180989902  , -0.768138205074  , 1.45138257869 );
                        votes[1] += dot(x,   -2.027217159196  , 0.798461107269  , 0.123463257656  , 0.202443170197  , -0.714009335773 );
                        votes[2] += dot(x,   5.143459305547  , 1.322628263823  , -0.714644247559  , 0.565695034877  , -0.737373242917 );
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