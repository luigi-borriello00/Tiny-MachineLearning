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
                        if (x[16] <= 0.8348686099052429) {
                            if (x[15] <= 0.033451277762651443) {
                                if (x[3] <= -0.4634362459182739) {
                                    if (x[6] <= -0.6701677739620209) {
                                        if (x[27] <= -0.41615982353687286) {
                                            if (x[3] <= -1.1783574223518372) {
                                                return 1;
                                            }

                                            else {
                                                return 2;
                                            }
                                        }

                                        else {
                                            if (x[13] <= -0.1632646545767784) {
                                                return 0;
                                            }

                                            else {
                                                return 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1.6498708724975586) {
                                            if (x[12] <= 0.8574506044387817) {
                                                if (x[16] <= -0.35177093744277954) {
                                                    return 1;
                                                }

                                                else {
                                                    return 2;
                                                }
                                            }

                                            else {
                                                if (x[28] <= -0.3923138529062271) {
                                                    return 0;
                                                }

                                                else {
                                                    return 1;
                                                }
                                            }
                                        }

                                        else {
                                            return 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 0.31935766339302063) {
                                        if (x[1] <= -1.0818158984184265) {
                                            return 1;
                                        }

                                        else {
                                            if (x[7] <= -0.03128922311589122) {
                                                if (x[28] <= 1.1035367846488953) {
                                                    if (x[8] <= -0.6028943061828613) {
                                                        return 1;
                                                    }

                                                    else {
                                                        return 2;
                                                    }
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

                                    else {
                                        if (x[11] <= -0.4169108122587204) {
                                            if (x[31] <= -0.546204149723053) {
                                                if (x[13] <= -0.345087006688118) {
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

                                        else {
                                            if (x[6] <= -0.26624465733766556) {
                                                if (x[4] <= -0.6510581374168396) {
                                                    return 0;
                                                }

                                                else {
                                                    return 2;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1.8075039982795715) {
                                                    if (x[17] <= -0.2870728373527527) {
                                                        return 0;
                                                    }

                                                    else {
                                                        return 1;
                                                    }
                                                }

                                                else {
                                                    if (x[5] <= 0.8451354503631592) {
                                                        return 2;
                                                    }

                                                    else {
                                                        return 0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[11] <= 0.6938729882240295) {
                                    if (x[24] <= 3.831483483314514) {
                                        if (x[8] <= -0.21735325455665588) {
                                            if (x[10] <= -0.10317297279834747) {
                                                if (x[13] <= 0.0) {
                                                    return 1;
                                                }

                                                else {
                                                    return 0;
                                                }
                                            }

                                            else {
                                                return 2;
                                            }
                                        }

                                        else {
                                            if (x[9] <= 0.639794796705246) {
                                                return 2;
                                            }

                                            else {
                                                if (x[7] <= 0.47712504863739014) {
                                                    return 0;
                                                }

                                                else {
                                                    return 2;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        return 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 0.7921371459960938) {
                                        if (x[9] <= 0.2346192739205435) {
                                            return 1;
                                        }

                                        else {
                                            if (x[4] <= 0.7390109002590179) {
                                                return 0;
                                            }

                                            else {
                                                return 2;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[14] <= 0.04258996248245239) {
                                            return 1;
                                        }

                                        else {
                                            return 2;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[7] <= 0.42066337168216705) {
                                if (x[1] <= -1.179620236158371) {
                                    if (x[20] <= 5.214664071798325) {
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
                                if (x[21] <= 4.48967981338501) {
                                    if (x[22] <= 0.7704715803265572) {
                                        if (x[29] <= -0.35211970657110214) {
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