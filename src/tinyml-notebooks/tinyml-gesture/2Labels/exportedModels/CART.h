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
                        if (x[12] <= 0.004999999888241291) {
                            return 1;
                        }

                        else {
                            if (x[10] <= -0.1899999976158142) {
                                return 1;
                            }

                            else {
                                if (x[13] <= 0.12999999895691872) {
                                    if (x[11] <= -0.19500000029802322) {
                                        if (x[6] <= -0.010000001639127731) {
                                            return 0;
                                        }

                                        else {
                                            return 1;
                                        }
                                    }

                                    else {
                                        return 0;
                                    }
                                }

                                else {
                                    if (x[15] <= 0.06499999947845936) {
                                        return 0;
                                    }

                                    else {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }

                protected:
                };
            }
        }
    }