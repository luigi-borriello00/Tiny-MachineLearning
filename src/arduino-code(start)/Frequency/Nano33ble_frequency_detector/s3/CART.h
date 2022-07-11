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
                        if (x[16] <= 3814.0850830078125) {
                            return 1;
                        }

                        else {
                            if (x[7] <= 4632.330078125) {
                                return 2;
                            }

                            else {
                                return 0;
                            }
                        }
                    }

                protected:
                };
            }
        }
    }