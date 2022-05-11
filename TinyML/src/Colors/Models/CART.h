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
                        if (x[0] <= 110.5) {
                            if (x[0] <= 100.5) {
                                if (x[1] <= 106.0) {
                                    return 0;
                                }

                                else {
                                    if (x[2] <= 101.5) {
                                        if (x[1] <= 110.5) {
                                            if (x[2] <= 100.5) {
                                                return 1;
                                            }

                                            else {
                                                if (x[3] <= 611.0) {
                                                    return 0;
                                                }

                                                else {
                                                    if (x[3] <= 1005.5) {
                                                        if (x[3] <= 1000.5) {
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
                                        if (x[0] <= 61.0) {
                                            return 0;
                                        }

                                        else {
                                            if (x[2] <= 106.0) {
                                                if (x[1] <= 111.5) {
                                                    if (x[3] <= 1010.5) {
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
                                    if (x[2] <= 110.5) {
                                        if (x[3] <= 1061.0) {
                                            return 1;
                                        }

                                        else {
                                            return 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 101.5) {
                                            return 0;
                                        }

                                        else {
                                            if (x[0] <= 106.0) {
                                                if (x[2] <= 116.0) {
                                                    if (x[3] <= 1101.5) {
                                                        return 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 120.5) {
                                                            return 0;
                                                        }

                                                        else {
                                                            if (x[3] <= 1106.0) {
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
                                                if (x[2] <= 111.5) {
                                                    if (x[3] <= 1106.0) {
                                                        return 2;
                                                    }

                                                    else {
                                                        return 2;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1110.5) {
                                                        if (x[1] <= 161.0) {
                                                            if (x[1] <= 121.5) {
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
                                if (x[2] <= 200.5) {
                                    if (x[0] <= 116.0) {
                                        if (x[2] <= 120.5) {
                                            if (x[2] <= 116.0) {
                                                return 2;
                                            }

                                            else {
                                                if (x[3] <= 1116.0) {
                                                    return 1;
                                                }

                                                else {
                                                    if (x[1] <= 161.0) {
                                                        if (x[3] <= 1121.5) {
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
                                            if (x[3] <= 1161.0) {
                                                if (x[0] <= 111.5) {
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
                                        if (x[2] <= 161.0) {
                                            return 2;
                                        }

                                        else {
                                            if (x[1] <= 201.5) {
                                                return 1;
                                            }

                                            else {
                                                return 2;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 121.5) {
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