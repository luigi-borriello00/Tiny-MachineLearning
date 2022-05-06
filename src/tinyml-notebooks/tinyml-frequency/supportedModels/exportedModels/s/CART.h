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
                        if (x[16] <= 0.6817288994789124) {
                            if (x[25] <= -0.17676687985658646) {
                                if (x[26] <= -0.34103357791900635) {
                                    return 0;
                                }

                                else {
                                    return 1;
                                }
                            }

                            else {
                                if (x[28] <= 0.0) {
                                    return 2;
                                }

                                else {
                                    return 4;
                                }
                            }
                        }

                        else {
                            if (x[31] <= 0.584904134273529) {
                                return 3;
                            }

                            else {
                                if (x[13] <= 0.8502108156681061) {
                                    if (x[24] <= 0.8396785259246826) {
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