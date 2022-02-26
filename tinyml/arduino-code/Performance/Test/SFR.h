#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class SEFR {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        return dot(x,   -2.499992885632  , -2.499998980662  , -2.499998848245  , -2.499998038562  , -2.499998807973 ) <= 0.6548246344177395 ? 0 : 1;
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