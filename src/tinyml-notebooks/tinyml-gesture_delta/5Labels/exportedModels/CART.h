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
                        if (x[23] <= -0.13500000163912773) {
                            if (x[13] <= 0.1900000050663948) {
                                if (x[14] <= 0.09000000264495611) {
                                    if (x[9] <= 0.044999999925494194) {
                                        return 4;
                                    }

                                    else {
                                        return 0;
                                    }
                                }

                                else {
                                    return 3;
                                }
                            }

                            else {
                                if (x[6] <= 0.10500000044703484) {
                                    return 0;
                                }

                                else {
                                    return 4;
                                }
                            }
                        }

                        else {
                            if (x[10] <= -0.08999999985098839) {
                                if (x[26] <= -0.13000000268220901) {
                                    return 4;
                                }

                                else {
                                    if (x[31] <= 0.054999999701976776) {
                                        if (x[10] <= -0.20499999821186066) {
                                            if (x[34] <= 0.054999999701976776) {
                                                return 3;
                                            }

                                            else {
                                                return 1;
                                            }
                                        }

                                        else {
                                            if (x[27] <= -0.04999999888241291) {
                                                return 1;
                                            }

                                            else {
                                                return 2;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[12] <= -0.03499999921768904) {
                                            return 3;
                                        }

                                        else {
                                            return 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[14] <= -0.3200000077486038) {
                                    return 2;
                                }

                                else {
                                    if (x[13] <= 0.22999999672174454) {
                                        if (x[34] <= 0.06499999947845936) {
                                            if (x[34] <= -0.06000000052154064) {
                                                if (x[22] <= -0.054999999701976776) {
                                                    return 2;
                                                }

                                                else {
                                                    if (x[30] <= -0.014999999664723873) {
                                                        if (x[36] <= 0.14999999105930328) {
                                                            return 0;
                                                        }

                                                        else {
                                                            return 3;
                                                        }
                                                    }

                                                    else {
                                                        return 4;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= -0.014999999664723873) {
                                                    return 4;
                                                }

                                                else {
                                                    return 3;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[20] <= 0.06499999947845936) {
                                                if (x[37] <= 0.05999999772757292) {
                                                    return 0;
                                                }

                                                else {
                                                    return 1;
                                                }
                                            }

                                            else {
                                                return 2;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[32] <= -0.019999999552965164) {
                                            return 1;
                                        }

                                        else {
                                            return 0;
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