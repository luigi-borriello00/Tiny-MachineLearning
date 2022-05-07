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
                        if (x[0] <= 0.7083333432674408) {
                            if (x[0] <= -0.1250000037252903) {
                                if (x[1] <= -0.16853932291269302) {
                                    return 0;
                                }

                                else {
                                    if (x[2] <= -0.5277777910232544) {
                                        if (x[1] <= -0.11797752976417542) {
                                            if (x[2] <= -0.5833333432674408) {
                                                return 1;
                                            }

                                            else {
                                                if (x[3] <= -4.374999940395355) {
                                                    return 0;
                                                }

                                                else {
                                                    if (x[3] <= -0.8526785671710968) {
                                                        if (x[3] <= -0.8973214328289032) {
                                                            return 0;
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
                                            return 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= -3.416666589677334) {
                                            return 0;
                                        }

                                        else {
                                            if (x[2] <= -0.27777777798473835) {
                                                if (x[1] <= -0.10674157366156578) {
                                                    if (x[3] <= -0.8080357015132904) {
                                                        return 0;
                                                    }

                                                    else {
                                                        return 0;
                                                    }
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
                                }
                            }

                            else {
                                if (x[4] <= 5.0) {
                                    if (x[2] <= -0.02777777798473835) {
                                        if (x[3] <= -0.35714285308495164) {
                                            return 1;
                                        }

                                        else {
                                            return 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= -0.0416666679084301) {
                                            return 0;
                                        }

                                        else {
                                            if (x[0] <= 0.3333333432674408) {
                                                if (x[2] <= 0.27777777798473835) {
                                                    if (x[3] <= 0.004464285913854837) {
                                                        return 1;
                                                    }

                                                    else {
                                                        if (x[1] <= -0.00561797758564353) {
                                                            return 0;
                                                        }

                                                        else {
                                                            if (x[3] <= 0.04464285681024194) {
                                                                return 1;
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

                                            else {
                                                if (x[2] <= 0.02777777798473835) {
                                                    if (x[3] <= 0.04464285681024194) {
                                                        return 2;
                                                    }

                                                    else {
                                                        return 2;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 0.0848214291036129) {
                                                        if (x[1] <= 0.44943821569904685) {
                                                            if (x[1] <= 0.00561797758564353) {
                                                                return 1;
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
                                            }
                                        }
                                    }
                                }

                                else {
                                    return 0;
                                }
                            }
                        }

                        else {
                            if (x[4] <= 550.0) {
                                if (x[2] <= 4.972222328186035) {
                                    if (x[0] <= 1.1666666567325592) {
                                        if (x[2] <= 0.5277777910232544) {
                                            if (x[2] <= 0.27777777798473835) {
                                                return 2;
                                            }

                                            else {
                                                if (x[3] <= 0.1339285671710968) {
                                                    return 1;
                                                }

                                                else {
                                                    if (x[1] <= 0.44943821569904685) {
                                                        if (x[3] <= 0.1830357164144516) {
                                                            return 2;
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
                                        }

                                        else {
                                            if (x[3] <= 0.5357142984867096) {
                                                if (x[0] <= 0.7916666567325592) {
                                                    return 1;
                                                }

                                                else {
                                                    return 2;
                                                }
                                            }

                                            else {
                                                return 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 2.7777778804302216) {
                                            return 2;
                                        }

                                        else {
                                            if (x[1] <= 0.9044944047927856) {
                                                return 1;
                                            }

                                            else {
                                                return 2;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1.625) {
                                        return 1;
                                    }

                                    else {
                                        return 2;
                                    }
                                }
                            }

                            else {
                                return 0;
                            }
                        }
                    }

                protected:
                };
            }
        }
    }