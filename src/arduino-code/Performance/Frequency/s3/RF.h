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
                        if (x[5] <= 3811.6448974609375) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[22] <= 4635.89501953125) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #2
                        if (x[26] <= 3926.570068359375) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[21] <= 4638.55517578125) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #3
                        if (x[12] <= 3815.3450927734375) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[30] <= 4659.199951171875) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #4
                        if (x[2] <= 3859.4150390625) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[28] <= 4638.46484375) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #5
                        if (x[31] <= 4642.835205078125) {
                            if (x[11] <= 3818.570068359375) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #6
                        if (x[15] <= 4633.169921875) {
                            if (x[3] <= 3839.9649658203125) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #7
                        if (x[16] <= 4631.5849609375) {
                            if (x[18] <= 3811.7000732421875) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #8
                        if (x[8] <= 4656.990234375) {
                            if (x[31] <= 3829.8699951171875) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #9
                        if (x[12] <= 3810.3250732421875) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[18] <= 4646.369873046875) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #10
                        if (x[13] <= 4650.22998046875) {
                            if (x[8] <= 3825.9801025390625) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #11
                        if (x[2] <= 4626.364990234375) {
                            if (x[30] <= 3871.39501953125) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #12
                        if (x[9] <= 3826.260009765625) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[26] <= 4641.864990234375) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #13
                        if (x[26] <= 4641.800048828125) {
                            if (x[30] <= 3852.89990234375) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #14
                        if (x[8] <= 4647.835205078125) {
                            if (x[16] <= 3808.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #15
                        if (x[3] <= 3834.2298583984375) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[28] <= 4637.44482421875) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #16
                        if (x[19] <= 4025.08984375) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[29] <= 4660.26513671875) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #17
                        if (x[5] <= 3816.659912109375) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[28] <= 4646.844970703125) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #18
                        if (x[6] <= 3815.070068359375) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[12] <= 4649.284912109375) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #19
                        if (x[2] <= 4639.52490234375) {
                            if (x[3] <= 3832.3250732421875) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #20
                        if (x[20] <= 4143.2451171875) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[6] <= 4633.27001953125) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #21
                        if (x[19] <= 4025.08984375) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[29] <= 4659.14990234375) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #22
                        if (x[11] <= 4645.93994140625) {
                            if (x[29] <= 3864.175048828125) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #23
                        if (x[18] <= 4646.369873046875) {
                            if (x[20] <= 4141.005126953125) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #24
                        if (x[1] <= 4639.440185546875) {
                            if (x[30] <= 3830.9100341796875) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #25
                        if (x[17] <= 3816.3050537109375) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[27] <= 4661.170166015625) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #26
                        if (x[24] <= 3808.2451171875) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[18] <= 4646.369873046875) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #27
                        if (x[31] <= 4644.26513671875) {
                            if (x[12] <= 3815.6151123046875) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #28
                        if (x[10] <= 3811.949951171875) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[27] <= 4644.869873046875) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #29
                        if (x[5] <= 3816.659912109375) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[9] <= 4648.445068359375) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #30
                        if (x[16] <= 4631.5849609375) {
                            if (x[22] <= 3991.9249267578125) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #31
                        if (x[12] <= 3822.2200927734375) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[28] <= 4637.44482421875) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #32
                        if (x[25] <= 4666.6650390625) {
                            if (x[14] <= 3811.885009765625) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #33
                        if (x[23] <= 4645.849853515625) {
                            if (x[14] <= 3807.1500244140625) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #34
                        if (x[24] <= 4883.469970703125) {
                            if (x[12] <= 3816.9300537109375) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #35
                        if (x[26] <= 3806.840087890625) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[27] <= 4642.52001953125) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #36
                        if (x[13] <= 3848.0400390625) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[12] <= 4649.284912109375) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #37
                        if (x[12] <= 4667.885009765625) {
                            if (x[9] <= 3810.1099853515625) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #38
                        if (x[19] <= 4025.08984375) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[29] <= 4646.97509765625) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #39
                        if (x[8] <= 3833.9801025390625) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[15] <= 4635.344970703125) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #40
                        if (x[11] <= 3819.505126953125) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[26] <= 4641.800048828125) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #41
                        if (x[17] <= 4656.02978515625) {
                            if (x[2] <= 3824.06005859375) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #42
                        if (x[0] <= 4635.625) {
                            if (x[19] <= 4025.08984375) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #43
                        if (x[19] <= 4025.08984375) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[19] <= 4659.594970703125) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #44
                        if (x[4] <= 3832.3299560546875) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[8] <= 4656.31005859375) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #45
                        if (x[2] <= 3861.849853515625) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[31] <= 4650.360107421875) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #46
                        if (x[7] <= 3837.81494140625) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[25] <= 4682.0751953125) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #47
                        if (x[15] <= 4635.344970703125) {
                            if (x[12] <= 3815.6151123046875) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #48
                        if (x[8] <= 3825.9801025390625) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[31] <= 4644.26513671875) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #49
                        if (x[13] <= 4652.27001953125) {
                            if (x[31] <= 3820.2950439453125) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #50
                        if (x[25] <= 4640.27001953125) {
                            if (x[9] <= 3818.1099853515625) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
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