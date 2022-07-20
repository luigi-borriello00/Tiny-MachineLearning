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
                        if (x[23] <= -0.08500000089406967) {
                            if (x[22] <= 0.17000000178813934) {
                                return 3;
                            }

                            else {
                                return 2;
                            }
                        }

                        else {
                            if (x[37] <= 0.08500000089406967) {
                                if (x[40] <= -0.06499999947845936) {
                                    if (x[8] <= 0.08999999985098839) {
                                        if (x[15] <= 0.044999999925494194) {
                                            return 3;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }

                                    else {
                                        if (x[17] <= 0.5300000160932541) {
                                            return 1;
                                        }

                                        else {
                                            return 2;
                                        }
                                    }
                                }

                                else {
                                    if (x[23] <= 0.019999999552965164) {
                                        if (x[10] <= -0.14000000059604645) {
                                            return 0;
                                        }

                                        else {
                                            if (x[24] <= -0.05499999783933163) {
                                                return 1;
                                            }

                                            else {
                                                if (x[0] <= -0.009999999776482582) {
                                                    return 2;
                                                }

                                                else {
                                                    return 3;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[33] <= 0.019999999552965164) {
                                            if (x[21] <= -0.2149999961256981) {
                                                return 1;
                                            }

                                            else {
                                                if (x[2] <= -0.024999999441206455) {
                                                    if (x[34] <= 0.004999998956918716) {
                                                        return 2;
                                                    }

                                                    else {
                                                        return 0;
                                                    }
                                                }

                                                else {
                                                    return 2;
                                                }
                                            }
                                        }

                                        else {
                                            return 3;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[10] <= -0.08000000193715096) {
                                    if (x[40] <= 0.06499999947845936) {
                                        return 1;
                                    }

                                    else {
                                        if (x[24] <= -0.11499999836087227) {
                                            return 1;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }
                                }

                                else {
                                    if (x[17] <= -0.25) {
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