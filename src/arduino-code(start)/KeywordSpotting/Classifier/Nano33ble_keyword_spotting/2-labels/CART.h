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
                        if (x[16] <= 0.5424168705940247) {
                            if (x[0] <= 0.39620286226272583) {
                                if (x[1] <= -1.1366345882415771) {
                                    if (x[3] <= -1.518950879573822) {
                                        return 0;
                                    }

                                    else {
                                        return 1;
                                    }
                                }

                                else {
                                    if (x[7] <= -0.47688427567481995) {
                                        return 1;
                                    }

                                    else {
                                        return 0;
                                    }
                                }
                            }

                            else {
                                if (x[7] <= -0.3071790486574173) {
                                    if (x[30] <= -0.5379779934883118) {
                                        return 1;
                                    }

                                    else {
                                        return 0;
                                    }
                                }

                                else {
                                    if (x[17] <= -0.17314700782299042) {
                                        return 0;
                                    }

                                    else {
                                        if (x[19] <= 0.6492834985256195) {
                                            if (x[27] <= -0.43865764141082764) {
                                                if (x[28] <= -0.3944927453994751) {
                                                    return 0;
                                                }

                                                else {
                                                    return 1;
                                                }
                                            }

                                            else {
                                                if (x[5] <= 1.0395709574222565) {
                                                    return 1;
                                                }

                                                else {
                                                    if (x[5] <= 1.4471567273139954) {
                                                        return 0;
                                                    }

                                                    else {
                                                        return 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[29] <= -0.6537566781044006) {
                                return 0;
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