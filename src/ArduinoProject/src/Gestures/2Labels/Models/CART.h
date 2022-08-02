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
                        if (x[1] <= -0.024999999441206455) {
                            if (x[39] <= -0.014999999664723873) {
                                return 1;
                            }

                            else {
                                if (x[7] <= 0.1899999976158142) {
                                    if (x[0] <= -0.024999999441206455) {
                                        if (x[14] <= 0.75) {
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
                                    return 1;
                                }
                            }
                        }

                        else {
                            if (x[25] <= 0.06499999947845936) {
                                if (x[16] <= 0.08999999985098839) {
                                    if (x[36] <= 0.0) {
                                        if (x[2] <= 0.9600000083446503) {
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
                                    if (x[14] <= 0.7199999988079071) {
                                        if (x[39] <= 0.0400000000372529) {
                                            return 0;
                                        }

                                        else {
                                            return 1;
                                        }
                                    }

                                    else {
                                        return 1;
                                    }
                                }
                            }

                            else {
                                return 1;
                            }
                        }
                    }

                protected:
                };
            }
        }
    }