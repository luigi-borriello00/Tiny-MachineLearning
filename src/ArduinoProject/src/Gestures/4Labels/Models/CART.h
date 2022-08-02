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
                        if (x[26] <= 0.9350000023841858) {
                            if (x[22] <= 0.06499999947845936) {
                                if (x[18] <= 0.1850000023841858) {
                                    if (x[39] <= 0.1249999962747097) {
                                        return 3;
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
                                if (x[6] <= 0.11999999731779099) {
                                    return 0;
                                }

                                else {
                                    return 1;
                                }
                            }
                        }

                        else {
                            if (x[39] <= -0.004999999888241291) {
                                if (x[20] <= 1.0750000476837158) {
                                    if (x[30] <= 0.04499999899417162) {
                                        return 2;
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
                                if (x[16] <= 0.044999999925494194) {
                                    if (x[29] <= 0.875) {
                                        return 3;
                                    }

                                    else {
                                        if (x[13] <= -0.0950000025331974) {
                                            if (x[19] <= 0.009999999776482582) {
                                                return 1;
                                            }

                                            else {
                                                if (x[20] <= 0.8400000035762787) {
                                                    return 2;
                                                }

                                                else {
                                                    if (x[35] <= 0.9549999833106995) {
                                                        if (x[34] <= 0.029999999329447746) {
                                                            return 3;
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

                                        else {
                                            if (x[25] <= 0.11999999731779099) {
                                                if (x[35] <= 0.9050000011920929) {
                                                    return 3;
                                                }

                                                else {
                                                    if (x[26] <= 0.9449999928474426) {
                                                        return 0;
                                                    }

                                                    else {
                                                        if (x[10] <= -0.19999999552965164) {
                                                            if (x[18] <= 0.10999999940395355) {
                                                                return 0;
                                                            }

                                                            else {
                                                                return 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[4] <= 0.10000000149011612) {
                                                                if (x[14] <= 0.9650000035762787) {
                                                                    return 1;
                                                                }

                                                                else {
                                                                    if (x[40] <= 0.0) {
                                                                        return 1;
                                                                    }

                                                                    else {
                                                                        return 0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[31] <= 0.0) {
                                                                    return 1;
                                                                }

                                                                else {
                                                                    return 0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[30] <= 0.07500000111758709) {
                                                    return 2;
                                                }

                                                else {
                                                    if (x[39] <= 0.08999999985098839) {
                                                        return 1;
                                                    }

                                                    else {
                                                        return 0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[20] <= 0.9449999928474426) {
                                        if (x[9] <= 0.014999999664723873) {
                                            return 1;
                                        }

                                        else {
                                            if (x[34] <= 0.08500000089406967) {
                                                return 2;
                                            }

                                            else {
                                                return 0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[29] <= 0.8800000250339508) {
                                            return 3;
                                        }

                                        else {
                                            if (x[8] <= 1.1150000095367432) {
                                                if (x[30] <= 0.004999999888241291) {
                                                    return 2;
                                                }

                                                else {
                                                    if (x[36] <= 0.024999999441206455) {
                                                        if (x[13] <= -0.09500000346451998) {
                                                            return 0;
                                                        }

                                                        else {
                                                            return 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[26] <= 1.074999988079071) {
                                                            return 0;
                                                        }

                                                        else {
                                                            return 2;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[4] <= -0.004999999888241291) {
                                                    if (x[21] <= 0.07500000111758709) {
                                                        return 1;
                                                    }

                                                    else {
                                                        return 3;
                                                    }
                                                }

                                                else {
                                                    if (x[26] <= 0.9699999988079071) {
                                                        return 0;
                                                    }

                                                    else {
                                                        if (x[16] <= 0.10999999940395355) {
                                                            return 1;
                                                        }

                                                        else {
                                                            if (x[29] <= 0.9300000071525574) {
                                                                return 0;
                                                            }

                                                            else {
                                                                return 2;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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