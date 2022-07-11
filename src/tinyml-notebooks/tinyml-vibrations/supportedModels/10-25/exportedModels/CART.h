#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class DecisionTree {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        if (x[39] <= -0.054999999701976776) {
                            return 1;
                        }

                        else {
                            return 0;
                        }
                    }

                protected:
                };
            }
        }
    }