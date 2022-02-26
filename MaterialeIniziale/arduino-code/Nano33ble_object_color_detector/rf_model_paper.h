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
                        if (x[0] <= 116.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 1210.5) {
                                if (x[3] <= 1206.0) {
                                    if (x[1] <= 161.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 161.0) {
                                            if (x[0] <= 121.5) {
                                                if (x[3] <= 1162.0) {
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
                                    if (x[0] <= 200.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1211.5) {
                                    if (x[1] <= 206.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 200.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 211.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= 206.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 220.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 2016.5) {
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

                        // tree #2
                        if (x[3] <= 1106.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 200.5) {
                                if (x[3] <= 1120.5) {
                                    if (x[1] <= 161.0) {
                                        if (x[0] <= 121.0) {
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
                                    if (x[0] <= 161.0) {
                                        if (x[0] <= 121.5) {
                                            if (x[1] <= 200.5) {
                                                if (x[2] <= 120.5) {
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

                                    else {
                                        if (x[1] <= 201.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 206.0) {
                                    if (x[3] <= 1611.0) {
                                        if (x[1] <= 211.5) {
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

                        // tree #3
                        if (x[3] <= 1106.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 161.0) {
                                if (x[3] <= 1210.5) {
                                    if (x[3] <= 1206.0) {
                                        if (x[1] <= 161.0) {
                                            if (x[0] <= 121.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 161.0) {
                                                if (x[1] <= 200.5) {
                                                    if (x[0] <= 120.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 120.5) {
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
                                        if (x[2] <= 121.5) {
                                            if (x[2] <= 120.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[1] <= 206.0) {
                                                    if (x[0] <= 161.5) {
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
                                }

                                else {
                                    if (x[0] <= 200.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 206.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 2011.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[3] <= 2016.5) {
                                            if (x[2] <= 206.0) {
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

                        // tree #4
                        if (x[0] <= 116.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 200.5) {
                                if (x[0] <= 121.5) {
                                    if (x[2] <= 120.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 201.5) {
                                        if (x[0] <= 161.0) {
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
                                if (x[1] <= 211.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[1] <= 216.0) {
                                        if (x[0] <= 206.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 206.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #5
                        if (x[3] <= 1106.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 200.5) {
                                if (x[2] <= 120.5) {
                                    if (x[0] <= 161.0) {
                                        if (x[1] <= 161.0) {
                                            if (x[0] <= 121.0) {
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

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 206.0) {
                                    if (x[1] <= 211.5) {
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

                        // tree #6
                        if (x[0] <= 116.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 200.5) {
                                if (x[1] <= 201.5) {
                                    if (x[0] <= 161.0) {
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
                                if (x[2] <= 161.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[1] <= 211.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 206.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 220.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[0] <= 216.0) {
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

                        // tree #7
                        if (x[1] <= 161.0) {
                            if (x[3] <= 1106.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 121.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 200.5) {
                                if (x[0] <= 161.0) {
                                    if (x[1] <= 200.5) {
                                        if (x[2] <= 120.5) {
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
                                    if (x[2] <= 120.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 206.0) {
                                    if (x[2] <= 161.5) {
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

                        // tree #8
                        if (x[0] <= 116.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 120.5) {
                                if (x[1] <= 201.5) {
                                    if (x[2] <= 116.0) {
                                        if (x[3] <= 1116.0) {
                                            votes[1] += 1;
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

                                    else {
                                        if (x[3] <= 1200.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 161.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 1205.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 161.0) {
                                    if (x[0] <= 200.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 206.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 210.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[3] <= 2011.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 2016.0) {
                                                    if (x[1] <= 220.5) {
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

                        // tree #9
                        if (x[3] <= 1106.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1] <= 206.0) {
                                if (x[0] <= 200.5) {
                                    if (x[1] <= 160.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 161.0) {
                                            if (x[1] <= 200.5) {
                                                if (x[3] <= 1161.5) {
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
                                            if (x[1] <= 201.5) {
                                                votes[2] += 1;
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
                                if (x[3] <= 1211.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[2] <= 201.5) {
                                        if (x[0] <= 201.5) {
                                            if (x[2] <= 121.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 216.0) {
                                                if (x[2] <= 200.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 1612.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 206.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 206.0) {
                                            if (x[3] <= 2007.0) {
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

                        // tree #10
                        if (x[0] <= 116.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 200.5) {
                                if (x[2] <= 120.5) {
                                    if (x[1] <= 161.0) {
                                        if (x[0] <= 121.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1201.5) {
                                            if (x[0] <= 161.0) {
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
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 211.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[3] <= 2000.5) {
                                        if (x[0] <= 206.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 206.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 220.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 206.0) {
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
                        }

                        // tree #11
                        if (x[0] <= 116.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1] <= 210.5) {
                                if (x[3] <= 1210.5) {
                                    if (x[0] <= 200.5) {
                                        if (x[1] <= 200.5) {
                                            if (x[2] <= 120.5) {
                                                if (x[1] <= 161.0) {
                                                    if (x[0] <= 121.0) {
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
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 161.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 201.5) {
                                                    votes[2] += 1;
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
                                    if (x[2] <= 121.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 201.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 206.0) {
                                    if (x[2] <= 161.0) {
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

                        // tree #12
                        if (x[0] <= 116.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 200.5) {
                                if (x[1] <= 161.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 211.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[2] <= 200.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 206.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #13
                        if (x[2] <= 116.0) {
                            if (x[3] <= 1106.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 1210.5) {
                                if (x[0] <= 200.5) {
                                    if (x[0] <= 161.0) {
                                        if (x[1] <= 200.5) {
                                            if (x[3] <= 1161.5) {
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
                                        if (x[3] <= 1206.0) {
                                            if (x[3] <= 1201.5) {
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
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 211.5) {
                                    if (x[2] <= 121.5) {
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
                                    if (x[3] <= 2001.5) {
                                        if (x[3] <= 1611.0) {
                                            votes[1] += 1;
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
                                        if (x[0] <= 206.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #14
                        if (x[0] <= 116.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 200.5) {
                                if (x[1] <= 201.5) {
                                    if (x[2] <= 120.5) {
                                        if (x[0] <= 161.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 200.5) {
                                            votes[0] += 1;
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
                                if (x[1] <= 211.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[0] <= 206.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 2011.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= 206.0) {
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

                        // tree #15
                        if (x[1] <= 161.0) {
                            if (x[3] <= 1106.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 200.5) {
                                if (x[0] <= 161.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 201.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 200.5) {
                                    if (x[2] <= 161.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[1] <= 211.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[3] <= 1610.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 216.0) {
                                        if (x[0] <= 206.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 220.5) {
                                            if (x[0] <= 206.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 206.0) {
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

                        // tree #16
                        if (x[3] <= 1106.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 1210.5) {
                                if (x[0] <= 200.5) {
                                    if (x[1] <= 161.0) {
                                        if (x[0] <= 117.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 161.0) {
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
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 206.0) {
                                    if (x[2] <= 121.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 201.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 200.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 201.5) {
                                                    if (x[1] <= 216.0) {
                                                        if (x[0] <= 206.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 207.0) {
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

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #17
                        if (x[3] <= 1106.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 200.5) {
                                if (x[3] <= 1206.0) {
                                    if (x[0] <= 161.0) {
                                        if (x[3] <= 1120.5) {
                                            if (x[1] <= 121.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1116.0) {
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

                                        else {
                                            if (x[1] <= 200.5) {
                                                if (x[3] <= 1161.5) {
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
                                        if (x[1] <= 201.5) {
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
                                if (x[1] <= 211.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[2] <= 206.0) {
                                        if (x[0] <= 206.0) {
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

                        // tree #18
                        if (x[0] <= 116.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 200.5) {
                                if (x[2] <= 120.5) {
                                    if (x[0] <= 161.0) {
                                        if (x[1] <= 161.0) {
                                            if (x[3] <= 1115.5) {
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

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 206.0) {
                                    if (x[1] <= 211.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[3] <= 2000.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 206.0) {
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
                        }

                        // tree #19
                        if (x[2] <= 111.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 200.5) {
                                if (x[0] <= 116.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 161.0) {
                                        if (x[0] <= 121.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 201.5) {
                                            if (x[0] <= 161.0) {
                                                if (x[3] <= 1201.5) {
                                                    votes[1] += 1;
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
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 161.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[3] <= 1221.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 206.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #20
                        if (x[2] <= 111.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 200.5) {
                                if (x[3] <= 1106.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 121.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 201.5) {
                                            if (x[3] <= 1200.5) {
                                                if (x[2] <= 116.0) {
                                                    if (x[1] <= 161.0) {
                                                        if (x[0] <= 121.0) {
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

                                            else {
                                                if (x[0] <= 160.5) {
                                                    votes[0] += 1;
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
                                if (x[2] <= 200.5) {
                                    if (x[2] <= 161.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1221.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 201.5) {
                                        if (x[1] <= 216.0) {
                                            if (x[0] <= 206.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 206.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 2007.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
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