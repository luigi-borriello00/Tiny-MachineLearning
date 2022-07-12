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
                        if (x[23] <= -0.1850000023841858) {
                            if (x[22] <= 0.17000000178813934) {
                                return 2;
                            }

                            else {
                                return 1;
                            }
                        }

                        else {
                            if (x[26] <= -0.13000000268220901) {
                                if (x[17] <= 0.03499999921768904) {
                                    return 2;
                                }

                                else {
                                    return 1;
                                }
                            }

                            else {
                                if (x[10] <= -0.1850000023841858) {
                                    return 1;
                                }

                                else {
                                    if (x[12] <= 0.004999999888241291) {
                                        return 1;
                                    }

                                    else {
                                        if (x[10] <= 0.20499999821186066) {
                                            if (x[11] <= -0.255000002682209) {
                                                return 1;
                                            }

                                            else {
                                                return 0;
                                            }
                                        }

                                        else {
                                            if (x[13] <= 0.0) {
                                                return 0;
                                            }

                                            else {
                                                return 1;
                                            }
                                        }
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