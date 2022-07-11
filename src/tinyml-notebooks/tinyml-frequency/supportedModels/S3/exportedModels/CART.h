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
                        if (x[11] <= 4040.304931640625) {
                            if (x[17] <= 3459.925048828125) {
                                if (x[31] <= 3249.0650634765625) {
                                    return 1;
                                }

                                else {
                                    if (x[16] <= 3352.985107421875) {
                                        return 3;
                                    }

                                    else {
                                        if (x[1] <= 3455.375) {
                                            if (x[15] <= 3365.39501953125) {
                                                if (x[24] <= 3363.5750732421875) {
                                                    return 1;
                                                }

                                                else {
                                                    return 3;
                                                }
                                            }

                                            else {
                                                return 1;
                                            }
                                        }

                                        else {
                                            return 3;
                                        }
                                    }
                                }
                            }

                            else {
                                return 3;
                            }
                        }

                        else {
                            if (x[27] <= 5012.219970703125) {
                                if (x[19] <= 4306.955078125) {
                                    return 2;
                                }

                                else {
                                    return 4;
                                }
                            }

                            else {
                                if (x[14] <= 5370.39501953125) {
                                    return 0;
                                }

                                else {
                                    if (x[30] <= 5469.85498046875) {
                                        if (x[21] <= 5478.099853515625) {
                                            return 5;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }

                                    else {
                                        return 5;
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