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
                        uint8_t votes[2] = { 0 };
                        // tree #1
                        if (x[57] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #2
                        if (x[0] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #3
                        if (x[28] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #4
                        if (x[57] <= -0.054999999701976776) {
                            if (x[49] <= 0.019999999552965164) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #5
                        if (x[37] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #6
                        if (x[55] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #7
                        if (x[52] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #8
                        if (x[54] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #9
                        if (x[13] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #10
                        if (x[27] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #11
                        if (x[18] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #12
                        if (x[40] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #13
                        if (x[37] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #14
                        if (x[42] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #15
                        if (x[31] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #16
                        if (x[51] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #17
                        if (x[33] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #18
                        if (x[54] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #19
                        if (x[40] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #20
                        if (x[22] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #21
                        if (x[19] <= 0.004999999888241291) {
                            if (x[31] <= 0.019999999552965164) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #22
                        if (x[15] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #23
                        if (x[46] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #24
                        if (x[37] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #25
                        if (x[4] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #26
                        if (x[36] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #27
                        if (x[18] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #28
                        if (x[0] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #29
                        if (x[21] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #30
                        if (x[16] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #31
                        if (x[16] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #32
                        if (x[45] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #33
                        if (x[18] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #34
                        if (x[45] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #35
                        if (x[51] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #36
                        if (x[49] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #37
                        if (x[48] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #38
                        if (x[55] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #39
                        if (x[4] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #40
                        if (x[4] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #41
                        if (x[9] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #42
                        if (x[0] <= -0.054999999701976776) {
                            if (x[24] <= -0.054999999701976776) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #43
                        if (x[4] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #44
                        if (x[55] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #45
                        if (x[49] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #46
                        if (x[31] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #47
                        if (x[13] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #48
                        if (x[31] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #49
                        if (x[40] <= 0.004999999888241291) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #50
                        if (x[9] <= -0.054999999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 2; i++) {
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