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
                            if (x[0] <= 21.5) {
                                if (x[0] <= 20.5) {
                                    if (x[3] <= 210.5) {
                                        if (x[1] <= 61.0) {
                                            if (x[3] <= 161.0) {
                                                return 1;
                                            }

                                            else {
                                                return 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 201.5) {
                                                return 1;
                                            }

                                            else {
                                                if (x[2] <= 21.5) {
                                                    return 1;
                                                }

                                                else {
                                                    if (x[3] <= 206.0) {
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
                                        return 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 211.5) {
                                        return 0;
                                    }

                                    else {
                                        if (x[1] <= 106.0) {
                                            if (x[3] <= 220.5) {
                                                if (x[1] <= 101.5) {
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

                                                else {
                                                    if (x[3] <= 216.0) {
                                                        if (x[2] <= 61.0) {
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

                                            else {
                                                if (x[2] <= 100.5) {
                                                    if (x[1] <= 101.5) {
                                                        return 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 221.5) {
                                                            return 1;
                                                        }

                                                        else {
                                                            return 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 221.5) {
                                                        return 0;
                                                    }

                                                    else {
                                                        return 0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 221.5) {
                                                if (x[2] <= 100.5) {
                                                    return 2;
                                                }

                                                else {
                                                    return 2;
                                                }
                                            }

                                            else {
                                                return 2;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 100.5) {
                                    if (x[2] <= 106.0) {
                                        if (x[0] <= 61.0) {
                                            if (x[2] <= 101.5) {
                                                if (x[1] <= 106.0) {
                                                    if (x[3] <= 611.0) {
                                                        if (x[3] <= 221.5) {
                                                            return 4;
                                                        }

                                                        else {
                                                            if (x[2] <= 100.5) {
                                                                return 0;
                                                            }

                                                            else {
                                                                return 0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 1000.5) {
                                                            return 1;
                                                        }

                                                        else {
                                                            return 0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 110.5) {
                                                        if (x[2] <= 100.5) {
                                                            if (x[3] <= 221.5) {
                                                                return 4;
                                                            }

                                                            else {
                                                                return 4;
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 611.0) {
                                                                if (x[3] <= 221.5) {
                                                                    return 2;
                                                                }

                                                                else {
                                                                    return 0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[3] <= 1001.5) {
                                                                    if (x[3] <= 1000.5) {
                                                                        return 4;
                                                                    }

                                                                    else {
                                                                        return 4;
                                                                    }
                                                                }

                                                                else {
                                                                    return 2;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        return 4;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1000.5) {
                                                    return 2;
                                                }

                                                else {
                                                    if (x[1] <= 110.5) {
                                                        return 0;
                                                    }

                                                    else {
                                                        if (x[3] <= 1006.0) {
                                                            if (x[3] <= 1001.5) {
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
                                        }

                                        else {
                                            if (x[3] <= 1010.5) {
                                                if (x[3] <= 1001.5) {
                                                    if (x[1] <= 110.5) {
                                                        return 4;
                                                    }

                                                    else {
                                                        return 4;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 110.5) {
                                                        return 0;
                                                    }

                                                    else {
                                                        if (x[2] <= 101.5) {
                                                            return 4;
                                                        }

                                                        else {
                                                            if (x[3] <= 1006.0) {
                                                                return 4;
                                                            }

                                                            else {
                                                                if (x[1] <= 111.5) {
                                                                    return 4;
                                                                }

                                                                else {
                                                                    return 4;
                                                                }
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
                                                    return 4;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1010.5) {
                                            if (x[3] <= 1006.0) {
                                                return 0;
                                            }

                                            else {
                                                if (x[1] <= 111.5) {
                                                    return 0;
                                                }

                                                else {
                                                    return 0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 111.5) {
                                                return 0;
                                            }

                                            else {
                                                if (x[1] <= 116.0) {
                                                    if (x[3] <= 1020.5) {
                                                        if (x[2] <= 110.5) {
                                                            if (x[3] <= 1016.0) {
                                                                if (x[3] <= 1011.5) {
                                                                    return 2;
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
                                                            if (x[3] <= 1016.0) {
                                                                return 0;
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
                                                    return 2;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1021.5) {
                                        if (x[3] <= 1020.5) {
                                            if (x[2] <= 110.5) {
                                                if (x[2] <= 106.0) {
                                                    if (x[3] <= 1016.0) {
                                                        if (x[3] <= 1011.5) {
                                                            return 5;
                                                        }

                                                        else {
                                                            return 5;
                                                        }
                                                    }

                                                    else {
                                                        return 3;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1016.0) {
                                                        if (x[1] <= 116.0) {
                                                            return 5;
                                                        }

                                                        else {
                                                            return 5;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 116.0) {
                                                            return 5;
                                                        }

                                                        else {
                                                            return 5;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                return 0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 110.5) {
                                                if (x[1] <= 116.0) {
                                                    return 2;
                                                }

                                                else {
                                                    if (x[0] <= 101.5) {
                                                        return 5;
                                                    }

                                                    else {
                                                        return 3;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 101.5) {
                                                    return 5;
                                                }

                                                else {
                                                    return 5;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 101.5) {
                                            if (x[3] <= 1100.5) {
                                                if (x[2] <= 110.5) {
                                                    return 3;
                                                }

                                                else {
                                                    if (x[1] <= 116.0) {
                                                        return 0;
                                                    }

                                                    else {
                                                        if (x[3] <= 1061.0) {
                                                            return 2;
                                                        }

                                                        else {
                                                            return 2;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 111.5) {
                                                    return 0;
                                                }

                                                else {
                                                    return 0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 5.5) {
                                                if (x[0] <= 106.0) {
                                                    if (x[3] <= 1110.5) {
                                                        if (x[3] <= 1061.0) {
                                                            if (x[1] <= 120.5) {
                                                                if (x[2] <= 110.5) {
                                                                    return 3;
                                                                }

                                                                else {
                                                                    return 3;
                                                                }
                                                            }

                                                            else {
                                                                return 5;
                                                            }
                                                        }

                                                        else {
                                                            if (x[4] <= 0.5) {
                                                                if (x[2] <= 111.5) {
                                                                    if (x[2] <= 110.5) {
                                                                        return 3;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 120.5) {
                                                                            return 3;
                                                                        }

                                                                        else {
                                                                            if (x[3] <= 1101.5) {
                                                                                if (x[3] <= 1100.5) {
                                                                                    return 3;
                                                                                }

                                                                                else {
                                                                                    return 3;
                                                                                }
                                                                            }

                                                                            else {
                                                                                return 3;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[3] <= 1101.5) {
                                                                        if (x[1] <= 121.5) {
                                                                            return 3;
                                                                        }

                                                                        else {
                                                                            return 5;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 120.5) {
                                                                            return 0;
                                                                        }

                                                                        else {
                                                                            if (x[3] <= 1106.0) {
                                                                                return 3;
                                                                            }

                                                                            else {
                                                                                return 3;
                                                                            }
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
                                                    if (x[2] <= 111.5) {
                                                        if (x[3] <= 1106.0) {
                                                            return 6;
                                                        }

                                                        else {
                                                            return 6;
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 1110.5) {
                                                            if (x[1] <= 121.5) {
                                                                return 3;
                                                            }

                                                            else {
                                                                if (x[2] <= 116.0) {
                                                                    if (x[3] <= 1105.5) {
                                                                        return 5;
                                                                    }

                                                                    else {
                                                                        return 5;
                                                                    }
                                                                }

                                                                else {
                                                                    return 3;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 1111.5) {
                                                                if (x[2] <= 116.0) {
                                                                    return 3;
                                                                }

                                                                else {
                                                                    return 5;
                                                                }
                                                            }

                                                            else {
                                                                return 3;
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
                                }
                            }
                        }

                        else {
                            if (x[4] <= 550.0) {
                                if (x[2] <= 200.5) {
                                    if (x[0] <= 116.0) {
                                        if (x[2] <= 120.5) {
                                            if (x[1] <= 200.5) {
                                                if (x[3] <= 1121.5) {
                                                    if (x[2] <= 116.0) {
                                                        return 6;
                                                    }

                                                    else {
                                                        if (x[3] <= 1116.0) {
                                                            return 5;
                                                        }

                                                        else {
                                                            return 6;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 161.0) {
                                                        return 3;
                                                    }

                                                    else {
                                                        return 6;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 111.5) {
                                                    return 3;
                                                }

                                                else {
                                                    return 6;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 111.5) {
                                                return 3;
                                            }

                                            else {
                                                if (x[3] <= 1200.5) {
                                                    return 6;
                                                }

                                                else {
                                                    return 3;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 201.5) {
                                            if (x[3] <= 1220.5) {
                                                return 6;
                                            }

                                            else {
                                                return 3;
                                            }
                                        }

                                        else {
                                            return 6;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 2001.5) {
                                        return 3;
                                    }

                                    else {
                                        return 6;
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