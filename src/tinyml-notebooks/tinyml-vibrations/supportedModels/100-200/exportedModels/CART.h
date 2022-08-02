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
                        if (x[1] <= 0.044999999925494194) {
                            if (x[45] <= -0.024999999441206455) {
                                if (x[36] <= -0.004999999888241291) {
                                    if (x[51] <= 0.004999999888241291) {
                                        if (x[16] <= 0.06499999947845936) {
                                            return 1;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }

                                    else {
                                        if (x[52] <= 0.03499999921768904) {
                                            return 2;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }
                                }

                                else {
                                    if (x[49] <= 0.06499999947845936) {
                                        if (x[48] <= -0.044999999925494194) {
                                            return 1;
                                        }

                                        else {
                                            return 2;
                                        }
                                    }

                                    else {
                                        return 0;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 0.054999999701976776) {
                                    if (x[24] <= -0.044999999925494194) {
                                        if (x[6] <= -0.03499999921768904) {
                                            return 1;
                                        }

                                        else {
                                            return 2;
                                        }
                                    }

                                    else {
                                        if (x[51] <= -0.06499999947845936) {
                                            return 1;
                                        }

                                        else {
                                            if (x[6] <= -0.06499999947845936) {
                                                return 1;
                                            }

                                            else {
                                                if (x[57] <= -0.06499999947845936) {
                                                    if (x[8] <= 0.9900000095367432) {
                                                        return 1;
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
                                    }
                                }

                                else {
                                    if (x[16] <= 0.04499999899417162) {
                                        return 2;
                                    }

                                    else {
                                        return 0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[19] <= 0.014999999664723873) {
                                if (x[28] <= 0.024999999441206455) {
                                    return 2;
                                }

                                else {
                                    if (x[15] <= -0.044999999925494194) {
                                        return 1;
                                    }

                                    else {
                                        return 0;
                                    }
                                }
                            }

                            else {
                                if (x[36] <= 0.07499999925494194) {
                                    if (x[25] <= -0.004999999888241291) {
                                        return 1;
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
                    }

                protected:
                };
            }
        }
    }