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
                        uint8_t votes[3] = { 0 };
                        // tree #1
                        if (x[0] <= 110.5) {
                            if (x[1] <= 111.5) {
                                if (x[2] <= 100.5) {
                                    if (x[0] <= 21.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 106.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 61.0) {
                                        if (x[1] <= 110.5) {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 101.5) {
                                                    if (x[1] <= 106.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1000.5) {
                                                            if (x[3] <= 611.0) {
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
                                        if (x[3] <= 1006.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 110.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1010.5) {
                                                    if (x[2] <= 106.0) {
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
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 5.0) {
                                    if (x[3] <= 1010.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 100.5) {
                                            if (x[3] <= 1011.5) {
                                                if (x[2] <= 106.0) {
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
                                            if (x[2] <= 110.5) {
                                                if (x[2] <= 106.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1061.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 101.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 106.0) {
                                                        if (x[2] <= 116.0) {
                                                            if (x[2] <= 111.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= 1106.0) {
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
                                                        if (x[3] <= 1110.5) {
                                                            if (x[3] <= 1106.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 121.5) {
                                                                    if (x[2] <= 111.5) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
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
                            if (x[2] <= 201.5) {
                                if (x[4] <= 611.0) {
                                    if (x[2] <= 116.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 116.0) {
                                            if (x[0] <= 111.5) {
                                                if (x[1] <= 200.5) {
                                                    if (x[1] <= 161.0) {
                                                        if (x[3] <= 1121.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 1121.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 120.5) {
                                                                votes[2] += 1;
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
                                                if (x[2] <= 120.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1161.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 121.5) {
                                                if (x[1] <= 200.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 200.5) {
                                                        if (x[1] <= 201.5) {
                                                            if (x[3] <= 1220.5) {
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
                                                        votes[1] += 1;
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
                                votes[1] += 1;
                            }
                        }

                        // tree #2
                        if (x[1] <= 120.5) {
                            if (x[0] <= 100.5) {
                                if (x[3] <= 611.0) {
                                    if (x[1] <= 106.0) {
                                        votes[0] += 1;
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
                                    if (x[2] <= 101.5) {
                                        if (x[0] <= 61.0) {
                                            if (x[3] <= 1000.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 106.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 110.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1010.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1011.5) {
                                                if (x[2] <= 106.0) {
                                                    if (x[1] <= 111.5) {
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
                                if (x[3] <= 1061.0) {
                                    if (x[0] <= 101.5) {
                                        if (x[3] <= 1016.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 110.5) {
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
                                    if (x[2] <= 110.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 101.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 111.5) {
                                                votes[1] += 1;
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
                            if (x[4] <= 5.0) {
                                if (x[0] <= 110.5) {
                                    if (x[3] <= 1110.5) {
                                        if (x[0] <= 106.0) {
                                            if (x[2] <= 111.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 101.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 161.0) {
                                                if (x[3] <= 1106.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 111.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 121.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 121.5) {
                                            if (x[0] <= 106.0) {
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
                                    if (x[0] <= 116.0) {
                                        if (x[2] <= 120.5) {
                                            if (x[3] <= 1121.5) {
                                                if (x[1] <= 200.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1116.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 111.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 121.5) {
                                                if (x[0] <= 111.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 200.5) {
                                                        votes[1] += 1;
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

                                    else {
                                        if (x[3] <= 1611.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= 200.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[0] <= 121.5) {
                                                    votes[1] += 1;
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

                        // tree #3
                        if (x[0] <= 100.5) {
                            if (x[2] <= 100.5) {
                                if (x[1] <= 106.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 1001.5) {
                                    if (x[1] <= 106.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 611.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 110.5) {
                                                if (x[2] <= 101.5) {
                                                    if (x[3] <= 1000.5) {
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
                                                if (x[0] <= 61.0) {
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
                                    if (x[1] <= 111.5) {
                                        if (x[0] <= 61.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1006.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 106.0) {
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
                            if (x[3] <= 1101.5) {
                                if (x[3] <= 1061.0) {
                                    if (x[1] <= 116.0) {
                                        if (x[2] <= 110.5) {
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
                                    if (x[2] <= 110.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1100.5) {
                                            if (x[1] <= 120.5) {
                                                if (x[0] <= 101.5) {
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
                                            if (x[0] <= 101.5) {
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
                                if (x[4] <= 105.0) {
                                    if (x[1] <= 121.5) {
                                        if (x[2] <= 111.5) {
                                            if (x[3] <= 1106.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1106.0) {
                                                if (x[0] <= 101.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 120.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 116.0) {
                                                    if (x[0] <= 106.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1110.5) {
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
                                        if (x[1] <= 211.0) {
                                            if (x[0] <= 110.5) {
                                                if (x[1] <= 161.0) {
                                                    if (x[2] <= 116.0) {
                                                        if (x[3] <= 1110.5) {
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
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 116.0) {
                                                    if (x[3] <= 1200.5) {
                                                        if (x[3] <= 1121.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 161.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[0] <= 111.5) {
                                                                    if (x[2] <= 120.5) {
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
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1611.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 200.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 201.5) {
                                                                if (x[1] <= 206.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
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
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #4
                        if (x[0] <= 106.0) {
                            if (x[0] <= 100.5) {
                                if (x[3] <= 611.0) {
                                    if (x[1] <= 106.0) {
                                        votes[0] += 1;
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
                                    if (x[2] <= 106.0) {
                                        if (x[0] <= 61.0) {
                                            if (x[1] <= 110.5) {
                                                if (x[3] <= 1000.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 101.5) {
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

                                        else {
                                            if (x[3] <= 1010.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 111.5) {
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
                                if (x[3] <= 1101.5) {
                                    if (x[0] <= 101.5) {
                                        if (x[2] <= 110.5) {
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
                                    if (x[3] <= 1106.0) {
                                        if (x[0] <= 101.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 120.5) {
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
                            }
                        }

                        else {
                            if (x[0] <= 110.5) {
                                if (x[4] <= 5.0) {
                                    if (x[3] <= 1110.5) {
                                        if (x[1] <= 161.0) {
                                            if (x[3] <= 1106.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[1] <= 121.5) {
                                                    if (x[2] <= 111.5) {
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

                            else {
                                if (x[4] <= 551.0) {
                                    if (x[3] <= 1120.5) {
                                        if (x[2] <= 116.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1116.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 200.5) {
                                            if (x[0] <= 111.5) {
                                                if (x[1] <= 200.5) {
                                                    if (x[1] <= 161.0) {
                                                        if (x[3] <= 1121.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 120.5) {
                                                            votes[2] += 1;
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

                                            else {
                                                if (x[1] <= 201.5) {
                                                    if (x[1] <= 200.5) {
                                                        if (x[0] <= 116.0) {
                                                            if (x[3] <= 1205.0) {
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
                                                        if (x[3] <= 1206.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1211.5) {
                                                                if (x[2] <= 121.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    if (x[0] <= 116.0) {
                                                                        votes[1] += 1;
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
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 2000.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 206.0) {
                                                    votes[1] += 1;
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

                        // tree #5
                        if (x[3] <= 1016.0) {
                            if (x[0] <= 100.5) {
                                if (x[0] <= 61.0) {
                                    if (x[0] <= 21.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1000.5) {
                                            if (x[1] <= 106.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 611.0) {
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

                                else {
                                    if (x[2] <= 106.0) {
                                        if (x[3] <= 1006.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 111.5) {
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
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 110.5) {
                                if (x[0] <= 106.0) {
                                    if (x[2] <= 110.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 101.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1110.5) {
                                                if (x[1] <= 120.5) {
                                                    if (x[2] <= 111.5) {
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
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1110.5) {
                                        if (x[3] <= 1106.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= 116.0) {
                                                if (x[2] <= 111.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 55.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 550.0) {
                                    if (x[0] <= 116.0) {
                                        if (x[2] <= 120.5) {
                                            if (x[3] <= 1121.5) {
                                                if (x[2] <= 116.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1116.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 161.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 121.5) {
                                                if (x[3] <= 1161.5) {
                                                    if (x[0] <= 111.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
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
                                        if (x[2] <= 201.5) {
                                            if (x[1] <= 201.5) {
                                                if (x[3] <= 1220.5) {
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
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #6
                        if (x[0] <= 110.5) {
                            if (x[3] <= 1011.5) {
                                if (x[2] <= 100.5) {
                                    if (x[1] <= 106.0) {
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
                                        if (x[0] <= 61.0) {
                                            if (x[2] <= 101.5) {
                                                if (x[3] <= 1000.5) {
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
                                            if (x[1] <= 111.5) {
                                                if (x[3] <= 1006.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 106.0) {
                                                        if (x[3] <= 1010.5) {
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
                                                if (x[2] <= 106.0) {
                                                    votes[1] += 1;
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
                                if (x[4] <= 5.0) {
                                    if (x[3] <= 1100.5) {
                                        if (x[3] <= 1061.0) {
                                            if (x[2] <= 110.5) {
                                                if (x[1] <= 116.0) {
                                                    if (x[0] <= 100.5) {
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
                                                if (x[3] <= 1021.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 116.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 120.5) {
                                                if (x[0] <= 101.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 110.5) {
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
                                        if (x[1] <= 120.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 106.0) {
                                                    if (x[2] <= 116.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 111.5) {
                                                        if (x[3] <= 1106.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 116.0) {
                                                            if (x[3] <= 1110.5) {
                                                                if (x[1] <= 121.5) {
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
                                                            votes[1] += 1;
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
                        }

                        else {
                            if (x[1] <= 210.5) {
                                if (x[2] <= 200.5) {
                                    if (x[2] <= 120.5) {
                                        if (x[1] <= 200.5) {
                                            if (x[2] <= 116.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[0] <= 111.5) {
                                                    if (x[1] <= 161.0) {
                                                        if (x[3] <= 1121.5) {
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
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 111.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 116.0) {
                                            if (x[2] <= 121.5) {
                                                if (x[1] <= 200.5) {
                                                    if (x[0] <= 111.5) {
                                                        if (x[3] <= 1161.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[4] <= 1001.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[4] <= 1010.0) {
                                                            votes[1] += 1;
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

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 161.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[0] <= 121.5) {
                                                    if (x[1] <= 201.5) {
                                                        votes[1] += 1;
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
                                    if (x[0] <= 121.5) {
                                        votes[1] += 1;
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

                        // tree #7
                        if (x[1] <= 121.5) {
                            if (x[3] <= 1010.5) {
                                if (x[1] <= 106.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 1001.5) {
                                        if (x[0] <= 61.0) {
                                            if (x[3] <= 611.0) {
                                                if (x[2] <= 100.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 110.5) {
                                                    if (x[3] <= 1000.5) {
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
                                            votes[1] += 1;
                                        }
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
                                    if (x[0] <= 106.0) {
                                        if (x[0] <= 100.5) {
                                            if (x[2] <= 106.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 110.5) {
                                                if (x[0] <= 101.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1061.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 101.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1101.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1110.5) {
                                                            if (x[1] <= 120.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= 1106.0) {
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
                                        }
                                    }

                                    else {
                                        if (x[2] <= 111.5) {
                                            if (x[3] <= 1106.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 110.5) {
                                                if (x[3] <= 1110.5) {
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
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= 5.0) {
                                if (x[0] <= 110.5) {
                                    if (x[3] <= 1110.5) {
                                        if (x[1] <= 161.0) {
                                            votes[2] += 1;
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
                                    if (x[1] <= 210.5) {
                                        if (x[0] <= 111.5) {
                                            if (x[1] <= 200.5) {
                                                if (x[1] <= 161.0) {
                                                    if (x[2] <= 116.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1121.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 120.5) {
                                                        votes[2] += 1;
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

                                        else {
                                            if (x[2] <= 200.5) {
                                                if (x[1] <= 201.5) {
                                                    if (x[2] <= 161.0) {
                                                        if (x[3] <= 1200.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 121.5) {
                                                                if (x[1] <= 200.5) {
                                                                    if (x[3] <= 1201.5) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[3] <= 1206.0) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
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

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 206.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 121.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }
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

                        // tree #8
                        if (x[0] <= 100.5) {
                            if (x[3] <= 611.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 110.5) {
                                    if (x[3] <= 1000.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 1001.5) {
                                        if (x[2] <= 101.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 101.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 106.0) {
                                                if (x[0] <= 61.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 111.5) {
                                                        if (x[3] <= 1010.5) {
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
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 121.5) {
                                if (x[2] <= 110.5) {
                                    if (x[3] <= 1061.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 120.5) {
                                        if (x[3] <= 1100.5) {
                                            if (x[3] <= 1021.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 101.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 111.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 116.0) {
                                            if (x[2] <= 111.5) {
                                                if (x[0] <= 106.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1106.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1106.0) {
                                                    if (x[3] <= 1101.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 101.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1110.5) {
                                                        if (x[0] <= 106.0) {
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
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 5.0) {
                                    if (x[0] <= 110.5) {
                                        if (x[2] <= 116.0) {
                                            if (x[3] <= 1110.5) {
                                                votes[2] += 1;
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
                                        if (x[1] <= 210.5) {
                                            if (x[3] <= 1111.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[0] <= 116.0) {
                                                    if (x[1] <= 205.5) {
                                                        if (x[3] <= 1200.5) {
                                                            if (x[1] <= 200.5) {
                                                                if (x[3] <= 1121.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    if (x[2] <= 120.5) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 111.5) {
                                                                    votes[1] += 1;
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

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 2000.5) {
                                                        if (x[1] <= 201.5) {
                                                            if (x[3] <= 1220.5) {
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
                                                        if (x[0] <= 121.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }
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

                        // tree #9
                        if (x[3] <= 1106.0) {
                            if (x[1] <= 116.0) {
                                if (x[0] <= 100.5) {
                                    if (x[1] <= 106.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 61.0) {
                                            if (x[1] <= 110.5) {
                                                if (x[3] <= 1000.5) {
                                                    if (x[3] <= 611.0) {
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

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 111.5) {
                                                if (x[2] <= 101.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 106.0) {
                                                        if (x[3] <= 1010.5) {
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
                                                if (x[3] <= 1011.5) {
                                                    if (x[2] <= 106.0) {
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
                                    }
                                }

                                else {
                                    if (x[3] <= 1021.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 106.0) {
                                    if (x[1] <= 120.5) {
                                        if (x[2] <= 111.5) {
                                            if (x[0] <= 101.5) {
                                                if (x[2] <= 110.5) {
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
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 111.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
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
                            if (x[0] <= 110.5) {
                                if (x[1] <= 121.5) {
                                    if (x[2] <= 111.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= 116.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1116.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[4] <= 5.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 550.0) {
                                    if (x[1] <= 210.5) {
                                        if (x[3] <= 1120.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= 201.5) {
                                                if (x[1] <= 161.0) {
                                                    if (x[3] <= 1121.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1206.0) {
                                                        if (x[0] <= 111.5) {
                                                            if (x[3] <= 1121.5) {
                                                                if (x[1] <= 200.5) {
                                                                    votes[2] += 1;
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
                                                            if (x[2] <= 120.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 200.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 200.5) {
                                                            if (x[3] <= 1216.0) {
                                                                if (x[0] <= 116.0) {
                                                                    votes[1] += 1;
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
                                                            if (x[0] <= 121.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }
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

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #10
                        if (x[0] <= 110.5) {
                            if (x[0] <= 100.5) {
                                if (x[3] <= 611.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 101.5) {
                                        if (x[1] <= 110.5) {
                                            if (x[0] <= 61.0) {
                                                if (x[1] <= 106.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1000.5) {
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
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 61.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 111.5) {
                                                if (x[3] <= 1010.5) {
                                                    if (x[2] <= 106.0) {
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
                                                if (x[2] <= 106.0) {
                                                    votes[1] += 1;
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
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 101.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1120.5) {
                                            if (x[4] <= 5.0) {
                                                if (x[0] <= 106.0) {
                                                    if (x[2] <= 111.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 116.0) {
                                                            if (x[1] <= 120.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= 1106.0) {
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

                                                else {
                                                    if (x[1] <= 121.5) {
                                                        if (x[2] <= 111.5) {
                                                            if (x[3] <= 1106.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 1110.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 116.0) {
                                                            votes[2] += 1;
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

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= 551.0) {
                                if (x[3] <= 1201.5) {
                                    if (x[2] <= 121.5) {
                                        if (x[2] <= 116.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1116.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 161.0) {
                                                    if (x[3] <= 1121.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 120.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 200.5) {
                                                            votes[1] += 1;
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
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 116.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 201.5) {
                                            if (x[3] <= 1220.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[1] <= 201.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 200.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 2005.5) {
                                                            if (x[1] <= 206.0) {
                                                                votes[1] += 1;
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
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #11
                        if (x[0] <= 110.5) {
                            if (x[0] <= 100.5) {
                                if (x[1] <= 106.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 1001.5) {
                                        if (x[0] <= 61.0) {
                                            if (x[2] <= 100.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 21.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 611.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 101.5) {
                                                            if (x[3] <= 1000.5) {
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
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 61.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1006.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 106.0) {
                                                    if (x[3] <= 1010.5) {
                                                        if (x[1] <= 110.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 111.5) {
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
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 110.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[4] <= 5.0) {
                                        if (x[3] <= 1021.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 121.5) {
                                                    if (x[3] <= 1101.5) {
                                                        if (x[0] <= 106.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 111.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 116.0) {
                                                                if (x[1] <= 120.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    if (x[3] <= 1110.5) {
                                                                        if (x[0] <= 106.0) {
                                                                            if (x[3] <= 1106.0) {
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
                                                    if (x[1] <= 161.0) {
                                                        if (x[2] <= 116.0) {
                                                            if (x[3] <= 1110.5) {
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
                            }
                        }

                        else {
                            if (x[3] <= 1121.5) {
                                if (x[1] <= 200.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 111.5) {
                                    if (x[3] <= 1201.5) {
                                        if (x[2] <= 120.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[4] <= 550.0) {
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
                                    if (x[0] <= 116.0) {
                                        if (x[1] <= 201.5) {
                                            if (x[3] <= 1200.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[4] <= 1010.0) {
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
                                        if (x[3] <= 1220.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= 120.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 201.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 201.5) {
                                                        if (x[2] <= 200.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 206.0) {
                                                                votes[1] += 1;
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
                                }
                            }
                        }

                        // tree #12
                        if (x[0] <= 110.5) {
                            if (x[0] <= 100.5) {
                                if (x[1] <= 106.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 101.5) {
                                        if (x[3] <= 611.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 110.5) {
                                                if (x[3] <= 1000.5) {
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

                                    else {
                                        if (x[0] <= 61.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 106.0) {
                                                if (x[1] <= 111.5) {
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
                            }

                            else {
                                if (x[3] <= 1061.0) {
                                    if (x[1] <= 116.0) {
                                        if (x[2] <= 110.5) {
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
                                    if (x[0] <= 101.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 106.0) {
                                            if (x[2] <= 116.0) {
                                                if (x[1] <= 120.5) {
                                                    if (x[3] <= 1101.5) {
                                                        if (x[3] <= 1100.5) {
                                                            if (x[2] <= 110.5) {
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
                                                        votes[0] += 1;
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
                                            if (x[4] <= 505.5) {
                                                if (x[2] <= 111.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 116.0) {
                                                        if (x[1] <= 121.5) {
                                                            if (x[3] <= 1110.5) {
                                                                votes[2] += 1;
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
                            }
                        }

                        else {
                            if (x[2] <= 120.5) {
                                if (x[1] <= 200.5) {
                                    if (x[1] <= 161.0) {
                                        if (x[3] <= 1121.0) {
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
                                    if (x[3] <= 1116.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 116.0) {
                                    if (x[2] <= 121.5) {
                                        if (x[4] <= 600.5) {
                                            if (x[1] <= 200.5) {
                                                votes[1] += 1;
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
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 120.5) {
                                        if (x[2] <= 162.0) {
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
                        }

                        // tree #13
                        if (x[2] <= 111.5) {
                            if (x[2] <= 106.0) {
                                if (x[0] <= 61.0) {
                                    if (x[3] <= 221.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 101.5) {
                                            if (x[1] <= 106.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 100.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 611.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1000.5) {
                                                            votes[0] += 1;
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

                                else {
                                    if (x[1] <= 111.5) {
                                        if (x[3] <= 1010.5) {
                                            if (x[2] <= 101.5) {
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
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1016.0) {
                                    if (x[0] <= 100.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 116.0) {
                                        if (x[3] <= 1020.5) {
                                            if (x[0] <= 100.5) {
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
                                        if (x[0] <= 106.0) {
                                            if (x[1] <= 120.5) {
                                                if (x[0] <= 101.5) {
                                                    if (x[3] <= 1061.0) {
                                                        if (x[2] <= 110.5) {
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
                                                    if (x[3] <= 1061.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1100.5) {
                                                            if (x[2] <= 110.5) {
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
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1106.0) {
                                                votes[2] += 1;
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
                            if (x[0] <= 110.5) {
                                if (x[1] <= 120.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[4] <= 5.0) {
                                        if (x[1] <= 121.5) {
                                            if (x[0] <= 106.0) {
                                                if (x[3] <= 1110.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1110.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1110.5) {
                                                if (x[1] <= 161.0) {
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

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 200.5) {
                                    if (x[4] <= 550.0) {
                                        if (x[1] <= 201.5) {
                                            if (x[2] <= 121.5) {
                                                if (x[1] <= 200.5) {
                                                    if (x[3] <= 1200.5) {
                                                        if (x[1] <= 161.0) {
                                                            if (x[3] <= 1121.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 120.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 116.0) {
                                                            votes[1] += 1;
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
                                                if (x[2] <= 161.0) {
                                                    if (x[0] <= 116.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 116.0) {
                                                votes[1] += 1;
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
                                    if (x[3] <= 2005.5) {
                                        if (x[2] <= 201.5) {
                                            if (x[0] <= 160.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
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

                        // tree #14
                        if (x[0] <= 110.5) {
                            if (x[0] <= 100.5) {
                                if (x[1] <= 106.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 106.0) {
                                        if (x[0] <= 61.0) {
                                            if (x[1] <= 110.5) {
                                                if (x[2] <= 100.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1000.5) {
                                                            if (x[3] <= 611.0) {
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
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 101.5) {
                                                if (x[1] <= 110.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1010.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 111.5) {
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
                            }

                            else {
                                if (x[3] <= 1100.5) {
                                    if (x[0] <= 101.5) {
                                        if (x[1] <= 116.0) {
                                            if (x[2] <= 110.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 110.5) {
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
                                    if (x[0] <= 101.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[4] <= 5.0) {
                                            if (x[2] <= 111.5) {
                                                if (x[1] <= 120.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1101.5) {
                                                        if (x[0] <= 106.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 1106.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 116.0) {
                                                    if (x[1] <= 120.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1110.5) {
                                                            if (x[3] <= 1105.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[0] <= 106.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    if (x[1] <= 121.5) {
                                                                        votes[1] += 1;
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
                                                }

                                                else {
                                                    if (x[2] <= 120.5) {
                                                        if (x[1] <= 121.5) {
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
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= 600.5) {
                                if (x[3] <= 1120.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[1] <= 161.0) {
                                        if (x[3] <= 1121.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 201.5) {
                                            if (x[2] <= 121.5) {
                                                if (x[2] <= 120.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 111.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 161.0) {
                                                    if (x[0] <= 116.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 116.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 200.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 2005.5) {
                                                        if (x[3] <= 2000.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 160.5) {
                                                                votes[1] += 1;
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
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #15
                        if (x[1] <= 121.5) {
                            if (x[2] <= 106.0) {
                                if (x[0] <= 61.0) {
                                    if (x[1] <= 106.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1001.5) {
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
                                                            votes[0] += 1;
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
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1010.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 111.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1011.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 111.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1100.5) {
                                            if (x[1] <= 116.0) {
                                                if (x[2] <= 110.5) {
                                                    if (x[0] <= 100.5) {
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
                                                if (x[2] <= 110.5) {
                                                    if (x[3] <= 1061.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 101.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 120.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 111.5) {
                                                    if (x[3] <= 1101.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1106.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 116.0) {
                                                        if (x[0] <= 101.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1110.5) {
                                                                if (x[3] <= 1106.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    if (x[0] <= 106.0) {
                                                                        votes[1] += 1;
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

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= 5.0) {
                                if (x[2] <= 200.5) {
                                    if (x[1] <= 201.5) {
                                        if (x[2] <= 116.0) {
                                            if (x[3] <= 1116.0) {
                                                if (x[3] <= 1111.5) {
                                                    if (x[0] <= 110.5) {
                                                        if (x[3] <= 1110.5) {
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
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1120.5) {
                                                    if (x[0] <= 110.5) {
                                                        votes[1] += 1;
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
                                            if (x[1] <= 161.0) {
                                                if (x[3] <= 1120.5) {
                                                    if (x[3] <= 1116.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 110.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1121.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1116.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1220.5) {
                                                        if (x[1] <= 200.5) {
                                                            if (x[2] <= 120.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 1121.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[0] <= 116.0) {
                                                                    if (x[0] <= 111.5) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 121.5) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
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
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1210.5) {
                                            if (x[0] <= 116.0) {
                                                votes[1] += 1;
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
                                    if (x[0] <= 121.5) {
                                        votes[1] += 1;
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

                        // tree #16
                        if (x[3] <= 1101.5) {
                            if (x[3] <= 1011.5) {
                                if (x[3] <= 611.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 110.5) {
                                        if (x[3] <= 1005.5) {
                                            if (x[3] <= 1000.5) {
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
                                        if (x[1] <= 111.5) {
                                            if (x[2] <= 101.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 106.0) {
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
                                if (x[2] <= 110.5) {
                                    if (x[0] <= 100.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 1061.0) {
                                        if (x[1] <= 116.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 120.5) {
                                                if (x[3] <= 1021.0) {
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
                                        if (x[1] <= 120.5) {
                                            if (x[2] <= 111.5) {
                                                if (x[0] <= 101.5) {
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
                                            if (x[2] <= 111.5) {
                                                if (x[3] <= 1100.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 106.0) {
                                                        votes[1] += 1;
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
                        }

                        else {
                            if (x[0] <= 110.5) {
                                if (x[1] <= 121.5) {
                                    if (x[2] <= 111.5) {
                                        if (x[3] <= 1106.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 116.0) {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1110.5) {
                                                    if (x[0] <= 106.0) {
                                                        if (x[3] <= 1106.0) {
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
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1115.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1120.5) {
                                            if (x[4] <= 5.0) {
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
                                if (x[4] <= 550.0) {
                                    if (x[2] <= 201.5) {
                                        if (x[0] <= 116.0) {
                                            if (x[3] <= 1200.5) {
                                                if (x[2] <= 120.5) {
                                                    if (x[2] <= 116.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 161.0) {
                                                            if (x[3] <= 1121.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 111.5) {
                                                                if (x[1] <= 200.5) {
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
                                            if (x[3] <= 1611.0) {
                                                if (x[2] <= 161.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 201.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 200.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 121.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
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
                        }

                        // tree #17
                        if (x[1] <= 116.0) {
                            if (x[0] <= 100.5) {
                                if (x[3] <= 611.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 61.0) {
                                        if (x[3] <= 1000.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 106.0) {
                                            if (x[2] <= 101.5) {
                                                if (x[1] <= 110.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 111.5) {
                                                    if (x[3] <= 1010.5) {
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
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1021.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 110.5) {
                                if (x[4] <= 5.0) {
                                    if (x[2] <= 110.5) {
                                        if (x[3] <= 1061.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 121.5) {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 106.0) {
                                                    if (x[2] <= 116.0) {
                                                        if (x[3] <= 1106.0) {
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
                                                    if (x[3] <= 1110.5) {
                                                        if (x[3] <= 1106.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 111.5) {
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
                                if (x[4] <= 550.0) {
                                    if (x[1] <= 210.5) {
                                        if (x[2] <= 200.5) {
                                            if (x[3] <= 1216.0) {
                                                if (x[3] <= 1120.5) {
                                                    if (x[1] <= 200.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 161.0) {
                                                        if (x[2] <= 121.5) {
                                                            if (x[0] <= 111.5) {
                                                                if (x[2] <= 120.5) {
                                                                    if (x[3] <= 1121.5) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 161.0) {
                                                                            votes[1] += 1;
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

                                                            else {
                                                                if (x[0] <= 116.0) {
                                                                    if (x[1] <= 200.5) {
                                                                        if (x[2] <= 120.5) {
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
                                                                    votes[2] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 1161.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= 1210.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    if (x[3] <= 1211.5) {
                                                                        if (x[0] <= 116.0) {
                                                                            votes[1] += 1;
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
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 2005.5) {
                                                votes[1] += 1;
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

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #18
                        if (x[3] <= 1106.0) {
                            if (x[1] <= 116.0) {
                                if (x[2] <= 100.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 111.5) {
                                        if (x[3] <= 1001.5) {
                                            if (x[3] <= 611.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 61.0) {
                                                    if (x[1] <= 110.5) {
                                                        if (x[3] <= 1000.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 106.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[2] <= 101.5) {
                                                                    votes[0] += 1;
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
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1006.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 110.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 106.0) {
                                                        if (x[0] <= 61.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1010.5) {
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
                                    }

                                    else {
                                        if (x[0] <= 100.5) {
                                            if (x[3] <= 1010.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1011.5) {
                                                    if (x[2] <= 106.0) {
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
                                            if (x[3] <= 1021.0) {
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
                                if (x[2] <= 110.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 1021.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 120.5) {
                                            if (x[3] <= 1100.5) {
                                                if (x[3] <= 1061.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 101.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 111.5) {
                                                    if (x[0] <= 101.5) {
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
                                            if (x[0] <= 106.0) {
                                                if (x[2] <= 111.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 101.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
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
                            if (x[2] <= 200.5) {
                                if (x[1] <= 121.5) {
                                    if (x[3] <= 1110.5) {
                                        if (x[0] <= 106.0) {
                                            votes[1] += 1;
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
                                            if (x[3] <= 1111.5) {
                                                if (x[0] <= 110.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 200.5) {
                                        if (x[4] <= 55.5) {
                                            if (x[2] <= 120.5) {
                                                if (x[0] <= 110.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 116.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1121.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 111.5) {
                                                                if (x[1] <= 161.0) {
                                                                    votes[1] += 1;
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
                                                if (x[0] <= 116.0) {
                                                    votes[1] += 1;
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
                                        if (x[3] <= 1116.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 121.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[0] <= 116.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 201.5) {
                                                        if (x[0] <= 120.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1220.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
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
                            }

                            else {
                                if (x[3] <= 2005.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #19
                        if (x[1] <= 116.0) {
                            if (x[0] <= 100.5) {
                                if (x[0] <= 61.0) {
                                    if (x[3] <= 221.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1001.5) {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 106.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 100.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 611.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 110.5) {
                                                                if (x[3] <= 1000.5) {
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
                                    if (x[3] <= 1011.5) {
                                        if (x[3] <= 1006.0) {
                                            if (x[3] <= 1001.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 111.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 106.0) {
                                                if (x[1] <= 111.5) {
                                                    if (x[2] <= 101.5) {
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
                                if (x[2] <= 110.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 110.5) {
                                if (x[3] <= 1101.5) {
                                    if (x[0] <= 106.0) {
                                        if (x[0] <= 101.5) {
                                            if (x[2] <= 110.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1061.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 110.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 111.5) {
                                        if (x[3] <= 1106.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 106.0) {
                                            if (x[4] <= 5.0) {
                                                if (x[2] <= 116.0) {
                                                    if (x[3] <= 1106.0) {
                                                        if (x[1] <= 120.5) {
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

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1120.5) {
                                                if (x[1] <= 121.5) {
                                                    if (x[3] <= 1110.5) {
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
                                                if (x[1] <= 161.0) {
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
                                if (x[4] <= 550.0) {
                                    if (x[2] <= 200.5) {
                                        if (x[2] <= 116.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[1] <= 161.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 120.5) {
                                                    if (x[3] <= 1116.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 200.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 116.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 121.5) {
                                                                if (x[3] <= 1220.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    if (x[2] <= 161.0) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[3] <= 1221.5) {
                                                                            if (x[1] <= 205.5) {
                                                                                votes[1] += 1;
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
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 201.5) {
                                            if (x[3] <= 1606.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 121.5) {
                                                    votes[1] += 1;
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

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #20
                        if (x[1] <= 121.5) {
                            if (x[3] <= 1010.5) {
                                if (x[2] <= 100.5) {
                                    if (x[0] <= 21.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 106.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 101.5) {
                                        if (x[0] <= 61.0) {
                                            if (x[3] <= 1000.5) {
                                                if (x[3] <= 611.0) {
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

                                    else {
                                        if (x[2] <= 106.0) {
                                            if (x[0] <= 61.0) {
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
                                }
                            }

                            else {
                                if (x[0] <= 106.0) {
                                    if (x[1] <= 111.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 100.5) {
                                            if (x[3] <= 1011.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1100.5) {
                                                if (x[3] <= 1061.0) {
                                                    if (x[2] <= 110.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 101.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 101.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 110.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1110.5) {
                                                    if (x[0] <= 101.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 120.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1106.0) {
                                                                votes[1] += 1;
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
                                    }
                                }

                                else {
                                    if (x[0] <= 110.5) {
                                        if (x[3] <= 1110.5) {
                                            if (x[3] <= 1106.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 111.5) {
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

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 110.5) {
                                if (x[2] <= 116.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 1120.5) {
                                        if (x[4] <= 5.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 105.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 550.0) {
                                    if (x[0] <= 116.0) {
                                        if (x[0] <= 111.5) {
                                            if (x[3] <= 1121.5) {
                                                if (x[1] <= 200.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1162.0) {
                                                    if (x[1] <= 161.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1205.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 210.5) {
                                            if (x[3] <= 1220.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[1] <= 201.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 2000.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 200.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 2005.5) {
                                                                if (x[0] <= 160.5) {
                                                                    votes[1] += 1;
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
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #21
                        if (x[2] <= 111.5) {
                            if (x[1] <= 116.0) {
                                if (x[1] <= 111.5) {
                                    if (x[1] <= 106.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 100.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1006.0) {
                                                if (x[0] <= 61.0) {
                                                    if (x[2] <= 101.5) {
                                                        if (x[0] <= 21.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 611.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= 1000.5) {
                                                                    votes[0] += 1;
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
                                    if (x[3] <= 1010.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1020.5) {
                                            if (x[3] <= 1016.0) {
                                                if (x[0] <= 100.5) {
                                                    if (x[2] <= 106.0) {
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
                                                if (x[2] <= 106.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 100.5) {
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
                            }

                            else {
                                if (x[3] <= 1101.5) {
                                    if (x[0] <= 101.5) {
                                        if (x[3] <= 1061.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 120.5) {
                                            if (x[3] <= 1061.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1100.5) {
                                                    if (x[2] <= 110.5) {
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

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1106.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1110.5) {
                                if (x[0] <= 101.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 1106.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 106.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 121.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 116.0) {
                                                    votes[2] += 1;
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
                                if (x[4] <= 5.0) {
                                    if (x[0] <= 110.5) {
                                        if (x[3] <= 1111.5) {
                                            if (x[0] <= 106.0) {
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
                                        if (x[3] <= 1120.5) {
                                            if (x[1] <= 200.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 210.5) {
                                                if (x[3] <= 1221.5) {
                                                    if (x[0] <= 111.5) {
                                                        if (x[3] <= 1161.0) {
                                                            if (x[3] <= 1121.5) {
                                                                if (x[1] <= 161.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 120.5) {
                                                                    if (x[1] <= 161.0) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
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

                                                    else {
                                                        if (x[3] <= 1206.0) {
                                                            if (x[2] <= 120.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= 1161.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    if (x[0] <= 116.0) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 116.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[2] <= 161.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    if (x[1] <= 205.5) {
                                                                        votes[1] += 1;
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
                                                    if (x[3] <= 2000.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 206.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 121.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
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
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #22
                        if (x[0] <= 110.5) {
                            if (x[2] <= 106.0) {
                                if (x[3] <= 1010.5) {
                                    if (x[3] <= 611.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 61.0) {
                                            if (x[1] <= 110.5) {
                                                if (x[3] <= 1000.5) {
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

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 101.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 100.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[4] <= 5.0) {
                                        if (x[0] <= 101.5) {
                                            if (x[2] <= 110.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 106.0) {
                                                if (x[1] <= 120.5) {
                                                    if (x[3] <= 1101.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1110.5) {
                                                        if (x[3] <= 1106.0) {
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
                                                if (x[2] <= 111.5) {
                                                    if (x[3] <= 1106.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 116.0) {
                                                        if (x[3] <= 1110.5) {
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
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 200.5) {
                                if (x[4] <= 551.0) {
                                    if (x[3] <= 1221.5) {
                                        if (x[2] <= 120.5) {
                                            if (x[0] <= 111.5) {
                                                if (x[2] <= 116.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 200.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 161.0) {
                                                if (x[1] <= 200.5) {
                                                    if (x[0] <= 115.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 116.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 116.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 201.5) {
                                                        votes[1] += 1;
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
                                if (x[0] <= 121.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #23
                        if (x[1] <= 116.0) {
                            if (x[1] <= 111.5) {
                                if (x[2] <= 100.5) {
                                    if (x[1] <= 106.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 101.5) {
                                        if (x[0] <= 61.0) {
                                            if (x[3] <= 611.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1000.5) {
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
                                        }

                                        else {
                                            if (x[1] <= 110.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1006.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 61.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1010.5) {
                                                    if (x[2] <= 106.0) {
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
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1010.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 106.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 100.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 110.5) {
                                                votes[1] += 1;
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
                            if (x[0] <= 110.5) {
                                if (x[3] <= 1101.5) {
                                    if (x[2] <= 111.5) {
                                        if (x[2] <= 110.5) {
                                            if (x[3] <= 1061.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 120.5) {
                                                if (x[3] <= 1021.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1100.5) {
                                                        if (x[3] <= 1061.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 101.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 101.5) {
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
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 111.5) {
                                        if (x[3] <= 1106.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1120.5) {
                                            if (x[3] <= 1110.5) {
                                                if (x[2] <= 116.0) {
                                                    if (x[3] <= 1106.0) {
                                                        if (x[1] <= 120.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 101.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 106.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 121.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 106.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 5.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 105.0) {
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
                                if (x[0] <= 111.5) {
                                    if (x[2] <= 120.5) {
                                        if (x[2] <= 116.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1121.5) {
                                                if (x[1] <= 200.5) {
                                                    votes[2] += 1;
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
                                        if (x[1] <= 161.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[4] <= 550.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 1011.0) {
                                        if (x[2] <= 200.5) {
                                            if (x[1] <= 201.5) {
                                                if (x[2] <= 121.5) {
                                                    if (x[2] <= 120.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 200.5) {
                                                            if (x[0] <= 116.0) {
                                                                votes[1] += 1;
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
                                                    if (x[2] <= 161.0) {
                                                        if (x[3] <= 1210.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 116.0) {
                                                                votes[1] += 1;
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

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 121.5) {
                                                votes[1] += 1;
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

                        // tree #24
                        if (x[3] <= 1101.5) {
                            if (x[0] <= 100.5) {
                                if (x[2] <= 100.5) {
                                    if (x[0] <= 21.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 106.0) {
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
                                        if (x[0] <= 61.0) {
                                            if (x[1] <= 110.5) {
                                                if (x[3] <= 1000.5) {
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

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 106.0) {
                                                if (x[3] <= 1006.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 110.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 111.5) {
                                                            if (x[3] <= 1010.5) {
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
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1061.0) {
                                    if (x[1] <= 116.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 101.5) {
                                            if (x[2] <= 110.5) {
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
                                    if (x[0] <= 101.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 120.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1100.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 111.5) {
                                                    if (x[0] <= 106.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
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
                            if (x[0] <= 110.5) {
                                if (x[2] <= 111.5) {
                                    if (x[3] <= 1106.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 120.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[4] <= 5.0) {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 121.5) {
                                                    if (x[0] <= 106.0) {
                                                        if (x[3] <= 1110.5) {
                                                            if (x[3] <= 1106.0) {
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
                                                        if (x[3] <= 1110.5) {
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
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 611.0) {
                                    if (x[3] <= 1200.5) {
                                        if (x[3] <= 1120.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= 121.5) {
                                                if (x[0] <= 111.5) {
                                                    if (x[2] <= 116.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1121.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 116.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 201.5) {
                                                if (x[2] <= 200.5) {
                                                    if (x[3] <= 1220.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1221.5) {
                                                            if (x[0] <= 121.5) {
                                                                if (x[1] <= 201.5) {
                                                                    votes[1] += 1;
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

                                                else {
                                                    if (x[1] <= 206.0) {
                                                        votes[1] += 1;
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

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #25
                        if (x[2] <= 111.5) {
                            if (x[1] <= 116.0) {
                                if (x[1] <= 111.5) {
                                    if (x[3] <= 611.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1001.5) {
                                            if (x[0] <= 61.0) {
                                                if (x[2] <= 101.5) {
                                                    if (x[3] <= 1000.5) {
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

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1010.5) {
                                                if (x[0] <= 61.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1006.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 106.0) {
                                                            votes[1] += 1;
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
                                }

                                else {
                                    if (x[0] <= 100.5) {
                                        if (x[3] <= 1011.5) {
                                            if (x[2] <= 106.0) {
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
                                        if (x[2] <= 110.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 110.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 1101.5) {
                                        if (x[0] <= 101.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1106.0) {
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
                            if (x[4] <= 5.0) {
                                if (x[0] <= 110.5) {
                                    if (x[3] <= 1111.5) {
                                        if (x[1] <= 120.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1110.5) {
                                                if (x[1] <= 160.5) {
                                                    if (x[3] <= 1106.0) {
                                                        if (x[0] <= 101.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 106.0) {
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

                                            else {
                                                if (x[0] <= 106.0) {
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
                                    if (x[1] <= 211.0) {
                                        if (x[3] <= 1121.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1161.0) {
                                                if (x[1] <= 161.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 111.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 116.0) {
                                                    if (x[1] <= 200.5) {
                                                        if (x[2] <= 120.5) {
                                                            votes[2] += 1;
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
                                                    if (x[1] <= 206.0) {
                                                        if (x[3] <= 1611.0) {
                                                            if (x[3] <= 1220.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 201.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 2000.5) {
                                                                if (x[0] <= 120.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 121.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 121.5) {
                                                            if (x[2] <= 201.0) {
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
                                            }
                                        }
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

                        // tree #26
                        if (x[1] <= 116.0) {
                            if (x[0] <= 100.5) {
                                if (x[3] <= 1000.5) {
                                    if (x[0] <= 21.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 106.0) {
                                            votes[0] += 1;
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
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 110.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 61.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 106.0) {
                                                if (x[2] <= 101.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1010.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 111.5) {
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
                                }
                            }

                            else {
                                if (x[2] <= 110.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 110.5) {
                                if (x[0] <= 106.0) {
                                    if (x[3] <= 1101.5) {
                                        if (x[0] <= 101.5) {
                                            if (x[2] <= 110.5) {
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
                                        if (x[2] <= 116.0) {
                                            if (x[1] <= 120.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 101.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1106.0) {
                                                        votes[1] += 1;
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
                                    if (x[3] <= 1110.5) {
                                        if (x[2] <= 116.0) {
                                            if (x[3] <= 1106.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[1] <= 121.5) {
                                                    if (x[2] <= 111.5) {
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
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 116.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[4] <= 5.0) {
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
                                if (x[0] <= 116.0) {
                                    if (x[4] <= 551.0) {
                                        if (x[2] <= 120.5) {
                                            if (x[3] <= 1121.5) {
                                                if (x[1] <= 200.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1116.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1161.0) {
                                                    if (x[0] <= 111.5) {
                                                        if (x[1] <= 161.0) {
                                                            votes[1] += 1;
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

                                        else {
                                            if (x[3] <= 1161.0) {
                                                if (x[2] <= 121.5) {
                                                    votes[2] += 1;
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
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 1221.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 120.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 2000.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 2005.5) {
                                                    if (x[2] <= 200.5) {
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
                                    }
                                }
                            }
                        }

                        // tree #27
                        if (x[3] <= 1010.5) {
                            if (x[1] <= 106.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 110.5) {
                                    if (x[2] <= 100.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1000.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1005.5) {
                                                    votes[0] += 1;
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

                        else {
                            if (x[0] <= 110.5) {
                                if (x[3] <= 1101.5) {
                                    if (x[0] <= 100.5) {
                                        if (x[2] <= 106.0) {
                                            if (x[1] <= 111.5) {
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
                                        if (x[2] <= 110.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 120.5) {
                                                if (x[0] <= 101.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 111.5) {
                                                    if (x[3] <= 1100.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 106.0) {
                                                            votes[1] += 1;
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
                                    if (x[2] <= 111.5) {
                                        if (x[3] <= 1106.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 5.0) {
                                            if (x[1] <= 121.5) {
                                                if (x[2] <= 116.0) {
                                                    if (x[0] <= 101.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 106.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1110.5) {
                                                                votes[1] += 1;
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

                                            else {
                                                if (x[1] <= 161.0) {
                                                    if (x[2] <= 116.0) {
                                                        if (x[3] <= 1110.5) {
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
                                if (x[2] <= 201.5) {
                                    if (x[0] <= 116.0) {
                                        if (x[2] <= 120.5) {
                                            if (x[0] <= 111.5) {
                                                if (x[3] <= 1121.5) {
                                                    if (x[3] <= 1111.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 116.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1116.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 161.0) {
                                                        votes[1] += 1;
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
                                            if (x[1] <= 161.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[4] <= 611.0) {
                                                    if (x[1] <= 200.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 121.5) {
                                                            votes[2] += 1;
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
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #28
                        if (x[1] <= 116.0) {
                            if (x[1] <= 111.5) {
                                if (x[0] <= 61.0) {
                                    if (x[1] <= 106.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1000.5) {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
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
                                    if (x[2] <= 101.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1010.5) {
                                            if (x[2] <= 106.0) {
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
                                }
                            }

                            else {
                                if (x[0] <= 100.5) {
                                    if (x[3] <= 1011.5) {
                                        if (x[3] <= 1010.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 106.0) {
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
                                    if (x[2] <= 110.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 121.5) {
                                if (x[1] <= 120.5) {
                                    if (x[3] <= 1100.5) {
                                        if (x[2] <= 110.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 111.5) {
                                            if (x[0] <= 101.5) {
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
                                    if (x[0] <= 106.0) {
                                        if (x[0] <= 101.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 116.0) {
                                                if (x[2] <= 111.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1106.0) {
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

                                    else {
                                        if (x[2] <= 111.5) {
                                            if (x[3] <= 1106.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1110.5) {
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
                                if (x[4] <= 5.0) {
                                    if (x[2] <= 116.0) {
                                        if (x[3] <= 1110.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 110.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1121.5) {
                                            if (x[1] <= 161.0) {
                                                if (x[3] <= 1116.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 110.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 200.5) {
                                                    if (x[3] <= 1115.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 110.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 121.0) {
                                                        if (x[0] <= 111.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 111.5) {
                                                if (x[2] <= 120.5) {
                                                    if (x[1] <= 161.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 116.0) {
                                                    if (x[3] <= 1200.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 121.5) {
                                                        if (x[3] <= 1220.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 120.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[2] <= 201.0) {
                                                                    if (x[1] <= 201.5) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
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
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #29
                        if (x[1] <= 116.0) {
                            if (x[0] <= 100.5) {
                                if (x[3] <= 221.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 1011.5) {
                                        if (x[2] <= 101.5) {
                                            if (x[2] <= 100.5) {
                                                if (x[0] <= 21.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 106.0) {
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
                                                    if (x[3] <= 1001.5) {
                                                        if (x[1] <= 110.5) {
                                                            if (x[3] <= 1000.5) {
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
                                        }

                                        else {
                                            if (x[3] <= 1010.5) {
                                                if (x[2] <= 106.0) {
                                                    if (x[0] <= 61.0) {
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
                                                if (x[1] <= 111.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 106.0) {
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
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 110.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 110.5) {
                                if (x[4] <= 5.0) {
                                    if (x[0] <= 106.0) {
                                        if (x[0] <= 101.5) {
                                            if (x[2] <= 110.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 111.5) {
                                                if (x[1] <= 120.5) {
                                                    if (x[3] <= 1061.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 110.5) {
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

                                            else {
                                                if (x[1] <= 120.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 116.0) {
                                                        if (x[3] <= 1106.0) {
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
                                    }

                                    else {
                                        if (x[3] <= 1110.5) {
                                            if (x[1] <= 121.5) {
                                                if (x[3] <= 1106.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 111.5) {
                                                        votes[2] += 1;
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
                                if (x[1] <= 211.0) {
                                    if (x[0] <= 116.0) {
                                        if (x[1] <= 200.5) {
                                            if (x[3] <= 1200.5) {
                                                if (x[4] <= 550.0) {
                                                    if (x[2] <= 120.5) {
                                                        if (x[2] <= 116.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 161.0) {
                                                                if (x[3] <= 1121.5) {
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
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[4] <= 1001.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 111.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 121.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 121.5) {
                                            if (x[2] <= 200.5) {
                                                if (x[3] <= 1220.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1221.5) {
                                                        if (x[1] <= 201.5) {
                                                            votes[1] += 1;
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
                                                votes[1] += 1;
                                            }
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

                        // tree #30
                        if (x[1] <= 116.0) {
                            if (x[1] <= 111.5) {
                                if (x[1] <= 106.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 110.5) {
                                        if (x[0] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 100.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 61.0) {
                                                    if (x[2] <= 101.5) {
                                                        if (x[3] <= 611.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1000.5) {
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

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 101.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1011.5) {
                                    if (x[0] <= 100.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 1020.5) {
                                        if (x[2] <= 106.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 110.5) {
                                                if (x[3] <= 1016.0) {
                                                    if (x[0] <= 100.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 100.5) {
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
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 121.5) {
                                if (x[3] <= 1101.5) {
                                    if (x[0] <= 106.0) {
                                        if (x[0] <= 101.5) {
                                            if (x[2] <= 110.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 120.5) {
                                                if (x[3] <= 1061.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 110.5) {
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
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 106.0) {
                                        if (x[1] <= 120.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 110.5) {
                                            if (x[2] <= 111.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1110.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
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
                                if (x[0] <= 110.5) {
                                    if (x[4] <= 5.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 550.0) {
                                        if (x[3] <= 1121.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= 200.5) {
                                                if (x[2] <= 121.5) {
                                                    if (x[0] <= 111.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 200.5) {
                                                            if (x[2] <= 120.5) {
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
                                                    if (x[1] <= 201.5) {
                                                        if (x[0] <= 116.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 161.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 206.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 121.5) {
                                                        votes[1] += 1;
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
                        }

                        // tree #31
                        if (x[1] <= 116.0) {
                            if (x[3] <= 1010.5) {
                                if (x[0] <= 61.0) {
                                    if (x[3] <= 611.0) {
                                        if (x[0] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 106.0) {
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
                                        if (x[2] <= 101.5) {
                                            if (x[3] <= 1000.5) {
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
                                }

                                else {
                                    if (x[1] <= 110.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1006.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 106.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
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
                                    if (x[0] <= 100.5) {
                                        if (x[2] <= 106.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1021.0) {
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
                            if (x[1] <= 121.5) {
                                if (x[0] <= 106.0) {
                                    if (x[3] <= 1100.5) {
                                        if (x[0] <= 101.5) {
                                            if (x[3] <= 1060.5) {
                                                if (x[2] <= 110.5) {
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
                                            if (x[1] <= 120.5) {
                                                if (x[2] <= 110.5) {
                                                    if (x[3] <= 1061.0) {
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
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 120.5) {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1101.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1106.0) {
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
                                    if (x[3] <= 1106.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 110.5) {
                                            if (x[3] <= 1110.5) {
                                                if (x[2] <= 111.5) {
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
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 110.5) {
                                    if (x[4] <= 5.0) {
                                        if (x[2] <= 116.0) {
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
                                    if (x[4] <= 550.0) {
                                        if (x[2] <= 201.5) {
                                            if (x[0] <= 116.0) {
                                                if (x[2] <= 120.5) {
                                                    if (x[2] <= 116.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1116.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 111.5) {
                                                                if (x[1] <= 161.0) {
                                                                    if (x[3] <= 1121.5) {
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
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1161.0) {
                                                        if (x[1] <= 200.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 121.5) {
                                                    if (x[1] <= 201.5) {
                                                        if (x[3] <= 1220.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 200.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
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

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #32
                        if (x[1] <= 121.5) {
                            if (x[3] <= 1010.5) {
                                if (x[3] <= 611.0) {
                                    if (x[1] <= 106.0) {
                                        votes[0] += 1;
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
                                    if (x[1] <= 110.5) {
                                        if (x[3] <= 1000.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 111.5) {
                                            if (x[0] <= 61.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 101.5) {
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
                                if (x[0] <= 100.5) {
                                    if (x[2] <= 106.0) {
                                        if (x[1] <= 111.5) {
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
                                    if (x[2] <= 111.5) {
                                        if (x[3] <= 1101.5) {
                                            if (x[2] <= 110.5) {
                                                if (x[3] <= 1061.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
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
                                                        if (x[3] <= 1100.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 120.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[0] <= 106.0) {
                                                                    votes[1] += 1;
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
                                            if (x[3] <= 1106.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 106.0) {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 120.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1106.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 116.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 110.5) {
                                                if (x[3] <= 1110.5) {
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
                                }
                            }
                        }

                        else {
                            if (x[2] <= 200.5) {
                                if (x[4] <= 5.0) {
                                    if (x[3] <= 1216.0) {
                                        if (x[3] <= 1201.5) {
                                            if (x[0] <= 110.5) {
                                                if (x[1] <= 161.0) {
                                                    if (x[3] <= 1110.5) {
                                                        votes[2] += 1;
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
                                                if (x[1] <= 161.0) {
                                                    if (x[2] <= 116.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1121.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 200.5) {
                                                if (x[0] <= 116.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1210.5) {
                                                    if (x[0] <= 116.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 116.0) {
                                                        votes[1] += 1;
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
                                if (x[1] <= 206.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[2] <= 201.5) {
                                        if (x[0] <= 117.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #33
                        if (x[2] <= 111.5) {
                            if (x[0] <= 100.5) {
                                if (x[1] <= 106.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 61.0) {
                                        if (x[1] <= 110.5) {
                                            if (x[3] <= 611.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1000.5) {
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
                                        if (x[1] <= 111.5) {
                                            if (x[2] <= 101.5) {
                                                if (x[1] <= 110.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1010.5) {
                                                    if (x[2] <= 106.0) {
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
                                        }

                                        else {
                                            if (x[2] <= 106.0) {
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
                                if (x[2] <= 110.5) {
                                    if (x[3] <= 1061.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 120.5) {
                                        if (x[0] <= 101.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1101.5) {
                                            if (x[3] <= 1100.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 106.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1106.0) {
                                                votes[2] += 1;
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
                            if (x[1] <= 121.5) {
                                if (x[2] <= 116.0) {
                                    if (x[3] <= 1110.5) {
                                        if (x[1] <= 120.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1106.0) {
                                                if (x[3] <= 1101.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 101.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 106.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
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
                                if (x[4] <= 5.0) {
                                    if (x[3] <= 1110.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 210.5) {
                                            if (x[2] <= 116.0) {
                                                if (x[0] <= 110.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 161.0) {
                                                    if (x[3] <= 1120.5) {
                                                        if (x[3] <= 1116.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 110.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 1121.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 161.0) {
                                                        if (x[0] <= 111.5) {
                                                            if (x[0] <= 110.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= 1161.0) {
                                                                    if (x[3] <= 1116.0) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 120.5) {
                                                                            votes[2] += 1;
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
                                                            if (x[0] <= 116.0) {
                                                                if (x[2] <= 121.5) {
                                                                    if (x[3] <= 1200.5) {
                                                                        votes[2] += 1;
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
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 1216.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 120.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= 2000.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    if (x[1] <= 206.0) {
                                                                        if (x[2] <= 200.5) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[3] <= 2005.5) {
                                                                            if (x[0] <= 121.5) {
                                                                                votes[1] += 1;
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
                                            }
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

                        // tree #34
                        if (x[0] <= 110.5) {
                            if (x[1] <= 111.5) {
                                if (x[0] <= 61.0) {
                                    if (x[3] <= 611.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 101.5) {
                                            if (x[3] <= 1000.5) {
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
                                }

                                else {
                                    if (x[2] <= 101.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 106.0) {
                                            if (x[3] <= 1010.5) {
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
                            }

                            else {
                                if (x[0] <= 100.5) {
                                    if (x[0] <= 61.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1015.5) {
                                            if (x[2] <= 106.0) {
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
                                    if (x[2] <= 111.5) {
                                        if (x[3] <= 1101.5) {
                                            if (x[0] <= 106.0) {
                                                if (x[0] <= 101.5) {
                                                    if (x[1] <= 116.0) {
                                                        if (x[2] <= 110.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 1061.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 110.5) {
                                                        if (x[3] <= 1061.0) {
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

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1106.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1106.0) {
                                            if (x[1] <= 120.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1101.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 101.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 116.0) {
                                                if (x[0] <= 106.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1110.5) {
                                                        if (x[1] <= 121.5) {
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

                                            else {
                                                if (x[1] <= 121.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 106.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= 5.0) {
                                                            votes[1] += 1;
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
                            }
                        }

                        else {
                            if (x[4] <= 550.0) {
                                if (x[0] <= 116.0) {
                                    if (x[3] <= 1200.5) {
                                        if (x[2] <= 120.5) {
                                            if (x[1] <= 161.0) {
                                                if (x[3] <= 1121.5) {
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
                                            if (x[0] <= 111.5) {
                                                votes[1] += 1;
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

                                else {
                                    if (x[3] <= 2000.5) {
                                        if (x[2] <= 201.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 2001.5) {
                                            if (x[2] <= 201.0) {
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
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #35
                        if (x[3] <= 1016.0) {
                            if (x[0] <= 100.5) {
                                if (x[3] <= 611.0) {
                                    if (x[3] <= 221.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 106.0) {
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
                                    if (x[2] <= 106.0) {
                                        if (x[0] <= 61.0) {
                                            if (x[2] <= 101.5) {
                                                if (x[3] <= 1000.5) {
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

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1006.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1010.5) {
                                                    if (x[1] <= 110.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 111.5) {
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
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 110.5) {
                                if (x[3] <= 1101.5) {
                                    if (x[0] <= 100.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 106.0) {
                                            if (x[2] <= 110.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 111.5) {
                                                    if (x[3] <= 1021.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1061.0) {
                                                            if (x[0] <= 101.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 101.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 101.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
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
                                    if (x[2] <= 111.5) {
                                        if (x[3] <= 1106.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 106.0) {
                                            if (x[1] <= 120.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1110.5) {
                                                    if (x[0] <= 101.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1106.0) {
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
                                            if (x[3] <= 1120.5) {
                                                if (x[1] <= 121.5) {
                                                    if (x[3] <= 1110.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1116.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= 55.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[4] <= 105.0) {
                                                    votes[1] += 1;
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
                                if (x[4] <= 551.0) {
                                    if (x[2] <= 200.5) {
                                        if (x[1] <= 201.5) {
                                            if (x[0] <= 111.5) {
                                                if (x[2] <= 120.5) {
                                                    if (x[1] <= 200.5) {
                                                        if (x[3] <= 1121.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 161.0) {
                                                                votes[1] += 1;
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

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 120.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1201.5) {
                                                        if (x[1] <= 200.5) {
                                                            votes[1] += 1;
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
                                            if (x[2] <= 161.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1216.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 2005.5) {
                                            votes[1] += 1;
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

                        // tree #36
                        if (x[1] <= 116.0) {
                            if (x[0] <= 61.0) {
                                if (x[1] <= 106.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 101.5) {
                                        if (x[2] <= 100.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 611.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1000.5) {
                                                    votes[0] += 1;
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

                            else {
                                if (x[0] <= 100.5) {
                                    if (x[2] <= 106.0) {
                                        if (x[1] <= 110.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1006.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 111.5) {
                                                    if (x[3] <= 1010.5) {
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
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 110.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1101.5) {
                                if (x[0] <= 101.5) {
                                    if (x[3] <= 1061.0) {
                                        if (x[3] <= 1020.5) {
                                            if (x[2] <= 110.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1021.5) {
                                                if (x[2] <= 110.5) {
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
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 110.5) {
                                        if (x[3] <= 1061.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 120.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 106.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 200.5) {
                                    if (x[0] <= 110.5) {
                                        if (x[2] <= 111.5) {
                                            if (x[3] <= 1106.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[4] <= 55.5) {
                                                if (x[0] <= 106.0) {
                                                    if (x[2] <= 116.0) {
                                                        if (x[0] <= 101.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1106.0) {
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
                                                    if (x[2] <= 116.0) {
                                                        if (x[3] <= 1110.5) {
                                                            if (x[1] <= 121.5) {
                                                                votes[2] += 1;
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
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 551.0) {
                                            if (x[1] <= 201.5) {
                                                if (x[2] <= 120.5) {
                                                    if (x[3] <= 1121.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 111.5) {
                                                            if (x[1] <= 161.0) {
                                                                votes[1] += 1;
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
                                                    if (x[3] <= 1121.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 116.0) {
                                                            if (x[2] <= 121.5) {
                                                                if (x[1] <= 200.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 1220.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1210.5) {
                                                    if (x[0] <= 116.0) {
                                                        votes[1] += 1;
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
                                    if (x[0] <= 121.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #37
                        if (x[0] <= 110.5) {
                            if (x[1] <= 116.0) {
                                if (x[0] <= 100.5) {
                                    if (x[0] <= 21.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1011.5) {
                                            if (x[0] <= 61.0) {
                                                if (x[3] <= 1001.5) {
                                                    if (x[2] <= 100.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 110.5) {
                                                            if (x[1] <= 106.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= 611.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    if (x[3] <= 1000.5) {
                                                                        votes[0] += 1;
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

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1010.5) {
                                                    if (x[2] <= 106.0) {
                                                        if (x[1] <= 110.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1006.0) {
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
                                                    if (x[2] <= 106.0) {
                                                        votes[1] += 1;
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

                                else {
                                    if (x[2] <= 110.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1100.5) {
                                    if (x[3] <= 1061.0) {
                                        if (x[0] <= 101.5) {
                                            if (x[2] <= 110.5) {
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
                                        if (x[0] <= 101.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 110.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 120.5) {
                                        if (x[3] <= 1101.5) {
                                            if (x[0] <= 101.5) {
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
                                        if (x[0] <= 106.0) {
                                            if (x[3] <= 1110.5) {
                                                if (x[2] <= 111.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1106.0) {
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

                                        else {
                                            if (x[3] <= 1106.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1110.5) {
                                                    if (x[1] <= 161.0) {
                                                        if (x[2] <= 111.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 121.5) {
                                                                votes[1] += 1;
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

                                                else {
                                                    if (x[2] <= 116.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1115.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 161.0) {
                                                                if (x[3] <= 1120.5) {
                                                                    if (x[4] <= 5.0) {
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
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 210.5) {
                                if (x[2] <= 120.5) {
                                    if (x[3] <= 1121.5) {
                                        if (x[1] <= 200.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 111.5) {
                                            if (x[1] <= 161.0) {
                                                votes[1] += 1;
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
                                    if (x[1] <= 200.5) {
                                        if (x[1] <= 161.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1201.5) {
                                                if (x[4] <= 611.0) {
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
                                        if (x[0] <= 116.0) {
                                            if (x[2] <= 121.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 161.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[1] <= 201.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 200.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 2005.0) {
                                                            votes[1] += 1;
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
                                votes[1] += 1;
                            }
                        }

                        // tree #38
                        if (x[3] <= 1011.5) {
                            if (x[3] <= 1010.5) {
                                if (x[0] <= 61.0) {
                                    if (x[1] <= 106.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 110.5) {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 100.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 101.5) {
                                                        if (x[3] <= 611.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1000.5) {
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
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 111.5) {
                                        if (x[3] <= 1006.0) {
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
                                if (x[0] <= 100.5) {
                                    if (x[1] <= 111.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 106.0) {
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
                        }

                        else {
                            if (x[0] <= 110.5) {
                                if (x[3] <= 1101.5) {
                                    if (x[0] <= 100.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 120.5) {
                                            if (x[0] <= 101.5) {
                                                if (x[2] <= 110.5) {
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
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1106.0) {
                                        if (x[0] <= 106.0) {
                                            if (x[1] <= 120.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 101.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1110.5) {
                                            if (x[2] <= 116.0) {
                                                if (x[0] <= 106.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 121.5) {
                                                        if (x[2] <= 111.5) {
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

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 161.0) {
                                                if (x[4] <= 55.5) {
                                                    if (x[0] <= 106.0) {
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
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 116.0) {
                                    if (x[2] <= 120.5) {
                                        if (x[0] <= 111.5) {
                                            if (x[2] <= 116.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[1] <= 200.5) {
                                                    if (x[1] <= 161.0) {
                                                        if (x[3] <= 1121.5) {
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
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1201.5) {
                                            if (x[4] <= 550.0) {
                                                if (x[1] <= 200.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1121.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 121.5) {
                                                            votes[2] += 1;
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

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 200.5) {
                                        if (x[3] <= 1220.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= 121.5) {
                                                if (x[3] <= 1221.5) {
                                                    if (x[1] <= 201.5) {
                                                        votes[1] += 1;
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

                                    else {
                                        if (x[3] <= 2005.5) {
                                            if (x[3] <= 2000.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 160.5) {
                                                    votes[1] += 1;
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

                        // tree #39
                        if (x[0] <= 110.5) {
                            if (x[3] <= 1010.5) {
                                if (x[2] <= 100.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 101.5) {
                                        if (x[3] <= 1000.5) {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 611.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 110.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 61.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 106.0) {
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
                                if (x[2] <= 110.5) {
                                    if (x[3] <= 1016.0) {
                                        if (x[2] <= 106.0) {
                                            if (x[3] <= 1011.5) {
                                                if (x[1] <= 111.5) {
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
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 116.0) {
                                            if (x[3] <= 1020.5) {
                                                if (x[0] <= 100.5) {
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
                                            if (x[0] <= 101.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1061.0) {
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
                                    if (x[0] <= 101.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[4] <= 5.0) {
                                            if (x[2] <= 111.5) {
                                                if (x[0] <= 106.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1106.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 1106.0) {
                                                    if (x[3] <= 1101.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 120.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 121.5) {
                                                        if (x[2] <= 116.0) {
                                                            if (x[0] <= 106.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= 1110.5) {
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

                                                    else {
                                                        if (x[3] <= 1110.5) {
                                                            if (x[2] <= 116.0) {
                                                                votes[2] += 1;
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
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= 1001.0) {
                                if (x[1] <= 211.0) {
                                    if (x[0] <= 116.0) {
                                        if (x[0] <= 111.5) {
                                            if (x[3] <= 1121.5) {
                                                if (x[1] <= 200.5) {
                                                    votes[2] += 1;
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
                                            if (x[3] <= 1200.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 201.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= 200.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[0] <= 121.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
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

                        // tree #40
                        if (x[0] <= 100.5) {
                            if (x[3] <= 611.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 101.5) {
                                    if (x[3] <= 1006.0) {
                                        if (x[3] <= 1001.5) {
                                            if (x[3] <= 1000.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 106.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 110.5) {
                                                        votes[1] += 1;
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
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 61.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 106.0) {
                                            if (x[1] <= 111.5) {
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
                        }

                        else {
                            if (x[3] <= 1101.5) {
                                if (x[3] <= 1061.0) {
                                    if (x[2] <= 110.5) {
                                        votes[1] += 1;
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
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 111.5) {
                                        if (x[0] <= 101.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 120.5) {
                                                if (x[3] <= 1100.5) {
                                                    if (x[2] <= 110.5) {
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
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 120.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 5.0) {
                                    if (x[0] <= 110.5) {
                                        if (x[0] <= 106.0) {
                                            if (x[3] <= 1110.5) {
                                                if (x[3] <= 1106.0) {
                                                    if (x[1] <= 120.5) {
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

                                        else {
                                            if (x[3] <= 1110.5) {
                                                if (x[1] <= 161.0) {
                                                    if (x[2] <= 111.5) {
                                                        if (x[3] <= 1106.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 121.5) {
                                                            votes[1] += 1;
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

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 200.5) {
                                            if (x[0] <= 111.5) {
                                                if (x[3] <= 1121.5) {
                                                    if (x[2] <= 116.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 200.5) {
                                                            votes[2] += 1;
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

                                            else {
                                                if (x[2] <= 121.5) {
                                                    if (x[3] <= 1206.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 116.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 201.5) {
                                                        if (x[0] <= 116.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1220.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
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
                                            if (x[2] <= 205.5) {
                                                if (x[1] <= 206.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 117.0) {
                                                        votes[1] += 1;
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

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #41
                        if (x[2] <= 110.5) {
                            if (x[1] <= 116.0) {
                                if (x[3] <= 1010.5) {
                                    if (x[1] <= 106.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 101.5) {
                                            if (x[2] <= 100.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 110.5) {
                                                    if (x[3] <= 611.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1000.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 61.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 111.5) {
                                                if (x[2] <= 106.0) {
                                                    if (x[0] <= 61.0) {
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

                                else {
                                    if (x[0] <= 100.5) {
                                        if (x[2] <= 106.0) {
                                            if (x[1] <= 111.5) {
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
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 110.5) {
                                if (x[0] <= 101.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[4] <= 55.5) {
                                        if (x[0] <= 106.0) {
                                            if (x[3] <= 1110.5) {
                                                if (x[2] <= 111.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 120.5) {
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
                                            if (x[3] <= 1110.5) {
                                                if (x[3] <= 1106.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 161.0) {
                                                        if (x[1] <= 121.5) {
                                                            if (x[2] <= 111.5) {
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
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 200.5) {
                                    if (x[0] <= 116.0) {
                                        if (x[4] <= 550.0) {
                                            if (x[3] <= 1200.5) {
                                                if (x[1] <= 200.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 111.5) {
                                                        votes[1] += 1;
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

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 201.5) {
                                        if (x[3] <= 2005.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #42
                        if (x[3] <= 1016.0) {
                            if (x[1] <= 111.5) {
                                if (x[1] <= 106.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 110.5) {
                                        if (x[0] <= 61.0) {
                                            if (x[2] <= 100.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1000.5) {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 611.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 101.5) {
                                                        votes[0] += 1;
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
                                        if (x[3] <= 1006.0) {
                                            if (x[0] <= 61.0) {
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
                                if (x[0] <= 100.5) {
                                    if (x[3] <= 1010.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1011.5) {
                                            if (x[2] <= 106.0) {
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
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 121.5) {
                                if (x[3] <= 1100.5) {
                                    if (x[1] <= 116.0) {
                                        if (x[3] <= 1020.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 110.5) {
                                            if (x[0] <= 101.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1061.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1021.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1061.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 120.5) {
                                                        if (x[0] <= 101.5) {
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
                                    }
                                }

                                else {
                                    if (x[0] <= 101.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 106.0) {
                                            if (x[2] <= 111.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1106.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 111.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 5.0) {
                                    if (x[3] <= 1110.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 211.0) {
                                            if (x[3] <= 1216.0) {
                                                if (x[3] <= 1200.5) {
                                                    if (x[2] <= 120.5) {
                                                        if (x[3] <= 1120.5) {
                                                            if (x[0] <= 110.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= 1116.0) {
                                                                    if (x[3] <= 1111.5) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 161.5) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
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

                                                    else {
                                                        if (x[1] <= 200.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1201.5) {
                                                        if (x[1] <= 200.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 206.0) {
                                                            if (x[0] <= 116.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 201.5) {
                                                    if (x[3] <= 1220.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 2000.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 121.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }
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

                        // tree #43
                        if (x[3] <= 1110.5) {
                            if (x[0] <= 100.5) {
                                if (x[3] <= 611.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 1011.5) {
                                        if (x[2] <= 101.5) {
                                            if (x[3] <= 1001.5) {
                                                if (x[3] <= 1000.5) {
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
                                            if (x[0] <= 61.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 111.5) {
                                                    if (x[2] <= 106.0) {
                                                        if (x[3] <= 1010.5) {
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
                                                    if (x[2] <= 106.0) {
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
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1100.5) {
                                    if (x[3] <= 1021.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 116.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 120.5) {
                                                if (x[0] <= 101.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1061.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 110.5) {
                                                            votes[1] += 1;
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
                                    }
                                }

                                else {
                                    if (x[3] <= 1106.0) {
                                        if (x[0] <= 101.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 106.0) {
                                                if (x[3] <= 1101.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 120.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 161.0) {
                                            if (x[0] <= 106.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 111.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 121.5) {
                                                        votes[1] += 1;
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
                                }
                            }
                        }

                        else {
                            if (x[1] <= 121.5) {
                                if (x[2] <= 116.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[4] <= 5.0) {
                                    if (x[0] <= 110.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1121.5) {
                                            if (x[2] <= 116.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[0] <= 111.5) {
                                                    if (x[1] <= 200.5) {
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
                                            if (x[1] <= 210.5) {
                                                if (x[2] <= 120.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 200.5) {
                                                        if (x[3] <= 1201.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 115.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 116.0) {
                                                            if (x[1] <= 201.5) {
                                                                if (x[0] <= 111.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    if (x[2] <= 121.5) {
                                                                        votes[2] += 1;
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

                                                        else {
                                                            votes[2] += 1;
                                                        }
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
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #44
                        if (x[0] <= 100.5) {
                            if (x[1] <= 106.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[3] <= 1001.5) {
                                    if (x[1] <= 110.5) {
                                        if (x[2] <= 101.5) {
                                            if (x[0] <= 21.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 611.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1000.5) {
                                                        votes[0] += 1;
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
                                        if (x[0] <= 61.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1006.0) {
                                        if (x[1] <= 111.5) {
                                            if (x[0] <= 61.0) {
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
                                        if (x[3] <= 1010.5) {
                                            if (x[1] <= 111.5) {
                                                if (x[1] <= 110.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 61.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 106.0) {
                                                            votes[0] += 1;
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
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1110.5) {
                                if (x[3] <= 1101.5) {
                                    if (x[1] <= 120.5) {
                                        if (x[3] <= 1100.5) {
                                            if (x[1] <= 116.0) {
                                                if (x[2] <= 110.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 110.5) {
                                                    if (x[3] <= 1061.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 1021.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 106.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 120.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 160.5) {
                                            if (x[0] <= 106.0) {
                                                if (x[0] <= 101.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1106.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 111.5) {
                                                    if (x[3] <= 1106.0) {
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
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 5.0) {
                                    if (x[0] <= 110.5) {
                                        if (x[0] <= 106.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 200.5) {
                                            if (x[0] <= 116.0) {
                                                if (x[3] <= 1201.0) {
                                                    if (x[1] <= 200.5) {
                                                        if (x[3] <= 1121.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1161.0) {
                                                                if (x[1] <= 161.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    if (x[2] <= 120.5) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 120.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 1121.5) {
                                                            if (x[0] <= 111.5) {
                                                                votes[1] += 1;
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
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 161.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 201.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 2005.5) {
                                                votes[1] += 1;
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

                        // tree #45
                        if (x[2] <= 111.5) {
                            if (x[3] <= 1016.0) {
                                if (x[0] <= 100.5) {
                                    if (x[3] <= 611.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1006.0) {
                                            if (x[2] <= 101.5) {
                                                if (x[0] <= 61.0) {
                                                    if (x[3] <= 1000.5) {
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
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 61.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 106.0) {
                                                    if (x[3] <= 1010.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 111.5) {
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
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 100.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 1101.5) {
                                        if (x[0] <= 106.0) {
                                            if (x[0] <= 101.5) {
                                                if (x[1] <= 116.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 110.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 110.5) {
                                                    if (x[3] <= 1061.0) {
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

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1106.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 121.5) {
                                if (x[1] <= 120.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 116.0) {
                                        if (x[0] <= 106.0) {
                                            if (x[3] <= 1106.0) {
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
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 110.5) {
                                    if (x[1] <= 161.0) {
                                        if (x[4] <= 5.0) {
                                            if (x[3] <= 1110.5) {
                                                votes[2] += 1;
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
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 550.0) {
                                        if (x[1] <= 206.0) {
                                            if (x[0] <= 111.5) {
                                                if (x[3] <= 1121.5) {
                                                    if (x[3] <= 1111.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 200.5) {
                                                            votes[2] += 1;
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

                                            else {
                                                if (x[0] <= 116.0) {
                                                    if (x[3] <= 1205.0) {
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
                                            if (x[0] <= 121.5) {
                                                if (x[0] <= 116.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 201.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
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
                            }
                        }

                        // tree #46
                        if (x[1] <= 121.5) {
                            if (x[0] <= 100.5) {
                                if (x[2] <= 100.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 106.0) {
                                        if (x[0] <= 61.0) {
                                            if (x[3] <= 1000.5) {
                                                if (x[3] <= 611.0) {
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
                                            if (x[3] <= 1006.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1010.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 111.5) {
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
                            }

                            else {
                                if (x[2] <= 110.5) {
                                    if (x[0] <= 101.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1061.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1021.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 120.5) {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1101.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 116.0) {
                                                if (x[0] <= 101.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 106.0) {
                                                        if (x[2] <= 111.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1106.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 111.5) {
                                                            if (x[3] <= 1106.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 1110.5) {
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
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= 5.0) {
                                if (x[2] <= 200.5) {
                                    if (x[3] <= 1221.5) {
                                        if (x[3] <= 1111.5) {
                                            if (x[2] <= 116.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 110.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 120.5) {
                                                    if (x[1] <= 200.5) {
                                                        if (x[3] <= 1121.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1161.0) {
                                                                if (x[1] <= 161.0) {
                                                                    votes[1] += 1;
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
                                                        if (x[3] <= 1117.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 200.5) {
                                                        if (x[3] <= 1201.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1206.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 121.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 161.0) {
                                                                if (x[0] <= 116.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 116.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    if (x[3] <= 1220.5) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 205.5) {
                                                                            votes[1] += 1;
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
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 2005.5) {
                                        votes[1] += 1;
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

                        // tree #47
                        if (x[2] <= 111.5) {
                            if (x[0] <= 100.5) {
                                if (x[1] <= 106.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 1006.0) {
                                        if (x[1] <= 111.5) {
                                            if (x[2] <= 101.5) {
                                                if (x[0] <= 61.0) {
                                                    if (x[0] <= 21.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 611.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1000.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
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
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 61.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 106.0) {
                                                if (x[2] <= 101.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 111.5) {
                                                        if (x[3] <= 1010.5) {
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
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1101.5) {
                                    if (x[3] <= 1100.5) {
                                        if (x[2] <= 110.5) {
                                            if (x[3] <= 1061.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1021.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 101.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 120.5) {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 106.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1106.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 110.5) {
                                if (x[1] <= 120.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[4] <= 5.0) {
                                        if (x[3] <= 1106.0) {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 1110.5) {
                                                if (x[1] <= 161.0) {
                                                    if (x[1] <= 121.5) {
                                                        if (x[0] <= 106.0) {
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
                                                    votes[1] += 1;
                                                }
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

                            else {
                                if (x[1] <= 206.0) {
                                    if (x[0] <= 111.5) {
                                        if (x[1] <= 200.5) {
                                            if (x[2] <= 120.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1201.5) {
                                                    if (x[3] <= 1200.5) {
                                                        if (x[4] <= 551.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[4] <= 1001.0) {
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
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1611.0) {
                                            if (x[2] <= 161.0) {
                                                if (x[1] <= 200.5) {
                                                    if (x[3] <= 1200.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 1201.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 116.0) {
                                                        if (x[3] <= 1166.0) {
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
                                                if (x[0] <= 116.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 201.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 2000.5) {
                                                if (x[2] <= 200.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 200.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 2001.5) {
                                        if (x[3] <= 1611.5) {
                                            if (x[2] <= 200.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 121.5) {
                                                votes[1] += 1;
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

                        // tree #48
                        if (x[1] <= 121.5) {
                            if (x[0] <= 100.5) {
                                if (x[1] <= 106.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 61.0) {
                                        if (x[3] <= 1001.5) {
                                            if (x[3] <= 611.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 101.5) {
                                                    if (x[3] <= 1000.5) {
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
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1001.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 110.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 111.5) {
                                                    if (x[2] <= 106.0) {
                                                        if (x[2] <= 101.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1010.5) {
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

                                                else {
                                                    if (x[2] <= 106.0) {
                                                        votes[1] += 1;
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
                                if (x[0] <= 106.0) {
                                    if (x[3] <= 1101.5) {
                                        if (x[0] <= 101.5) {
                                            if (x[2] <= 110.5) {
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
                                        if (x[3] <= 1106.0) {
                                            if (x[1] <= 120.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 101.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 116.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1110.5) {
                                        if (x[3] <= 1106.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= 111.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 110.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 1211.5) {
                                if (x[2] <= 161.0) {
                                    if (x[2] <= 116.0) {
                                        if (x[0] <= 110.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 5.0) {
                                            if (x[0] <= 111.5) {
                                                if (x[2] <= 120.5) {
                                                    if (x[1] <= 161.0) {
                                                        if (x[0] <= 110.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1121.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 110.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 200.5) {
                                                                votes[2] += 1;
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
                                                if (x[3] <= 1200.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 200.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 201.5) {
                                                            if (x[0] <= 116.0) {
                                                                votes[1] += 1;
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
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 200.5) {
                                    if (x[2] <= 161.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1216.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 121.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #49
                        if (x[0] <= 106.0) {
                            if (x[1] <= 111.5) {
                                if (x[0] <= 21.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 61.0) {
                                        if (x[1] <= 110.5) {
                                            if (x[3] <= 1000.5) {
                                                if (x[3] <= 611.0) {
                                                    if (x[1] <= 106.0) {
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
                                                if (x[2] <= 101.5) {
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
                                        if (x[3] <= 1005.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 106.0) {
                                                if (x[3] <= 1010.5) {
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
                                }
                            }

                            else {
                                if (x[0] <= 100.5) {
                                    if (x[3] <= 1010.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 106.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 111.5) {
                                        if (x[0] <= 101.5) {
                                            if (x[3] <= 1061.0) {
                                                if (x[2] <= 110.5) {
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

                                    else {
                                        if (x[0] <= 101.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[4] <= 5.0) {
                                                if (x[1] <= 120.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1110.5) {
                                                        if (x[3] <= 1106.0) {
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
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= 55.5) {
                                if (x[0] <= 110.5) {
                                    if (x[2] <= 111.5) {
                                        if (x[3] <= 1106.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 116.0) {
                                            if (x[3] <= 1110.5) {
                                                if (x[1] <= 121.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
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
                                    if (x[2] <= 201.5) {
                                        if (x[2] <= 200.5) {
                                            if (x[0] <= 116.0) {
                                                if (x[2] <= 120.5) {
                                                    if (x[2] <= 116.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 111.5) {
                                                            if (x[3] <= 1121.5) {
                                                                if (x[3] <= 1116.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
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
                                                    if (x[3] <= 1161.0) {
                                                        if (x[2] <= 121.5) {
                                                            votes[2] += 1;
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
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 117.0) {
                                                votes[1] += 1;
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

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #50
                        if (x[0] <= 110.5) {
                            if (x[0] <= 100.5) {
                                if (x[0] <= 61.0) {
                                    if (x[3] <= 221.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 101.5) {
                                            if (x[1] <= 106.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1000.5) {
                                                    if (x[2] <= 100.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 611.0) {
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

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1006.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 111.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 106.0) {
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
                                if (x[0] <= 106.0) {
                                    if (x[3] <= 1100.5) {
                                        if (x[2] <= 110.5) {
                                            if (x[2] <= 106.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1061.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 101.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 101.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 120.5) {
                                                if (x[3] <= 1101.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 116.0) {
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
                                    if (x[1] <= 121.5) {
                                        if (x[3] <= 1110.5) {
                                            if (x[2] <= 111.5) {
                                                if (x[3] <= 1106.0) {
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
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 55.5) {
                                            if (x[2] <= 116.0) {
                                                if (x[3] <= 1110.5) {
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
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 200.5) {
                                if (x[4] <= 551.0) {
                                    if (x[2] <= 161.0) {
                                        if (x[0] <= 116.0) {
                                            if (x[3] <= 1200.5) {
                                                if (x[3] <= 1121.5) {
                                                    if (x[0] <= 111.5) {
                                                        if (x[2] <= 116.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 1116.0) {
                                                                votes[1] += 1;
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
                                                    if (x[1] <= 161.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 200.5) {
                                                            if (x[3] <= 1161.0) {
                                                                if (x[2] <= 120.5) {
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
                                                            if (x[3] <= 1161.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
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

                                    else {
                                        if (x[1] <= 206.0) {
                                            if (x[3] <= 1216.5) {
                                                votes[1] += 1;
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
                                if (x[0] <= 121.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 3; i++) {
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