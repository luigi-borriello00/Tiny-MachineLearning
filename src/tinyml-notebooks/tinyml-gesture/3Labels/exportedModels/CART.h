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
                        if (x[27] <= 0.08500000089406967) {
                            if (x[1] <= -0.024999999441206455) {
                                if (x[33] <= -0.024999999441206455) {
                                    if (x[0] <= 0.03999999910593033) {
                                        return 1;
                                    }

                                    else {
                                        return 2;
                                    }
                                }

                                else {
                                    if (x[20] <= 1.1399999856948853) {
                                        if (x[25] <= 0.14000000059604645) {
                                            if (x[7] <= 0.19500000029802322) {
                                                if (x[4] <= 0.16499999910593033) {
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
                                if (x[20] <= 1.0299999713897705) {
                                    if (x[0] <= 0.0950000025331974) {
                                        if (x[28] <= -0.024999999441206455) {
                                            if (x[23] <= 1.0549999475479126) {
                                                return 1;
                                            }

                                            else {
                                                if (x[32] <= 1.034999966621399) {
                                                    return 0;
                                                }

                                                else {
                                                    return 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[35] <= 0.8549999892711639) {
                                                return 2;
                                            }

                                            else {
                                                return 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[22] <= 0.1600000001490116) {
                                            return 0;
                                        }

                                        else {
                                            return 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[26] <= 0.9449999928474426) {
                                        return 2;
                                    }

                                    else {
                                        if (x[17] <= 0.804999977350235) {
                                            return 1;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[22] <= 0.14000000059604645) {
                                if (x[28] <= -0.06499999947845936) {
                                    if (x[30] <= 0.14999999850988388) {
                                        return 0;
                                    }

                                    else {
                                        return 2;
                                    }
                                }

                                else {
                                    if (x[19] <= 0.255000002682209) {
                                        return 2;
                                    }

                                    else {
                                        return 0;
                                    }
                                }
                            }

                            else {
                                if (x[18] <= 0.20500000566244125) {
                                    return 0;
                                }

                                else {
                                    return 1;
                                }
                            }
                        }
                    }

                protected:
                };
            }
        }
    }