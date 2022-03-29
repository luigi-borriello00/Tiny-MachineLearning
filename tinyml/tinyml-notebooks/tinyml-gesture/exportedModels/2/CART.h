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
                        if (x[16] <= 0.17412663251161575) {
                            if (x[5] <= -0.33271096646785736) {
                                if (x[9] <= -0.49215908348560333) {
                                    if (x[30] <= -0.25789015740156174) {
                                        if (x[6] <= -0.8851555287837982) {
                                            return 0;
                                        }

                                        else {
                                            return 1;
                                        }
                                    }

                                    else {
                                        if (x[11] <= -0.6751348078250885) {
                                            return 1;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= -0.8747537434101105) {
                                        if (x[6] <= -0.9294069707393646) {
                                            return 1;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }

                                    else {
                                        if (x[18] <= 0.08774660900235176) {
                                            return 1;
                                        }

                                        else {
                                            if (x[5] <= -0.6966364085674286) {
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
                                if (x[9] <= 1.2842715978622437) {
                                    if (x[0] <= 1.416141152381897) {
                                        if (x[3] <= -0.785508543252945) {
                                            return 1;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }

                                    else {
                                        if (x[11] <= -0.16417454276233912) {
                                            return 0;
                                        }

                                        else {
                                            if (x[28] <= -0.26394280791282654) {
                                                return 0;
                                            }

                                            else {
                                                return 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= -0.6462554633617401) {
                                        return 0;
                                    }

                                    else {
                                        return 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 0.5052467286586761) {
                                if (x[10] <= 0.5138475298881531) {
                                    if (x[8] <= 0.374563992023468) {
                                        if (x[11] <= 0.053355228155851364) {
                                            if (x[23] <= 3.392184257507324) {
                                                return 1;
                                            }

                                            else {
                                                return 0;
                                            }
                                        }

                                        else {
                                            if (x[5] <= -0.5643177628517151) {
                                                return 0;
                                            }

                                            else {
                                                if (x[21] <= 0.8404299020767212) {
                                                    return 1;
                                                }

                                                else {
                                                    if (x[18] <= 1.7154746055603027) {
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
                                    if (x[4] <= -0.3779829144477844) {
                                        return 1;
                                    }

                                    else {
                                        if (x[1] <= -1.405070424079895) {
                                            return 1;
                                        }

                                        else {
                                            if (x[8] <= 0.1385982185602188) {
                                                if (x[31] <= 0.3325246125459671) {
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
                                }
                            }

                            else {
                                if (x[0] <= -0.6078641712665558) {
                                    if (x[26] <= -0.03429985046386719) {
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