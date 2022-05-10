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
                        if (x[16] <= 0.17319192737340927) {
                            if (x[5] <= -0.31931912899017334) {
                                if (x[9] <= -0.474473312497139) {
                                    if (x[30] <= -0.2560466378927231) {
                                        if (x[6] <= -0.8270195424556732) {
                                            return 0;
                                        }

                                        else {
                                            return 1;
                                        }
                                    }

                                    else {
                                        if (x[11] <= -0.6637428402900696) {
                                            return 1;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= -0.8166954517364502) {
                                        if (x[6] <= -0.8709405958652496) {
                                            return 1;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }

                                    else {
                                        if (x[18] <= 0.09272245690226555) {
                                            return 1;
                                        }

                                        else {
                                            if (x[5] <= -0.685390055179596) {
                                                return 0;
                                            }

                                            else {
                                                return 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[9] <= 1.2972699403762817) {
                                    if (x[1] <= 1.8850882053375244) {
                                        if (x[3] <= -0.7513811886310577) {
                                            return 1;
                                        }

                                        else {
                                            if (x[6] <= -0.38874612748622894) {
                                                if (x[28] <= 0.13052049279212952) {
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
                                    }

                                    else {
                                        if (x[2] <= 1.9999809265136719) {
                                            return 1;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }
                                }

                                else {
                                    if (x[20] <= -0.23012762889266014) {
                                        return 0;
                                    }

                                    else {
                                        return 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 0.5075288116931915) {
                                if (x[10] <= 0.519315630197525) {
                                    if (x[8] <= 0.39092831313610077) {
                                        if (x[11] <= 0.06435750424861908) {
                                            if (x[23] <= 3.3017988204956055) {
                                                return 1;
                                            }

                                            else {
                                                return 0;
                                            }
                                        }

                                        else {
                                            if (x[5] <= -0.5522913336753845) {
                                                return 0;
                                            }

                                            else {
                                                if (x[21] <= 0.8335515856742859) {
                                                    return 1;
                                                }

                                                else {
                                                    if (x[18] <= 1.7204504609107971) {
                                                        return 0;
                                                    }

                                                    else {
                                                        return 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        return 0;
                                    }
                                }

                                else {
                                    if (x[27] <= 0.1587771768681705) {
                                        return 0;
                                    }

                                    else {
                                        if (x[1] <= -0.010499097406864166) {
                                            if (x[31] <= 4.515226483345032) {
                                                return 1;
                                            }

                                            else {
                                                return 0;
                                            }
                                        }

                                        else {
                                            return 0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= -0.6073631048202515) {
                                    if (x[26] <= -0.04956535995006561) {
                                        return 1;
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
                    }

                protected:
                };
            }
        }
    }