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
                        if (x[11] <= -0.1770757958292961) {
                            if (x[17] <= -0.5473398268222809) {
                                if (x[31] <= -0.6712331175804138) {
                                    return 1;
                                }

                                else {
                                    if (x[16] <= -0.6092236638069153) {
                                        return 3;
                                    }

                                    else {
                                        if (x[1] <= -0.5422335565090179) {
                                            if (x[15] <= -0.6009089946746826) {
                                                if (x[24] <= -0.6073797345161438) {
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
                            if (x[27] <= 0.4370714873075485) {
                                if (x[19] <= 0.0) {
                                    return 2;
                                }

                                else {
                                    return 4;
                                }
                            }

                            else {
                                if (x[14] <= 0.6697314083576202) {
                                    return 0;
                                }

                                else {
                                    if (x[30] <= 0.7431061863899231) {
                                        if (x[21] <= 0.7466512024402618) {
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