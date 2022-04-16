#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[4] = { 0 };
                        // tree #1
                        if (x[0] <= 21.5) {
                            if (x[3] <= 206.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= 211.5) {
                                    if (x[0] <= 20.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 220.5) {
                                        if (x[3] <= 216.0) {
                                            if (x[2] <= 61.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 101.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 101.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 106.0) {
                                            if (x[2] <= 100.5) {
                                                if (x[3] <= 221.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 116.0) {
                                if (x[2] <= 106.0) {
                                    if (x[2] <= 101.5) {
                                        if (x[2] <= 100.5) {
                                            if (x[1] <= 106.0) {
                                                if (x[3] <= 221.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 611.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 221.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 106.0) {
                                                if (x[3] <= 611.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 110.5) {
                                                    if (x[3] <= 1000.5) {
                                                        if (x[3] <= 611.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1001.5) {
                                                        if (x[0] <= 61.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1001.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 61.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1006.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1011.5) {
                                                        if (x[1] <= 111.5) {
                                                            if (x[3] <= 1010.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 111.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1011.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 100.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 110.5) {
                                                    if (x[3] <= 1016.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 110.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[2] <= 116.0) {
                                        if (x[1] <= 121.5) {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 111.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #2
                        if (x[1] <= 106.0) {
                            if (x[0] <= 20.5) {
                                if (x[3] <= 206.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 61.0) {
                                    if (x[3] <= 211.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 611.0) {
                                        if (x[0] <= 21.5) {
                                            if (x[2] <= 100.5) {
                                                if (x[3] <= 221.5) {
                                                    if (x[1] <= 101.5) {
                                                        if (x[3] <= 211.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 216.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 220.5) {
                                                            if (x[3] <= 216.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 221.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1020.5) {
                                if (x[2] <= 106.0) {
                                    if (x[0] <= 61.0) {
                                        if (x[0] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 101.5) {
                                                if (x[3] <= 611.0) {
                                                    if (x[2] <= 100.5) {
                                                        if (x[3] <= 221.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1000.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 110.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1010.5) {
                                            if (x[3] <= 1001.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1006.0) {
                                                    if (x[2] <= 101.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 111.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 111.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 100.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 116.0) {
                                            if (x[3] <= 1016.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #3
                        if (x[3] <= 220.5) {
                            if (x[2] <= 61.0) {
                                if (x[1] <= 100.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 211.5) {
                                        if (x[0] <= 20.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 101.5) {
                                    if (x[3] <= 211.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 216.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 116.0) {
                                if (x[0] <= 21.5) {
                                    if (x[1] <= 101.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 100.5) {
                                            if (x[3] <= 221.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 61.0) {
                                        if (x[2] <= 101.5) {
                                            if (x[3] <= 221.5) {
                                                if (x[1] <= 106.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 100.5) {
                                                    if (x[1] <= 106.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 611.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1000.5) {
                                                            if (x[1] <= 106.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 110.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 106.0) {
                                            if (x[3] <= 1010.5) {
                                                if (x[3] <= 1006.0) {
                                                    if (x[2] <= 101.5) {
                                                        if (x[3] <= 1001.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 111.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 111.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 100.5) {
                                                        if (x[3] <= 1011.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 111.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 100.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1021.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 110.5) {
                                    if (x[3] <= 1020.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1061.0) {
                                            if (x[3] <= 1021.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 106.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[4] <= 5.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #4
                        if (x[0] <= 21.5) {
                            if (x[1] <= 100.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= 220.5) {
                                    if (x[1] <= 101.5) {
                                        if (x[3] <= 211.5) {
                                            if (x[2] <= 61.0) {
                                                if (x[0] <= 20.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 61.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 216.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 216.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 221.5) {
                                        if (x[2] <= 61.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 106.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1020.5) {
                                if (x[0] <= 61.0) {
                                    if (x[2] <= 101.5) {
                                        if (x[3] <= 221.5) {
                                            if (x[1] <= 106.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1000.5) {
                                                if (x[2] <= 100.5) {
                                                    if (x[1] <= 106.0) {
                                                        if (x[3] <= 611.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 611.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 110.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 111.5) {
                                        if (x[2] <= 106.0) {
                                            if (x[3] <= 1010.5) {
                                                if (x[3] <= 1006.0) {
                                                    if (x[3] <= 1001.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 101.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 106.0) {
                                            if (x[3] <= 1010.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1011.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 100.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1016.0) {
                                                    if (x[1] <= 116.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 116.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 121.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 116.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #5
                        if (x[3] <= 220.5) {
                            if (x[1] <= 100.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[2] <= 61.0) {
                                    if (x[0] <= 20.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 211.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 101.5) {
                                        if (x[3] <= 211.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 216.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 116.0) {
                                if (x[0] <= 21.5) {
                                    if (x[3] <= 221.5) {
                                        if (x[1] <= 101.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 106.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 100.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 111.5) {
                                        if (x[1] <= 106.0) {
                                            if (x[3] <= 611.0) {
                                                if (x[3] <= 221.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1001.5) {
                                                if (x[1] <= 110.5) {
                                                    if (x[2] <= 100.5) {
                                                        if (x[3] <= 221.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 611.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1000.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 101.5) {
                                                        if (x[0] <= 61.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 61.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1010.5) {
                                                        if (x[3] <= 1006.0) {
                                                            if (x[2] <= 101.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 100.5) {
                                            if (x[2] <= 106.0) {
                                                if (x[3] <= 1010.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1016.0) {
                                                if (x[2] <= 106.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 5.0) {
                                    if (x[0] <= 106.0) {
                                        if (x[2] <= 110.5) {
                                            if (x[3] <= 1016.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1061.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #6
                        if (x[0] <= 21.5) {
                            if (x[3] <= 220.5) {
                                if (x[1] <= 100.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 211.5) {
                                        if (x[0] <= 20.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 216.0) {
                                            if (x[1] <= 101.5) {
                                                if (x[2] <= 61.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 101.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 101.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 106.0) {
                                        if (x[3] <= 221.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 100.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 106.0) {
                                if (x[0] <= 61.0) {
                                    if (x[2] <= 101.5) {
                                        if (x[2] <= 100.5) {
                                            if (x[1] <= 106.0) {
                                                if (x[3] <= 610.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 110.5) {
                                                if (x[1] <= 106.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 611.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1000.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 101.5) {
                                        if (x[3] <= 1001.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1010.5) {
                                            if (x[1] <= 111.5) {
                                                if (x[3] <= 1006.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1011.5) {
                                                if (x[1] <= 111.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 110.5) {
                                    if (x[0] <= 100.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 116.0) {
                                        if (x[3] <= 1106.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 106.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #7
                        if (x[1] <= 106.0) {
                            if (x[3] <= 206.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= 220.5) {
                                    if (x[3] <= 211.5) {
                                        if (x[0] <= 20.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 101.5) {
                                            if (x[2] <= 61.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 216.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 611.0) {
                                        if (x[0] <= 21.5) {
                                            if (x[3] <= 221.5) {
                                                if (x[1] <= 101.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 100.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 221.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1020.5) {
                                if (x[0] <= 61.0) {
                                    if (x[1] <= 110.5) {
                                        if (x[3] <= 611.0) {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 100.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 101.5) {
                                                if (x[3] <= 1000.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 101.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 106.0) {
                                        if (x[3] <= 1006.0) {
                                            if (x[3] <= 1001.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 101.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 111.5) {
                                                if (x[3] <= 1010.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1011.5) {
                                                    if (x[3] <= 1010.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 116.0) {
                                            if (x[0] <= 100.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1016.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #8
                        if (x[0] <= 21.5) {
                            if (x[3] <= 206.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 106.0) {
                                    if (x[2] <= 100.5) {
                                        if (x[3] <= 211.5) {
                                            if (x[0] <= 20.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 216.0) {
                                                if (x[1] <= 101.5) {
                                                    if (x[2] <= 61.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 220.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 221.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 116.0) {
                                if (x[2] <= 106.0) {
                                    if (x[0] <= 61.0) {
                                        if (x[3] <= 1001.5) {
                                            if (x[1] <= 106.0) {
                                                if (x[2] <= 100.5) {
                                                    if (x[3] <= 610.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 110.5) {
                                                    if (x[2] <= 101.5) {
                                                        if (x[3] <= 611.0) {
                                                            if (x[2] <= 100.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 1000.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 101.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 101.5) {
                                            if (x[3] <= 1001.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 100.5) {
                                                if (x[3] <= 1006.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 111.5) {
                                                        if (x[3] <= 1010.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 1010.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1011.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 110.5) {
                                            if (x[0] <= 100.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1016.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1061.0) {
                                    if (x[0] <= 101.5) {
                                        if (x[3] <= 1020.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #9
                        if (x[3] <= 220.5) {
                            if (x[1] <= 100.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 101.5) {
                                    if (x[3] <= 211.5) {
                                        if (x[0] <= 20.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 216.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1020.5) {
                                if (x[2] <= 106.0) {
                                    if (x[1] <= 106.0) {
                                        if (x[0] <= 21.5) {
                                            if (x[3] <= 221.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 100.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 611.0) {
                                                if (x[2] <= 100.5) {
                                                    if (x[3] <= 221.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 111.5) {
                                            if (x[3] <= 1010.5) {
                                                if (x[1] <= 110.5) {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 100.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 611.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[2] <= 101.5) {
                                                                    if (x[3] <= 1000.5) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 61.0) {
                                                        if (x[2] <= 101.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 101.5) {
                                                            if (x[3] <= 1001.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 1006.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1010.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1011.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1011.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 116.0) {
                                            if (x[1] <= 111.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 100.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1016.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1016.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 106.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 116.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #10
                        if (x[1] <= 106.0) {
                            if (x[1] <= 101.5) {
                                if (x[3] <= 206.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[2] <= 61.0) {
                                        if (x[3] <= 211.5) {
                                            if (x[0] <= 20.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 221.5) {
                                    if (x[0] <= 21.5) {
                                        if (x[3] <= 220.5) {
                                            if (x[3] <= 216.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 611.0) {
                                        if (x[2] <= 100.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 100.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1020.5) {
                                if (x[3] <= 1006.0) {
                                    if (x[0] <= 61.0) {
                                        if (x[2] <= 101.5) {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 110.5) {
                                                    if (x[3] <= 611.0) {
                                                        if (x[2] <= 100.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 1000.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1001.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= 101.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 61.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 116.0) {
                                            if (x[2] <= 106.0) {
                                                if (x[1] <= 111.5) {
                                                    if (x[3] <= 1010.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1010.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1011.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 100.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1016.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1016.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 116.0) {
                                    if (x[0] <= 101.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1066.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 121.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #11
                        if (x[1] <= 106.0) {
                            if (x[1] <= 100.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= 211.5) {
                                    if (x[0] <= 20.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 101.5) {
                                        if (x[3] <= 216.5) {
                                            if (x[2] <= 61.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 221.5) {
                                            if (x[0] <= 21.5) {
                                                if (x[3] <= 220.5) {
                                                    if (x[3] <= 216.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 100.5) {
                                                if (x[0] <= 21.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 611.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 611.0) {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1020.5) {
                                if (x[0] <= 61.0) {
                                    if (x[2] <= 101.5) {
                                        if (x[0] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1000.5) {
                                                if (x[2] <= 100.5) {
                                                    if (x[3] <= 221.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 611.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 110.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 106.0) {
                                        if (x[2] <= 101.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[1] <= 111.5) {
                                                if (x[3] <= 1010.5) {
                                                    if (x[3] <= 1006.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 100.5) {
                                                    if (x[3] <= 1011.5) {
                                                        if (x[3] <= 1010.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 111.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1011.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1016.0) {
                                                    if (x[0] <= 100.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 116.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 116.0) {
                                                        if (x[0] <= 100.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 116.0) {
                                    if (x[3] <= 1106.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 106.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #12
                        if (x[0] <= 21.5) {
                            if (x[0] <= 20.5) {
                                if (x[1] <= 100.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 101.5) {
                                    if (x[2] <= 61.0) {
                                        if (x[3] <= 211.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 211.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 216.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 220.5) {
                                        if (x[3] <= 216.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 106.0) {
                                if (x[1] <= 106.0) {
                                    if (x[2] <= 100.5) {
                                        if (x[3] <= 221.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[3] <= 611.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 611.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 111.5) {
                                        if (x[3] <= 1010.5) {
                                            if (x[2] <= 101.5) {
                                                if (x[3] <= 611.0) {
                                                    if (x[2] <= 100.5) {
                                                        if (x[3] <= 221.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1000.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1001.5) {
                                                            if (x[1] <= 110.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                if (x[0] <= 61.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1001.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 61.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1006.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 100.5) {
                                            if (x[3] <= 1010.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 110.5) {
                                    if (x[3] <= 1011.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 100.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 116.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #13
                        if (x[2] <= 61.0) {
                            if (x[2] <= 21.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 20.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 211.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 106.0) {
                                if (x[1] <= 106.0) {
                                    if (x[0] <= 21.5) {
                                        if (x[3] <= 211.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 220.5) {
                                                if (x[3] <= 216.0) {
                                                    if (x[1] <= 101.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 101.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 221.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 100.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 100.5) {
                                            if (x[3] <= 221.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[3] <= 611.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 611.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 61.0) {
                                        if (x[2] <= 101.5) {
                                            if (x[3] <= 611.0) {
                                                if (x[2] <= 100.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 221.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1000.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 110.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 101.5) {
                                            if (x[3] <= 1001.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 100.5) {
                                                if (x[1] <= 111.5) {
                                                    if (x[3] <= 1010.5) {
                                                        if (x[3] <= 1006.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1010.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1011.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 110.5) {
                                    if (x[0] <= 100.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1016.0) {
                                            if (x[1] <= 116.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 106.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1115.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #14
                        if (x[0] <= 21.5) {
                            if (x[3] <= 220.5) {
                                if (x[1] <= 100.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[2] <= 61.0) {
                                        if (x[3] <= 211.5) {
                                            if (x[0] <= 20.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 101.5) {
                                            if (x[3] <= 211.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 216.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 216.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 61.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 106.0) {
                                        if (x[3] <= 221.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 106.0) {
                                if (x[0] <= 61.0) {
                                    if (x[2] <= 101.5) {
                                        if (x[3] <= 611.0) {
                                            if (x[3] <= 221.5) {
                                                if (x[1] <= 106.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 100.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1000.5) {
                                                if (x[2] <= 100.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 106.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 110.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 1006.0) {
                                        if (x[3] <= 1001.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= 101.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1010.5) {
                                            if (x[1] <= 111.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 111.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1020.5) {
                                    if (x[0] <= 100.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1016.0) {
                                            if (x[1] <= 116.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 106.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 110.5) {
                                            if (x[3] <= 1115.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #15
                        if (x[1] <= 106.0) {
                            if (x[2] <= 61.0) {
                                if (x[3] <= 206.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 20.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 211.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 101.5) {
                                    if (x[3] <= 211.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 21.5) {
                                        if (x[3] <= 220.5) {
                                            if (x[3] <= 216.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 221.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 100.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 611.0) {
                                            if (x[3] <= 221.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 111.5) {
                                if (x[0] <= 61.0) {
                                    if (x[1] <= 110.5) {
                                        if (x[3] <= 611.0) {
                                            if (x[2] <= 100.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[0] <= 21.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1000.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1001.5) {
                                            if (x[2] <= 101.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 106.0) {
                                        if (x[2] <= 101.5) {
                                            if (x[3] <= 1001.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1010.5) {
                                                if (x[3] <= 1006.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 5.0) {
                                    if (x[2] <= 106.0) {
                                        if (x[0] <= 100.5) {
                                            if (x[3] <= 1010.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 101.5) {
                                            if (x[3] <= 1020.5) {
                                                if (x[3] <= 1011.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 100.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 116.0) {
                                                            if (x[3] <= 1016.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 1016.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 120.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[0] <= 106.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #16
                        if (x[3] <= 220.5) {
                            if (x[3] <= 216.0) {
                                if (x[3] <= 206.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 101.5) {
                                        if (x[3] <= 211.5) {
                                            if (x[0] <= 20.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 61.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 101.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1020.5) {
                                if (x[3] <= 611.0) {
                                    if (x[2] <= 100.5) {
                                        if (x[0] <= 21.5) {
                                            if (x[3] <= 221.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 221.5) {
                                                if (x[1] <= 106.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 106.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 106.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 61.0) {
                                            if (x[2] <= 101.5) {
                                                if (x[3] <= 1000.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 110.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 106.0) {
                                                if (x[2] <= 101.5) {
                                                    if (x[3] <= 1001.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 111.5) {
                                                        if (x[3] <= 1010.5) {
                                                            if (x[3] <= 1006.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 1010.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 100.5) {
                                                                if (x[3] <= 1011.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 100.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1016.0) {
                                                        if (x[1] <= 116.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 116.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1061.0) {
                                    if (x[0] <= 101.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #17
                        if (x[3] <= 220.5) {
                            if (x[0] <= 20.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= 211.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 101.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 216.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 21.5) {
                                if (x[2] <= 100.5) {
                                    if (x[3] <= 221.5) {
                                        if (x[1] <= 101.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 221.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1016.0) {
                                    if (x[2] <= 106.0) {
                                        if (x[0] <= 61.0) {
                                            if (x[3] <= 1001.5) {
                                                if (x[1] <= 110.5) {
                                                    if (x[3] <= 611.0) {
                                                        if (x[3] <= 221.5) {
                                                            if (x[1] <= 106.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 106.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[2] <= 100.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 1000.5) {
                                                            if (x[2] <= 100.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 101.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1001.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 101.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 100.5) {
                                                        if (x[1] <= 111.5) {
                                                            if (x[3] <= 1010.5) {
                                                                if (x[3] <= 1006.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 1011.5) {
                                                                if (x[3] <= 1010.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 116.0) {
                                            if (x[0] <= 100.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 116.0) {
                                        if (x[1] <= 121.5) {
                                            if (x[3] <= 1061.0) {
                                                if (x[0] <= 100.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1020.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1021.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #18
                        if (x[3] <= 220.5) {
                            if (x[1] <= 101.5) {
                                if (x[2] <= 61.0) {
                                    if (x[1] <= 100.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 20.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 211.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 211.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 216.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 120.5) {
                                if (x[0] <= 21.5) {
                                    if (x[1] <= 101.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 106.0) {
                                            if (x[3] <= 221.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 100.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 106.0) {
                                        if (x[3] <= 221.5) {
                                            if (x[1] <= 106.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 106.0) {
                                                if (x[2] <= 100.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1006.0) {
                                                    if (x[3] <= 1001.5) {
                                                        if (x[3] <= 1000.5) {
                                                            if (x[2] <= 100.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= 611.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 101.5) {
                                                                if (x[1] <= 110.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    if (x[0] <= 61.0) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 101.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 61.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1010.5) {
                                                        if (x[1] <= 111.5) {
                                                            if (x[0] <= 61.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 111.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 100.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 110.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[1] <= 116.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 101.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #19
                        if (x[1] <= 106.0) {
                            if (x[0] <= 20.5) {
                                if (x[2] <= 21.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 206.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 101.5) {
                                    if (x[3] <= 211.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 61.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 100.5) {
                                        if (x[0] <= 21.5) {
                                            if (x[3] <= 220.5) {
                                                if (x[3] <= 216.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 611.0) {
                                                if (x[3] <= 221.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 611.0) {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 106.0) {
                                if (x[0] <= 61.0) {
                                    if (x[2] <= 101.5) {
                                        if (x[1] <= 110.5) {
                                            if (x[3] <= 611.0) {
                                                if (x[3] <= 221.5) {
                                                    if (x[2] <= 100.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 100.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1000.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 111.5) {
                                        if (x[2] <= 101.5) {
                                            if (x[3] <= 1001.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1010.5) {
                                                if (x[3] <= 1006.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1010.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[0] <= 100.5) {
                                                if (x[3] <= 1011.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 101.5) {
                                    if (x[0] <= 100.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 116.0) {
                                            if (x[3] <= 1017.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1020.5) {
                                                if (x[3] <= 1016.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 111.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #20
                        if (x[1] <= 106.0) {
                            if (x[2] <= 61.0) {
                                if (x[2] <= 21.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 20.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 211.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 100.5) {
                                    if (x[3] <= 220.5) {
                                        if (x[1] <= 101.5) {
                                            if (x[3] <= 211.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 216.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 221.5) {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 611.0) {
                                                if (x[0] <= 21.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 611.0) {
                                        if (x[0] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1020.5) {
                                if (x[2] <= 106.0) {
                                    if (x[1] <= 111.5) {
                                        if (x[0] <= 61.0) {
                                            if (x[3] <= 1001.5) {
                                                if (x[0] <= 21.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 101.5) {
                                                        if (x[1] <= 110.5) {
                                                            if (x[3] <= 221.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[2] <= 100.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    if (x[3] <= 611.0) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[3] <= 1000.5) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1010.5) {
                                                if (x[3] <= 1006.0) {
                                                    if (x[2] <= 101.5) {
                                                        if (x[3] <= 1001.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 100.5) {
                                            if (x[3] <= 1010.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1011.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1011.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 100.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 116.0) {
                                                if (x[3] <= 1016.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1016.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 116.0) {
                                    if (x[0] <= 105.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #21
                        if (x[2] <= 100.5) {
                            if (x[1] <= 101.5) {
                                if (x[1] <= 100.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 20.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 61.0) {
                                            if (x[3] <= 211.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 211.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 21.5) {
                                    if (x[3] <= 220.5) {
                                        if (x[3] <= 216.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 221.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 221.5) {
                                        if (x[1] <= 106.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 106.0) {
                                            if (x[3] <= 611.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
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
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 611.0) {
                                                if (x[1] <= 106.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 106.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 110.5) {
                                                        if (x[3] <= 1000.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 111.5) {
                                        if (x[3] <= 1010.5) {
                                            if (x[2] <= 101.5) {
                                                if (x[3] <= 1001.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1006.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1010.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1011.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 120.5) {
                                    if (x[1] <= 111.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 110.5) {
                                            if (x[3] <= 1016.0) {
                                                if (x[0] <= 100.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 116.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 100.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1110.5) {
                                        if (x[0] <= 106.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #22
                        if (x[0] <= 21.5) {
                            if (x[3] <= 220.5) {
                                if (x[2] <= 21.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 100.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 211.5) {
                                            if (x[0] <= 20.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 101.5) {
                                                if (x[2] <= 61.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 216.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 216.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 61.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 221.5) {
                                        if (x[1] <= 106.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 100.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 116.0) {
                                if (x[2] <= 106.0) {
                                    if (x[2] <= 101.5) {
                                        if (x[1] <= 106.0) {
                                            if (x[2] <= 100.5) {
                                                if (x[3] <= 610.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 61.0) {
                                                if (x[2] <= 100.5) {
                                                    if (x[3] <= 221.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 110.5) {
                                                        if (x[3] <= 611.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1000.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1001.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 111.5) {
                                            if (x[3] <= 1001.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1006.0) {
                                                    if (x[0] <= 61.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1010.5) {
                                                        if (x[0] <= 61.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1010.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[0] <= 100.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 100.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 110.5) {
                                            if (x[3] <= 1016.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 110.5) {
                                    if (x[3] <= 1016.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 101.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 120.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[4] <= 5.0) {
                                                if (x[0] <= 106.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #23
                        if (x[1] <= 106.0) {
                            if (x[1] <= 100.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[2] <= 61.0) {
                                    if (x[3] <= 211.5) {
                                        if (x[0] <= 20.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 611.0) {
                                        if (x[0] <= 21.5) {
                                            if (x[1] <= 101.5) {
                                                if (x[3] <= 211.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 220.5) {
                                                    if (x[3] <= 216.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 221.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 100.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 100.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 116.0) {
                                if (x[2] <= 106.0) {
                                    if (x[2] <= 101.5) {
                                        if (x[1] <= 110.5) {
                                            if (x[2] <= 100.5) {
                                                if (x[3] <= 221.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 611.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1000.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 61.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1001.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 61.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1006.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1011.5) {
                                                    if (x[3] <= 1010.5) {
                                                        if (x[1] <= 111.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 111.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1011.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 100.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1021.0) {
                                                if (x[3] <= 1016.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 110.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[0] <= 106.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1115.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #24
                        if (x[3] <= 220.5) {
                            if (x[0] <= 20.5) {
                                if (x[2] <= 21.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 100.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 61.0) {
                                    if (x[3] <= 211.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 216.0) {
                                        if (x[1] <= 101.5) {
                                            if (x[3] <= 211.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1020.5) {
                                if (x[3] <= 1000.5) {
                                    if (x[0] <= 21.5) {
                                        if (x[2] <= 61.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 106.0) {
                                                if (x[2] <= 100.5) {
                                                    if (x[3] <= 221.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 106.0) {
                                            if (x[3] <= 610.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 611.0) {
                                                if (x[3] <= 221.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 100.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 61.0) {
                                        if (x[1] <= 110.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= 101.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 116.0) {
                                            if (x[3] <= 1006.0) {
                                                if (x[1] <= 111.5) {
                                                    if (x[3] <= 1001.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 101.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 106.0) {
                                                    if (x[1] <= 111.5) {
                                                        if (x[3] <= 1010.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 100.5) {
                                                            if (x[3] <= 1010.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 100.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1016.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #25
                        if (x[2] <= 100.5) {
                            if (x[1] <= 101.5) {
                                if (x[1] <= 100.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 20.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 61.0) {
                                            if (x[3] <= 211.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 211.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 220.5) {
                                    if (x[3] <= 216.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 21.5) {
                                        if (x[3] <= 221.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 611.0) {
                                            if (x[1] <= 106.0) {
                                                if (x[3] <= 221.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 221.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 106.0) {
                                if (x[1] <= 106.0) {
                                    if (x[3] <= 611.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 101.5) {
                                        if (x[1] <= 110.5) {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 611.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1000.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1001.5) {
                                                if (x[0] <= 61.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 61.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 111.5) {
                                                if (x[3] <= 1010.5) {
                                                    if (x[3] <= 1006.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 100.5) {
                                                    if (x[3] <= 1010.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1011.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1061.0) {
                                    if (x[0] <= 100.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1021.0) {
                                            if (x[1] <= 116.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1016.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #26
                        if (x[1] <= 106.0) {
                            if (x[1] <= 101.5) {
                                if (x[3] <= 206.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 211.5) {
                                        if (x[0] <= 20.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 61.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 216.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 21.5) {
                                    if (x[2] <= 100.5) {
                                        if (x[3] <= 220.5) {
                                            if (x[3] <= 216.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 611.0) {
                                        if (x[3] <= 221.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 106.0) {
                                if (x[0] <= 61.0) {
                                    if (x[2] <= 101.5) {
                                        if (x[3] <= 221.5) {
                                            if (x[2] <= 100.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 100.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[1] <= 110.5) {
                                                    if (x[3] <= 611.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1000.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 101.5) {
                                        if (x[3] <= 1001.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1006.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[1] <= 111.5) {
                                                if (x[3] <= 1010.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1010.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1061.0) {
                                    if (x[1] <= 116.0) {
                                        if (x[0] <= 100.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1021.0) {
                                                if (x[3] <= 1016.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 101.5) {
                                            if (x[3] <= 1016.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #27
                        if (x[3] <= 220.5) {
                            if (x[1] <= 100.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 101.5) {
                                    if (x[3] <= 211.5) {
                                        if (x[0] <= 20.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 61.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 216.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 106.0) {
                                if (x[1] <= 106.0) {
                                    if (x[0] <= 21.5) {
                                        if (x[2] <= 100.5) {
                                            if (x[3] <= 221.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 611.0) {
                                            if (x[2] <= 100.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 111.5) {
                                        if (x[3] <= 1010.5) {
                                            if (x[0] <= 61.0) {
                                                if (x[3] <= 1001.5) {
                                                    if (x[1] <= 110.5) {
                                                        if (x[2] <= 100.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 221.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= 611.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    if (x[3] <= 1000.5) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1006.0) {
                                                    if (x[3] <= 1001.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 101.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1020.5) {
                                    if (x[1] <= 116.0) {
                                        if (x[0] <= 100.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1016.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 5.0) {
                                        if (x[2] <= 110.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 121.5) {
                                                if (x[3] <= 1061.0) {
                                                    if (x[1] <= 116.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 101.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #28
                        if (x[1] <= 106.0) {
                            if (x[2] <= 61.0) {
                                if (x[0] <= 20.5) {
                                    if (x[1] <= 100.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 211.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 611.0) {
                                    if (x[2] <= 100.5) {
                                        if (x[3] <= 211.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 101.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 21.5) {
                                                    if (x[3] <= 221.5) {
                                                        if (x[3] <= 216.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 220.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 221.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 106.0) {
                                if (x[0] <= 61.0) {
                                    if (x[2] <= 101.5) {
                                        if (x[2] <= 100.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[3] <= 611.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 110.5) {
                                                    if (x[3] <= 1000.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 111.5) {
                                        if (x[3] <= 1001.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1006.0) {
                                                if (x[2] <= 101.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 100.5) {
                                            if (x[3] <= 1010.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 110.5) {
                                    if (x[1] <= 111.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 100.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1016.0) {
                                                if (x[1] <= 116.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 101.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1062.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #29
                        if (x[1] <= 106.0) {
                            if (x[0] <= 20.5) {
                                if (x[3] <= 206.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 220.5) {
                                    if (x[2] <= 61.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 211.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 101.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 216.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 21.5) {
                                        if (x[1] <= 101.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 221.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 100.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 611.0) {
                                            if (x[3] <= 221.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1020.5) {
                                if (x[2] <= 106.0) {
                                    if (x[0] <= 61.0) {
                                        if (x[2] <= 101.5) {
                                            if (x[3] <= 611.0) {
                                                if (x[2] <= 100.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 110.5) {
                                                    if (x[3] <= 1000.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1001.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1006.0) {
                                                if (x[2] <= 101.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1011.5) {
                                                    if (x[1] <= 111.5) {
                                                        if (x[3] <= 1010.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 1010.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1011.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 100.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 116.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1016.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 116.0) {
                                    if (x[0] <= 106.0) {
                                        if (x[2] <= 111.5) {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #30
                        if (x[3] <= 220.5) {
                            if (x[2] <= 61.0) {
                                if (x[1] <= 100.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 20.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 216.0) {
                                    if (x[1] <= 101.5) {
                                        if (x[3] <= 211.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 101.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 106.0) {
                                if (x[2] <= 100.5) {
                                    if (x[1] <= 106.0) {
                                        if (x[3] <= 610.5) {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 61.0) {
                                        if (x[2] <= 101.5) {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 110.5) {
                                                    if (x[1] <= 106.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 611.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1000.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1006.0) {
                                            if (x[3] <= 1001.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 101.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1011.5) {
                                                if (x[1] <= 111.5) {
                                                    if (x[3] <= 1010.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 110.5) {
                                    if (x[0] <= 100.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1016.0) {
                                            if (x[1] <= 116.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 116.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1061.0) {
                                        if (x[1] <= 116.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 106.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[4] <= 5.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #31
                        if (x[1] <= 106.0) {
                            if (x[3] <= 216.0) {
                                if (x[1] <= 101.5) {
                                    if (x[3] <= 206.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 20.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 211.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 221.5) {
                                    if (x[3] <= 220.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 21.5) {
                                        if (x[2] <= 100.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 100.5) {
                                            if (x[3] <= 611.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 611.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 116.0) {
                                if (x[0] <= 61.0) {
                                    if (x[3] <= 1001.5) {
                                        if (x[3] <= 611.0) {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 221.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 100.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 101.5) {
                                                if (x[1] <= 110.5) {
                                                    if (x[3] <= 1000.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 106.0) {
                                        if (x[2] <= 101.5) {
                                            if (x[3] <= 1001.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 111.5) {
                                                if (x[3] <= 1010.5) {
                                                    if (x[3] <= 1006.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 100.5) {
                                                    if (x[3] <= 1010.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1011.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 100.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 110.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 161.0) {
                                    if (x[0] <= 101.5) {
                                        if (x[3] <= 1020.5) {
                                            if (x[3] <= 1016.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1062.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[4] <= 5.0) {
                                                if (x[3] <= 1106.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 106.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #32
                        if (x[1] <= 106.0) {
                            if (x[1] <= 101.5) {
                                if (x[2] <= 61.0) {
                                    if (x[1] <= 100.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 211.5) {
                                            if (x[0] <= 20.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 211.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 216.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 21.5) {
                                    if (x[2] <= 100.5) {
                                        if (x[3] <= 220.5) {
                                            if (x[3] <= 216.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 221.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 100.5) {
                                        if (x[3] <= 611.0) {
                                            if (x[3] <= 221.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 611.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 116.0) {
                                if (x[2] <= 106.0) {
                                    if (x[0] <= 61.0) {
                                        if (x[2] <= 101.5) {
                                            if (x[3] <= 611.0) {
                                                if (x[2] <= 100.5) {
                                                    if (x[3] <= 221.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1000.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 110.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 111.5) {
                                            if (x[3] <= 1010.5) {
                                                if (x[2] <= 101.5) {
                                                    if (x[3] <= 1001.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1006.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 100.5) {
                                                if (x[3] <= 1010.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1011.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 100.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1021.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 5.0) {
                                    if (x[0] <= 101.5) {
                                        if (x[2] <= 110.5) {
                                            if (x[3] <= 1016.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 111.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 121.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #33
                        if (x[2] <= 100.5) {
                            if (x[0] <= 21.5) {
                                if (x[1] <= 100.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 20.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 101.5) {
                                            if (x[2] <= 61.0) {
                                                if (x[3] <= 211.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 211.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 216.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 220.5) {
                                                if (x[3] <= 216.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 221.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 106.0) {
                                    if (x[3] <= 611.0) {
                                        if (x[3] <= 221.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1020.5) {
                                if (x[1] <= 106.0) {
                                    if (x[3] <= 611.0) {
                                        if (x[0] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 106.0) {
                                        if (x[1] <= 111.5) {
                                            if (x[0] <= 61.0) {
                                                if (x[2] <= 101.5) {
                                                    if (x[1] <= 110.5) {
                                                        if (x[3] <= 611.0) {
                                                            if (x[0] <= 21.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 1000.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 101.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1010.5) {
                                                        if (x[3] <= 1006.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 100.5) {
                                                if (x[3] <= 1010.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1011.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 110.5) {
                                                if (x[0] <= 100.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1016.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 116.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 106.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 116.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #34
                        if (x[0] <= 21.5) {
                            if (x[3] <= 220.5) {
                                if (x[0] <= 20.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 211.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 101.5) {
                                            if (x[3] <= 216.0) {
                                                if (x[2] <= 61.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 216.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 221.5) {
                                    if (x[2] <= 100.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 100.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1020.5) {
                                if (x[1] <= 106.0) {
                                    if (x[2] <= 100.5) {
                                        if (x[3] <= 221.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[3] <= 611.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 611.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 106.0) {
                                        if (x[3] <= 1010.5) {
                                            if (x[3] <= 221.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[2] <= 100.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 611.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 61.0) {
                                                            if (x[3] <= 1001.5) {
                                                                if (x[2] <= 101.5) {
                                                                    if (x[1] <= 110.5) {
                                                                        if (x[3] <= 1000.5) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 1001.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= 1006.0) {
                                                                    if (x[2] <= 101.5) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 111.5) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 110.5) {
                                            if (x[3] <= 1011.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1016.0) {
                                                    if (x[1] <= 111.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 100.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 116.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 100.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 116.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 120.5) {
                                    if (x[2] <= 111.5) {
                                        if (x[3] <= 1061.0) {
                                            if (x[1] <= 116.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #35
                        if (x[3] <= 216.0) {
                            if (x[2] <= 61.0) {
                                if (x[3] <= 206.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 211.5) {
                                        if (x[0] <= 20.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 101.5) {
                                    if (x[3] <= 211.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 101.5) {
                                if (x[3] <= 1020.5) {
                                    if (x[0] <= 61.0) {
                                        if (x[3] <= 1001.5) {
                                            if (x[1] <= 106.0) {
                                                if (x[2] <= 100.5) {
                                                    if (x[0] <= 21.5) {
                                                        if (x[3] <= 220.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 221.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 611.0) {
                                                            if (x[3] <= 221.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 101.5) {
                                                    if (x[1] <= 110.5) {
                                                        if (x[3] <= 611.0) {
                                                            if (x[3] <= 221.5) {
                                                                if (x[0] <= 21.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 100.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 1000.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 106.0) {
                                            if (x[2] <= 101.5) {
                                                if (x[3] <= 1001.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1010.5) {
                                                    if (x[1] <= 111.5) {
                                                        if (x[3] <= 1006.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 111.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 100.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 100.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1016.0) {
                                                    if (x[1] <= 116.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 116.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[4] <= 5.0) {
                                    if (x[3] <= 1106.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 106.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #36
                        if (x[1] <= 106.0) {
                            if (x[0] <= 20.5) {
                                if (x[1] <= 100.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 211.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 101.5) {
                                        if (x[3] <= 216.5) {
                                            if (x[2] <= 61.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 100.5) {
                                            if (x[0] <= 21.5) {
                                                if (x[3] <= 216.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 220.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 221.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 610.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 611.0) {
                                                if (x[0] <= 21.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 106.0) {
                                if (x[0] <= 61.0) {
                                    if (x[3] <= 1001.5) {
                                        if (x[3] <= 611.0) {
                                            if (x[2] <= 100.5) {
                                                if (x[3] <= 221.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 221.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 101.5) {
                                                if (x[3] <= 1000.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 110.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 101.5) {
                                        if (x[3] <= 1001.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1010.5) {
                                            if (x[1] <= 111.5) {
                                                if (x[3] <= 1006.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 100.5) {
                                                if (x[1] <= 111.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 110.5) {
                                    if (x[1] <= 116.0) {
                                        if (x[0] <= 100.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1016.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1016.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 116.0) {
                                        if (x[2] <= 111.5) {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 106.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #37
                        if (x[3] <= 220.5) {
                            if (x[1] <= 100.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 20.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 211.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 101.5) {
                                            if (x[2] <= 61.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 216.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 216.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
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
                                                    if (x[0] <= 21.5) {
                                                        if (x[3] <= 221.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 100.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 221.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 100.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 611.0) {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 100.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 110.5) {
                                                        if (x[3] <= 1000.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 111.5) {
                                            if (x[2] <= 101.5) {
                                                if (x[3] <= 1001.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1010.5) {
                                                    if (x[3] <= 1006.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1010.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 116.0) {
                                    if (x[3] <= 1021.0) {
                                        if (x[2] <= 106.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1016.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 110.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 106.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1115.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #38
                        if (x[3] <= 220.5) {
                            if (x[3] <= 216.0) {
                                if (x[2] <= 61.0) {
                                    if (x[1] <= 100.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 20.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 211.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 101.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 101.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 106.0) {
                                if (x[1] <= 106.0) {
                                    if (x[2] <= 100.5) {
                                        if (x[0] <= 21.5) {
                                            if (x[3] <= 221.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 611.0) {
                                                if (x[3] <= 221.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 611.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 101.5) {
                                        if (x[0] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1001.5) {
                                                if (x[1] <= 110.5) {
                                                    if (x[2] <= 100.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 611.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1000.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 61.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 111.5) {
                                            if (x[0] <= 61.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1010.5) {
                                                    if (x[3] <= 1006.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1011.5) {
                                                if (x[3] <= 1010.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1020.5) {
                                    if (x[0] <= 100.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 116.0) {
                                            if (x[3] <= 1016.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1016.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 5.0) {
                                        if (x[3] <= 1106.0) {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 111.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 121.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #39
                        if (x[0] <= 21.5) {
                            if (x[3] <= 220.5) {
                                if (x[2] <= 21.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 206.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 211.5) {
                                            if (x[0] <= 20.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 101.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 216.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 106.0) {
                                    if (x[3] <= 221.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 100.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1021.0) {
                                if (x[1] <= 106.0) {
                                    if (x[2] <= 100.5) {
                                        if (x[3] <= 610.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 1000.5) {
                                        if (x[2] <= 100.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[3] <= 611.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 106.0) {
                                            if (x[1] <= 111.5) {
                                                if (x[2] <= 101.5) {
                                                    if (x[1] <= 110.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1001.5) {
                                                            if (x[0] <= 61.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1001.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1010.5) {
                                                            if (x[3] <= 1006.0) {
                                                                if (x[0] <= 61.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 61.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 100.5) {
                                                    if (x[3] <= 1010.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 100.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1016.0) {
                                                    if (x[1] <= 116.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #40
                        if (x[0] <= 21.5) {
                            if (x[3] <= 220.5) {
                                if (x[0] <= 20.5) {
                                    if (x[3] <= 206.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 61.0) {
                                        if (x[3] <= 211.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 216.0) {
                                            if (x[1] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 101.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 221.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 106.0) {
                                if (x[0] <= 61.0) {
                                    if (x[3] <= 1001.5) {
                                        if (x[2] <= 101.5) {
                                            if (x[3] <= 611.0) {
                                                if (x[1] <= 106.0) {
                                                    if (x[3] <= 221.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 221.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 100.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 106.0) {
                                                    if (x[2] <= 100.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 110.5) {
                                                        if (x[3] <= 1000.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 1006.0) {
                                        if (x[3] <= 1001.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= 101.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 111.5) {
                                            if (x[3] <= 1010.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1010.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1011.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1061.0) {
                                    if (x[3] <= 1021.5) {
                                        if (x[0] <= 100.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 110.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 106.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1115.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #41
                        if (x[2] <= 100.5) {
                            if (x[1] <= 101.5) {
                                if (x[3] <= 206.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 211.5) {
                                        if (x[0] <= 20.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 216.0) {
                                            if (x[2] <= 61.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 106.0) {
                                    if (x[3] <= 221.5) {
                                        if (x[3] <= 220.5) {
                                            if (x[3] <= 216.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1020.5) {
                                if (x[3] <= 611.0) {
                                    if (x[3] <= 221.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 21.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 106.0) {
                                        if (x[0] <= 61.0) {
                                            if (x[3] <= 1001.5) {
                                                if (x[1] <= 106.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 101.5) {
                                                        if (x[1] <= 110.5) {
                                                            if (x[3] <= 1000.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 100.5) {
                                                if (x[3] <= 1010.5) {
                                                    if (x[1] <= 111.5) {
                                                        if (x[2] <= 101.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1006.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 111.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1011.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 100.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 116.0) {
                                                if (x[3] <= 1016.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 121.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 116.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #42
                        if (x[3] <= 220.5) {
                            if (x[1] <= 100.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 101.5) {
                                    if (x[3] <= 211.5) {
                                        if (x[0] <= 20.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 61.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 216.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1020.5) {
                                if (x[3] <= 611.0) {
                                    if (x[0] <= 21.5) {
                                        if (x[1] <= 106.0) {
                                            if (x[3] <= 221.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 100.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 106.0) {
                                            if (x[3] <= 221.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 221.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 100.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1006.0) {
                                        if (x[1] <= 106.0) {
                                            if (x[2] <= 100.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 106.0) {
                                                if (x[1] <= 110.5) {
                                                    if (x[2] <= 101.5) {
                                                        if (x[3] <= 1000.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 61.0) {
                                                        if (x[3] <= 1001.5) {
                                                            if (x[2] <= 101.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 1001.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 101.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 61.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 116.0) {
                                                if (x[3] <= 1011.5) {
                                                    if (x[3] <= 1010.5) {
                                                        if (x[1] <= 111.5) {
                                                            if (x[2] <= 106.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 106.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 111.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 111.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1016.0) {
                                                            if (x[0] <= 100.5) {
                                                                if (x[2] <= 106.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 100.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 111.5) {
                                    if (x[2] <= 110.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 101.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #43
                        if (x[3] <= 220.5) {
                            if (x[2] <= 61.0) {
                                if (x[3] <= 206.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 211.5) {
                                        if (x[0] <= 20.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 101.5) {
                                    if (x[3] <= 211.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 216.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1061.0) {
                                if (x[1] <= 106.0) {
                                    if (x[3] <= 611.0) {
                                        if (x[3] <= 221.5) {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 21.5) {
                                                if (x[2] <= 100.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 100.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 61.0) {
                                        if (x[1] <= 110.5) {
                                            if (x[3] <= 611.0) {
                                                if (x[2] <= 100.5) {
                                                    if (x[3] <= 221.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 101.5) {
                                                    if (x[3] <= 1000.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1001.5) {
                                                if (x[2] <= 101.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 111.5) {
                                            if (x[3] <= 1010.5) {
                                                if (x[3] <= 1006.0) {
                                                    if (x[3] <= 1001.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 101.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 106.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 106.0) {
                                                if (x[0] <= 100.5) {
                                                    if (x[3] <= 1010.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 100.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 101.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 116.0) {
                                    if (x[0] <= 106.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #44
                        if (x[0] <= 21.5) {
                            if (x[1] <= 101.5) {
                                if (x[3] <= 206.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 211.5) {
                                        if (x[2] <= 61.0) {
                                            if (x[0] <= 20.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 216.0) {
                                            if (x[2] <= 61.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 220.5) {
                                    if (x[3] <= 216.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 106.0) {
                                        if (x[3] <= 221.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 100.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 116.0) {
                                if (x[0] <= 61.0) {
                                    if (x[2] <= 101.5) {
                                        if (x[1] <= 106.0) {
                                            if (x[3] <= 611.0) {
                                                if (x[3] <= 221.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 611.0) {
                                                if (x[3] <= 221.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 100.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1000.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 110.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 106.0) {
                                        if (x[3] <= 1006.0) {
                                            if (x[3] <= 1001.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 101.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1010.5) {
                                                if (x[1] <= 111.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1011.5) {
                                                    if (x[1] <= 111.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 100.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1021.0) {
                                                if (x[3] <= 1016.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 101.5) {
                                    if (x[1] <= 120.5) {
                                        if (x[3] <= 1060.0) {
                                            if (x[3] <= 1016.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #45
                        if (x[2] <= 100.5) {
                            if (x[3] <= 220.5) {
                                if (x[0] <= 20.5) {
                                    if (x[3] <= 206.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 101.5) {
                                        if (x[3] <= 211.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 61.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 216.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 216.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 221.5) {
                                    if (x[0] <= 21.5) {
                                        if (x[2] <= 61.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 106.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 106.0) {
                                        if (x[3] <= 611.0) {
                                            if (x[0] <= 21.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1016.0) {
                                if (x[1] <= 106.0) {
                                    if (x[0] <= 21.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 106.0) {
                                        if (x[1] <= 111.5) {
                                            if (x[1] <= 110.5) {
                                                if (x[3] <= 611.0) {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1000.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 101.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 61.0) {
                                                    if (x[2] <= 101.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 101.5) {
                                                        if (x[3] <= 1001.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 1010.5) {
                                                            if (x[3] <= 1006.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1010.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 116.0) {
                                            if (x[3] <= 1011.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 111.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 110.5) {
                                                        if (x[0] <= 100.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 110.5) {
                                    if (x[0] <= 100.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 106.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 116.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #46
                        if (x[1] <= 106.0) {
                            if (x[0] <= 21.5) {
                                if (x[2] <= 21.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 220.5) {
                                        if (x[0] <= 20.5) {
                                            if (x[3] <= 206.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 61.0) {
                                                if (x[3] <= 211.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 211.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 216.0) {
                                                        if (x[1] <= 101.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 101.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 100.5) {
                                            if (x[3] <= 221.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 611.0) {
                                    if (x[3] <= 221.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1020.5) {
                                if (x[2] <= 106.0) {
                                    if (x[3] <= 611.0) {
                                        if (x[3] <= 221.5) {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 100.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1006.0) {
                                            if (x[0] <= 61.0) {
                                                if (x[1] <= 110.5) {
                                                    if (x[3] <= 1000.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1001.5) {
                                                        if (x[2] <= 101.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1001.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 101.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 111.5) {
                                                if (x[0] <= 61.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1010.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1011.5) {
                                                    if (x[3] <= 1010.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 100.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 116.0) {
                                            if (x[3] <= 1016.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1016.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 116.0) {
                                    if (x[2] <= 110.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 121.5) {
                                            if (x[3] <= 1061.0) {
                                                if (x[1] <= 116.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1021.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #47
                        if (x[2] <= 100.5) {
                            if (x[0] <= 21.5) {
                                if (x[1] <= 101.5) {
                                    if (x[3] <= 206.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 211.5) {
                                            if (x[2] <= 61.0) {
                                                if (x[0] <= 20.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 220.5) {
                                        if (x[3] <= 216.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 221.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 106.0) {
                                    if (x[3] <= 610.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1020.5) {
                                if (x[0] <= 61.0) {
                                    if (x[3] <= 1001.5) {
                                        if (x[1] <= 106.0) {
                                            if (x[3] <= 611.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 110.5) {
                                                if (x[3] <= 611.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1000.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 101.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 106.0) {
                                        if (x[2] <= 101.5) {
                                            if (x[3] <= 1001.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 111.5) {
                                                if (x[3] <= 1010.5) {
                                                    if (x[3] <= 1006.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 100.5) {
                                                    if (x[3] <= 1010.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 100.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 116.0) {
                                                if (x[3] <= 1016.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 106.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 116.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #48
                        if (x[1] <= 106.0) {
                            if (x[0] <= 20.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 101.5) {
                                    if (x[3] <= 211.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 21.5) {
                                        if (x[3] <= 220.5) {
                                            if (x[3] <= 216.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 221.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 100.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 610.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 106.0) {
                                if (x[3] <= 611.0) {
                                    if (x[2] <= 100.5) {
                                        if (x[3] <= 221.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 221.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1006.0) {
                                        if (x[1] <= 110.5) {
                                            if (x[3] <= 1000.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 101.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 101.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1001.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 61.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 61.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 111.5) {
                                                if (x[3] <= 1010.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1010.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1020.5) {
                                    if (x[0] <= 100.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 116.0) {
                                            if (x[3] <= 1016.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1016.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1106.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 116.0) {
                                            if (x[0] <= 106.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #49
                        if (x[0] <= 21.5) {
                            if (x[2] <= 61.0) {
                                if (x[3] <= 206.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 211.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 100.5) {
                                    if (x[1] <= 101.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 220.5) {
                                            if (x[3] <= 216.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 221.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 106.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 110.5) {
                                if (x[0] <= 61.0) {
                                    if (x[3] <= 1001.5) {
                                        if (x[1] <= 106.0) {
                                            if (x[3] <= 221.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 611.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 101.5) {
                                                if (x[3] <= 611.0) {
                                                    if (x[2] <= 100.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 110.5) {
                                                        if (x[3] <= 1000.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 111.5) {
                                        if (x[3] <= 1010.5) {
                                            if (x[3] <= 1006.0) {
                                                if (x[3] <= 1001.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 101.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 106.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 100.5) {
                                            if (x[2] <= 106.0) {
                                                if (x[3] <= 1010.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1011.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 116.0) {
                                                if (x[3] <= 1016.0) {
                                                    if (x[2] <= 106.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1016.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 101.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 1062.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #50
                        if (x[0] <= 21.5) {
                            if (x[2] <= 61.0) {
                                if (x[0] <= 20.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 211.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 100.5) {
                                    if (x[1] <= 101.5) {
                                        if (x[3] <= 211.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 216.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 220.5) {
                                            if (x[3] <= 216.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 221.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1020.5) {
                                if (x[0] <= 61.0) {
                                    if (x[2] <= 101.5) {
                                        if (x[3] <= 611.0) {
                                            if (x[3] <= 221.5) {
                                                if (x[1] <= 106.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 106.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 100.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1000.5) {
                                                if (x[1] <= 106.0) {
                                                    if (x[2] <= 100.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 110.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 106.0) {
                                        if (x[1] <= 111.5) {
                                            if (x[3] <= 1010.5) {
                                                if (x[2] <= 101.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1006.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1010.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1011.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1011.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 100.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 116.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 4; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                };
            }
        }
    }