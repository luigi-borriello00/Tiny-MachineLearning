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
                        if (x[21] <= 1562.7750244140625) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[22] <= 2074.6200561523438) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #2
                        if (x[26] <= 1515.6199951171875) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[21] <= 2153.2950439453125) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #3
                        if (x[12] <= 1560.8699951171875) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[30] <= 2097.4299926757812) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #4
                        if (x[2] <= 1532.27001953125) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[28] <= 2080.5599975585938) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #5
                        if (x[31] <= 1573.5850219726562) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[11] <= 2115.5150146484375) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #6
                        if (x[15] <= 1562.1700439453125) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[21] <= 2079.89501953125) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #7
                        if (x[16] <= 1515.8399658203125) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[23] <= 2106.635009765625) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #8
                        if (x[8] <= 1539.7100219726562) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[31] <= 2094.4750366210938) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #9
                        if (x[12] <= 1512.6649780273438) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[18] <= 2082.6449584960938) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #10
                        if (x[13] <= 1555.9149780273438) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[8] <= 2114.3649291992188) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #11
                        if (x[2] <= 1532.27001953125) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[30] <= 2100.1000366210938) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #12
                        if (x[9] <= 1557.2799682617188) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[26] <= 2159.5150146484375) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #13
                        if (x[26] <= 1518.8349609375) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[30] <= 2097.4299926757812) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #14
                        if (x[8] <= 1531.6749877929688) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[16] <= 2127.0449829101562) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #15
                        if (x[3] <= 1538.14501953125) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[28] <= 2080.5599975585938) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #16
                        if (x[26] <= 1518.8349609375) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[29] <= 2115.7100219726562) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #17
                        if (x[5] <= 1541.3450317382812) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[28] <= 2126.0499877929688) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #18
                        if (x[6] <= 1515.030029296875) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[12] <= 2114.8350219726562) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #19
                        if (x[2] <= 1532.27001953125) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 2080.469970703125) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #20
                        if (x[20] <= 1573.4400024414062) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[6] <= 2150.489990234375) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #21
                        if (x[19] <= 1526.7550048828125) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[29] <= 2078.5399780273438) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #22
                        if (x[11] <= 1565.0450439453125) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[21] <= 2080.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #23
                        if (x[18] <= 1546.844970703125) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[20] <= 2134.6600341796875) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #24
                        if (x[1] <= 1527.125) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[30] <= 2100.1000366210938) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #25
                        if (x[27] <= 1562.4200439453125) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[27] <= 2085.9800415039062) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #26
                        if (x[24] <= 1623.9150390625) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[18] <= 2155.5050048828125) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #27
                        if (x[31] <= 1516.3800048828125) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[12] <= 2104.3900146484375) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #28
                        if (x[10] <= 1559.8299560546875) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[27] <= 2085.9800415039062) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #29
                        if (x[27] <= 1562.4200439453125) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[9] <= 2099.5800170898438) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #30
                        if (x[16] <= 1558.6500244140625) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[22] <= 2085.2400512695312) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #31
                        if (x[12] <= 1530.7900390625) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[28] <= 2080.5599975585938) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #32
                        if (x[25] <= 1579.0149536132812) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[14] <= 2120.1050415039062) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #33
                        if (x[23] <= 1532.3500366210938) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[14] <= 2120.1050415039062) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #34
                        if (x[24] <= 1485.5450439453125) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[27] <= 2092.7799682617188) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #35
                        if (x[26] <= 1593.7950439453125) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[27] <= 2087.4000854492188) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #36
                        if (x[13] <= 1555.9149780273438) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[12] <= 2114.8350219726562) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #37
                        if (x[12] <= 1560.8699951171875) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[9] <= 2099.9249877929688) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #38
                        if (x[19] <= 1543.9800415039062) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[29] <= 2115.7100219726562) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #39
                        if (x[8] <= 1516.2300415039062) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[15] <= 2088.5850219726562) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #40
                        if (x[28] <= 1558.75) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[26] <= 2098.3199462890625) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #41
                        if (x[17] <= 1523.0199584960938) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 2092.6199951171875) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #42
                        if (x[0] <= 1572.5449829101562) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[19] <= 2105.6400146484375) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #43
                        if (x[21] <= 1565.9500122070312) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[19] <= 2103.0999755859375) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #44
                        if (x[4] <= 1465.5549926757812) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[8] <= 2121.5800170898438) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #45
                        if (x[2] <= 1532.27001953125) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[31] <= 2091.2150268554688) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #46
                        if (x[7] <= 1527.0650024414062) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[25] <= 2093.8550415039062) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #47
                        if (x[15] <= 1511.2850341796875) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[12] <= 2117.9950561523438) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #48
                        if (x[8] <= 1516.2300415039062) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[31] <= 2073.2200317382812) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #49
                        if (x[13] <= 1555.9149780273438) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[31] <= 2094.4750366210938) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #50
                        if (x[25] <= 1526.594970703125) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[9] <= 2090.4200439453125) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
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