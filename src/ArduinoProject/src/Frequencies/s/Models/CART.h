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
                        if (x[16] <= 4910.844970703125) {
                            if (x[25] <= 2107.429931640625) {
                                if (x[26] <= 1574.6799926757812) {
                                    return 0;
                                }

                                else {
                                    return 1;
                                }
                            }

                            else {
                                if (x[28] <= 2950.3699951171875) {
                                    return 2;
                                }

                                else {
                                    return 4;
                                }
                            }
                        }

                        else {
                            if (x[31] <= 5370.239990234375) {
                                return 3;
                            }

                            else {
                                if (x[13] <= 5470.684814453125) {
                                    if (x[24] <= 5479.300048828125) {
                                        return 5;
                                    }

                                    else {
                                        return 3;
                                    }
                                }

                                else {
                                    return 5;
                                }
                            }
                        }
                    }

                protected:
                };
            }
        }
    }