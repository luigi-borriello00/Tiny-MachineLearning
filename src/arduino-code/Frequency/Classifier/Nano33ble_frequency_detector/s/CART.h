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
                        if (x[16] <= 1552.27001953125) {
                            return 0;
                        }

                        else {
                            if (x[7] <= 2094.9500122070312) {
                                return 1;
                            }

                            else {
                                return 2;
                            }
                        }
                    }

                protected:
                };
            }
        }
    }