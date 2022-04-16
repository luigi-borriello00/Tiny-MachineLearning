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
                        if (x[1] <= 106.0) {
                            if (x[1] <= 101.5) {
                                if (x[1] <= 100.5) {
                                    return 1;
                                }

                                else {
                                    if (x[3] <= 211.5) {
                                        if (x[0] <= 20.5) {
                                            return 1;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 61.0) {
                                            return 1;
                                        }

                                        else {
                                            if (x[3] <= 216.0) {
                                                return 1;
                                            }

                                            else {
                                                return 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 220.5) {
                                    if (x[3] <= 216.0) {
                                        return 1;
                                    }

                                    else {
                                        return 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 611.0) {
                                        if (x[0] <= 21.5) {
                                            if (x[3] <= 221.5) {
                                                return 0;
                                            }

                                            else {
                                                if (x[2] <= 100.5) {
                                                    return 1;
                                                }

                                                else {
                                                    return 0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 221.5) {
                                                return 3;
                                            }

                                            else {
                                                return 0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 100.5) {
                                            return 1;
                                        }

                                        else {
                                            return 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 106.0) {
                                if (x[0] <= 61.0) {
                                    if (x[2] <= 101.5) {
                                        if (x[0] <= 21.5) {
                                            return 0;
                                        }

                                        else {
                                            if (x[1] <= 110.5) {
                                                if (x[2] <= 100.5) {
                                                    if (x[3] <= 221.5) {
                                                        return 2;
                                                    }

                                                    else {
                                                        return 2;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 611.0) {
                                                        return 0;
                                                    }

                                                    else {
                                                        if (x[3] <= 1000.5) {
                                                            return 2;
                                                        }

                                                        else {
                                                            return 2;
                                                        }
                                                    }
                                                }
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

                                else {
                                    if (x[3] <= 1010.5) {
                                        if (x[3] <= 1001.5) {
                                            return 2;
                                        }

                                        else {
                                            if (x[2] <= 101.5) {
                                                return 2;
                                            }

                                            else {
                                                if (x[3] <= 1006.0) {
                                                    return 2;
                                                }

                                                else {
                                                    if (x[1] <= 111.5) {
                                                        return 2;
                                                    }

                                                    else {
                                                        return 2;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 111.5) {
                                            return 0;
                                        }

                                        else {
                                            if (x[3] <= 1011.5) {
                                                return 2;
                                            }

                                            else {
                                                return 2;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 110.5) {
                                    if (x[0] <= 100.5) {
                                        return 0;
                                    }

                                    else {
                                        if (x[1] <= 116.0) {
                                            if (x[3] <= 1016.0) {
                                                return 2;
                                            }

                                            else {
                                                return 2;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1016.0) {
                                                return 2;
                                            }

                                            else {
                                                return 2;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1110.5) {
                                        if (x[1] <= 121.5) {
                                            if (x[0] <= 101.5) {
                                                return 0;
                                            }

                                            else {
                                                if (x[3] <= 1062.0) {
                                                    return 3;
                                                }

                                                else {
                                                    return 0;
                                                }
                                            }
                                        }

                                        else {
                                            return 3;
                                        }
                                    }

                                    else {
                                        return 0;
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