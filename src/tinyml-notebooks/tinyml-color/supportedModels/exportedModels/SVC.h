#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class SVM {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        float kernels[240] = { 0 };
                        float decisions[6] = { 0 };
                        int votes[4] = { 0 };
                        kernels[0] = compute_kernel(x,   1.0  , 1.0  , 5.0  , 0.125475285171  , 0.0 );
                        kernels[1] = compute_kernel(x,   0.987341772152  , 0.111111111111  , 4.5  , 0.001267427123  , 0.0 );
                        kernels[2] = compute_kernel(x,   -0.012658227848  , -1.0  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[3] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[4] = compute_kernel(x,   -0.012658227848  , -0.111111111111  , 0.0  , -0.988593155894  , 0.0 );
                        kernels[5] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.012674271229  , 0.0 );
                        kernels[6] = compute_kernel(x,   0.987341772152  , 0.111111111111  , 4.5  , 0.011406844106  , 0.0 );
                        kernels[7] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[8] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[9] = compute_kernel(x,   1.113924050633  , 1.222222222222  , 9.5  , 0.15082382763  , 111.0 );
                        kernels[10] = compute_kernel(x,   0.0  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[11] = compute_kernel(x,   0.0  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[12] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[13] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[14] = compute_kernel(x,   0.0  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[15] = compute_kernel(x,   -0.025316455696  , -1.111111111111  , -39.5  , -1.001267427123  , 0.0 );
                        kernels[16] = compute_kernel(x,   0.987341772152  , 0.111111111111  , 4.5  , 0.013941698352  , 0.0 );
                        kernels[17] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[18] = compute_kernel(x,   -0.012658227848  , -1.111111111111  , -0.5  , -1.0  , 0.0 );
                        kernels[19] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -1.0  , 0.0 );
                        kernels[20] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -1.0  , 0.0 );
                        kernels[21] = compute_kernel(x,   -0.012658227848  , -1.111111111111  , -39.5  , -1.001267427123  , 0.0 );
                        kernels[22] = compute_kernel(x,   0.0  , 0.0  , 4.5  , 0.001267427123  , 0.0 );
                        kernels[23] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[24] = compute_kernel(x,   0.0  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[25] = compute_kernel(x,   0.0  , -1.0  , -0.5  , -0.987325728771  , 0.0 );
                        kernels[26] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[27] = compute_kernel(x,   0.987341772152  , 0.111111111111  , 4.5  , 0.013941698352  , 0.0 );
                        kernels[28] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , 0.0  , 0.0 );
                        kernels[29] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.012674271229  , 0.0 );
                        kernels[30] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[31] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[32] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[33] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[34] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[35] = compute_kernel(x,   0.987341772152  , 0.111111111111  , 4.5  , 0.011406844106  , 0.0 );
                        kernels[36] = compute_kernel(x,   1.126582278481  , 9.888888888889  , 10.0  , 0.252217997465  , 1201.0 );
                        kernels[37] = compute_kernel(x,   0.987341772152  , 0.111111111111  , 4.5  , 0.025348542459  , 0.0 );
                        kernels[38] = compute_kernel(x,   1.139240506329  , 9.888888888889  , 10.0  , 0.253485424588  , 2022.0 );
                        kernels[39] = compute_kernel(x,   0.0  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[40] = compute_kernel(x,   1.0  , 1.0  , 5.0  , 0.125475285171  , 0.0 );
                        kernels[41] = compute_kernel(x,   1.126582278481  , 9.888888888889  , 10.0  , 0.252217997465  , 1222.0 );
                        kernels[42] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , 0.0  , 0.0 );
                        kernels[43] = compute_kernel(x,   1.126582278481  , 9.888888888889  , 10.0  , 0.253485424588  , 2002.0 );
                        kernels[44] = compute_kernel(x,   0.987341772152  , 0.0  , 4.5  , 0.011406844106  , 0.0 );
                        kernels[45] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[46] = compute_kernel(x,   1.0  , 1.0  , 5.0  , 0.025348542459  , 0.0 );
                        kernels[47] = compute_kernel(x,   1.012658227848  , 1.111111111111  , 5.5  , 0.138149556401  , 0.0 );
                        kernels[48] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[49] = compute_kernel(x,   -0.012658227848  , -1.111111111111  , -0.5  , -1.001267427123  , 0.0 );
                        kernels[50] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[51] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[52] = compute_kernel(x,   1.113924050633  , 1.222222222222  , 9.5  , 0.152091254753  , 1011.0 );
                        kernels[53] = compute_kernel(x,   0.0  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[54] = compute_kernel(x,   1.113924050633  , 1.222222222222  , 9.5  , 0.152091254753  , 210.0 );
                        kernels[55] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[56] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[57] = compute_kernel(x,   1.126582278481  , 1.222222222222  , 10.0  , 0.153358681876  , 1102.0 );
                        kernels[58] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[59] = compute_kernel(x,   1.012658227848  , 1.111111111111  , 9.5  , 0.139416983523  , 0.0 );
                        kernels[60] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -1.0  , 0.0 );
                        kernels[61] = compute_kernel(x,   -0.012658227848  , -1.111111111111  , -39.5  , -1.001267427123  , 0.0 );
                        kernels[62] = compute_kernel(x,   0.987341772152  , 0.111111111111  , 4.5  , 0.024081115336  , 0.0 );
                        kernels[63] = compute_kernel(x,   0.0  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[64] = compute_kernel(x,   -0.012658227848  , -1.0  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[65] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.012674271229  , 0.0 );
                        kernels[66] = compute_kernel(x,   1.113924050633  , 1.222222222222  , 9.5  , 0.15082382763  , 10.0 );
                        kernels[67] = compute_kernel(x,   0.0  , -0.111111111111  , 0.5  , 0.0  , 0.0 );
                        kernels[68] = compute_kernel(x,   1.139240506329  , 9.888888888889  , 10.0  , 0.253485424588  , 2020.0 );
                        kernels[69] = compute_kernel(x,   1.0  , 1.0  , 5.0  , 0.125475285171  , 0.0 );
                        kernels[70] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[71] = compute_kernel(x,   -0.012658227848  , -0.111111111111  , 0.0  , -0.988593155894  , 0.0 );
                        kernels[72] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[73] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[74] = compute_kernel(x,   0.987341772152  , 0.111111111111  , 4.5  , 0.011406844106  , 0.0 );
                        kernels[75] = compute_kernel(x,   -0.012658227848  , -1.0  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[76] = compute_kernel(x,   1.126582278481  , 9.888888888889  , 10.0  , 0.252217997465  , 1100.0 );
                        kernels[77] = compute_kernel(x,   1.012658227848  , 1.222222222222  , 9.5  , 0.140684410646  , 10.0 );
                        kernels[78] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[79] = compute_kernel(x,   0.0  , 0.111111111111  , 4.5  , 0.001267427123  , 0.0 );
                        kernels[80] = compute_kernel(x,   0.0  , -1.0  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[81] = compute_kernel(x,   0.0  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[82] = compute_kernel(x,   -0.012658227848  , -1.111111111111  , -0.5  , -1.001267427123  , 0.0 );
                        kernels[83] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[84] = compute_kernel(x,   -0.012658227848  , -1.0  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[85] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -1.0  , 0.0 );
                        kernels[86] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[87] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[88] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[89] = compute_kernel(x,   -0.126582278481  , -1.222222222222  , -40.0  , -1.015209125475  , 0.0 );
                        kernels[90] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[91] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[92] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[93] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[94] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -1.0  , 0.0 );
                        kernels[95] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -1.0  , 0.0 );
                        kernels[96] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[97] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[98] = compute_kernel(x,   -0.139240506329  , -10.0  , -44.5  , -1.126742712294  , 0.0 );
                        kernels[99] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -1.0  , 0.0 );
                        kernels[100] = compute_kernel(x,   0.0  , -1.0  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[101] = compute_kernel(x,   -0.012658227848  , -1.111111111111  , -39.5  , -1.0  , 0.0 );
                        kernels[102] = compute_kernel(x,   -0.126582278481  , -9.888888888889  , -40.0  , -1.015209125475  , 0.0 );
                        kernels[103] = compute_kernel(x,   0.0  , -1.0  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[104] = compute_kernel(x,   0.0  , -1.0  , -0.5  , -0.001267427123  , 0.0 );
                        kernels[105] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.987325728771  , 0.0 );
                        kernels[106] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -1.0  , 0.0 );
                        kernels[107] = compute_kernel(x,   -0.012658227848  , -1.111111111111  , -39.5  , -1.0  , 0.0 );
                        kernels[108] = compute_kernel(x,   -0.139240506329  , -10.0  , -40.5  , -1.116603295311  , 0.0 );
                        kernels[109] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[110] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[111] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[112] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[113] = compute_kernel(x,   -0.126582278481  , -9.888888888889  , -40.0  , -1.114068441065  , 0.0 );
                        kernels[114] = compute_kernel(x,   -0.126582278481  , -9.888888888889  , -40.5  , -1.115335868188  , 0.0 );
                        kernels[115] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[116] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -1.0  , 0.0 );
                        kernels[117] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[118] = compute_kernel(x,   -0.012658227848  , -1.111111111111  , -39.5  , -1.0  , 0.0 );
                        kernels[119] = compute_kernel(x,   -0.012658227848  , -1.111111111111  , -39.5  , -0.988593155894  , 0.0 );
                        kernels[120] = compute_kernel(x,   0.0  , -1.0  , -0.5  , -0.001267427123  , 0.0 );
                        kernels[121] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[122] = compute_kernel(x,   0.0  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[123] = compute_kernel(x,   1.0  , 0.111111111111  , 4.5  , 0.024081115336  , 0.0 );
                        kernels[124] = compute_kernel(x,   0.0  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[125] = compute_kernel(x,   1.0  , 0.111111111111  , 4.5  , 0.013941698352  , 0.0 );
                        kernels[126] = compute_kernel(x,   0.0  , -0.111111111111  , -0.5  , -0.987325728771  , 0.0 );
                        kernels[127] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[128] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[129] = compute_kernel(x,   1.0  , 0.111111111111  , 4.5  , 0.024081115336  , 0.0 );
                        kernels[130] = compute_kernel(x,   0.0  , -0.111111111111  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[131] = compute_kernel(x,   0.0  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[132] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[133] = compute_kernel(x,   0.0  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[134] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[135] = compute_kernel(x,   1.0  , 1.0  , 4.5  , 0.013941698352  , 0.0 );
                        kernels[136] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[137] = compute_kernel(x,   0.0  , -0.111111111111  , -0.5  , -0.987325728771  , 0.0 );
                        kernels[138] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[139] = compute_kernel(x,   1.0  , 1.0  , 4.5  , 0.024081115336  , 0.0 );
                        kernels[140] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[141] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[142] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[143] = compute_kernel(x,   0.987341772152  , 0.111111111111  , 0.5  , 0.013941698352  , 0.0 );
                        kernels[144] = compute_kernel(x,   0.0  , -0.111111111111  , -0.5  , -0.987325728771  , 0.0 );
                        kernels[145] = compute_kernel(x,   0.0  , -0.111111111111  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[146] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[147] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[148] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[149] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[150] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[151] = compute_kernel(x,   0.0  , -1.0  , -0.5  , -0.001267427123  , 0.0 );
                        kernels[152] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[153] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[154] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[155] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[156] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , 0.0  , 0.0 );
                        kernels[157] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[158] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[159] = compute_kernel(x,   1.0  , 0.111111111111  , 0.5  , 0.013941698352  , 0.0 );
                        kernels[160] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -1.0  , 0.0 );
                        kernels[161] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[162] = compute_kernel(x,   1.0  , 0.111111111111  , 4.5  , 0.013941698352  , 0.0 );
                        kernels[163] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[164] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[165] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[166] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , 0.0  , 0.0 );
                        kernels[167] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[168] = compute_kernel(x,   1.0  , 0.111111111111  , 0.5  , 0.013941698352  , 0.0 );
                        kernels[169] = compute_kernel(x,   0.987341772152  , 0.111111111111  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[170] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[171] = compute_kernel(x,   1.0  , 0.111111111111  , 4.5  , 0.013941698352  , 0.0 );
                        kernels[172] = compute_kernel(x,   1.0  , 0.111111111111  , 4.5  , 0.013941698352  , 0.0 );
                        kernels[173] = compute_kernel(x,   0.0  , -0.111111111111  , -0.5  , -0.987325728771  , 0.0 );
                        kernels[174] = compute_kernel(x,   0.0  , -0.111111111111  , -0.5  , -0.987325728771  , 0.0 );
                        kernels[175] = compute_kernel(x,   0.0  , 0.0  , 0.0  , 0.0  , 0.0 );
                        kernels[176] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.001267427123  , 0.0 );
                        kernels[177] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.001267427123  , 0.0 );
                        kernels[178] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.001267427123  , 0.0 );
                        kernels[179] = compute_kernel(x,   0.0  , 0.0  , 0.0  , 0.0  , 0.0 );
                        kernels[180] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[181] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , 0.0  , 0.0 );
                        kernels[182] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[183] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[184] = compute_kernel(x,   0.987341772152  , 0.0  , 0.0  , 0.001267427123  , 0.0 );
                        kernels[185] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.001267427123  , 0.0 );
                        kernels[186] = compute_kernel(x,   0.987341772152  , 0.111111111111  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[187] = compute_kernel(x,   0.987341772152  , 0.111111111111  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[188] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[189] = compute_kernel(x,   0.987341772152  , 0.111111111111  , 0.5  , 0.012674271229  , 0.0 );
                        kernels[190] = compute_kernel(x,   1.0  , 0.111111111111  , 4.5  , 0.024081115336  , 0.0 );
                        kernels[191] = compute_kernel(x,   0.987341772152  , 0.0  , 0.0  , 0.001267427123  , 0.0 );
                        kernels[192] = compute_kernel(x,   0.987341772152  , 0.111111111111  , 0.5  , 0.012674271229  , 0.0 );
                        kernels[193] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[194] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.001267427123  , 0.0 );
                        kernels[195] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[196] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.001267427123  , 0.0 );
                        kernels[197] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , 0.0  , 0.0 );
                        kernels[198] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[199] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[200] = compute_kernel(x,   0.0  , -0.111111111111  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[201] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.001267427123  , 0.0 );
                        kernels[202] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[203] = compute_kernel(x,   1.0  , 1.0  , 4.5  , 0.024081115336  , 0.0 );
                        kernels[204] = compute_kernel(x,   1.0  , 1.0  , 4.5  , 0.013941698352  , 0.0 );
                        kernels[205] = compute_kernel(x,   0.987341772152  , 0.0  , 0.0  , 0.0  , 0.0 );
                        kernels[206] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[207] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[208] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.001267427123  , 0.0 );
                        kernels[209] = compute_kernel(x,   0.987341772152  , 0.111111111111  , 0.5  , 0.012674271229  , 0.0 );
                        kernels[210] = compute_kernel(x,   0.0  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[211] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.001267427123  , 0.0 );
                        kernels[212] = compute_kernel(x,   0.987341772152  , 0.111111111111  , 0.5  , 0.012674271229  , 0.0 );
                        kernels[213] = compute_kernel(x,   0.0  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[214] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[215] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[216] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[217] = compute_kernel(x,   1.012658227848  , 1.0  , 5.0  , 0.026615969582  , 0.0 );
                        kernels[218] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.987325728771  , 0.0 );
                        kernels[219] = compute_kernel(x,   0.987341772152  , 0.111111111111  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[220] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[221] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[222] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , 0.0  , 0.0 );
                        kernels[223] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , 0.0  , 0.0 );
                        kernels[224] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[225] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[226] = compute_kernel(x,   0.0  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[227] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[228] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , -0.001267427123  , 0.0 );
                        kernels[229] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        kernels[230] = compute_kernel(x,   0.0  , -1.0  , -0.5  , -0.988593155894  , 0.0 );
                        kernels[231] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , 0.0  , 0.0 );
                        kernels[232] = compute_kernel(x,   1.113924050633  , 1.222222222222  , 5.5  , 0.138149556401  , 0.0 );
                        kernels[233] = compute_kernel(x,   1.0  , 0.111111111111  , 4.5  , 0.013941698352  , 0.0 );
                        kernels[234] = compute_kernel(x,   0.0  , -0.111111111111  , 0.0  , 0.0  , 0.0 );
                        kernels[235] = compute_kernel(x,   -0.012658227848  , -1.0  , -0.5  , -0.989860583016  , 0.0 );
                        kernels[236] = compute_kernel(x,   0.987341772152  , 0.0  , 0.0  , 0.0  , 0.0 );
                        kernels[237] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.001267427123  , 0.0 );
                        kernels[238] = compute_kernel(x,   0.987341772152  , 0.111111111111  , 0.5  , 0.012674271229  , 0.0 );
                        kernels[239] = compute_kernel(x,   0.987341772152  , 0.0  , 0.5  , 0.011406844106  , 0.0 );
                        decisions[0] = 0.611427171424
                        + kernels[2]
                        + kernels[3]
                        + kernels[7]
                        + kernels[8]
                        + kernels[9] * 0.388641397309
                        + kernels[13]
                        + kernels[15]
                        + kernels[18]
                        + kernels[19]
                        + kernels[20]
                        + kernels[21]
                        + kernels[22] * 0.243698118384
                        + kernels[25]
                        + kernels[26]
                        + kernels[32]
                        + kernels[34]
                        + kernels[36] * 0.388810940818
                        + kernels[38] * 0.342725511274
                        + kernels[41] * 0.388604413361
                        + kernels[42] * 0.917848116204
                        + kernels[43] * 0.388810546388
                        + kernels[44] * 0.142872833847
                        + kernels[47] * 0.294762708357
                        + kernels[49]
                        + kernels[51]
                        + kernels[52] * 0.388549163289
                        + kernels[54] * 0.388960496264
                        + kernels[55]
                        + kernels[56]
                        + kernels[57] * 0.388604413361
                        + kernels[59] * 0.388711671008
                        + kernels[60]
                        + kernels[61]
                        + kernels[64]
                        + kernels[66] * 0.191520640956
                        + kernels[68] * 0.342289693852
                        + kernels[70] * 0.830006078577
                        + kernels[71] * 0.858406560826
                        + kernels[73]
                        + kernels[75]
                        + kernels[76] * 0.388594939657
                        + kernels[77] * 0.197921635057
                        + kernels[78]
                        + kernels[80]
                        + kernels[82]
                        - kernels[83]
                        - kernels[84]
                        - kernels[85]
                        - kernels[86]
                        - kernels[87]
                        - kernels[88]
                        + kernels[89] * -0.867378586208
                        - kernels[90]
                        - kernels[91]
                        - kernels[92]
                        - kernels[93]
                        - kernels[94]
                        - kernels[95]
                        - kernels[96]
                        - kernels[97]
                        - kernels[98]
                        - kernels[99]
                        - kernels[100]
                        + kernels[101] * -0.861708747976
                        + kernels[102] * -0.826768331329
                        - kernels[103]
                        + kernels[105] * -0.125191733916
                        - kernels[106]
                        - kernels[107]
                        + kernels[108] * -0.815663583417
                        - kernels[109]
                        - kernels[110]
                        - kernels[111]
                        - kernels[112]
                        + kernels[113] * -0.032968939473
                        + kernels[114] * -0.04537944649
                        - kernels[115]
                        - kernels[116]
                        - kernels[117]
                        + kernels[118] * -0.994317853059
                        - kernels[119]
                        + kernels[120] * -0.290962656921
                        - kernels[121]
                        ;
                        decisions[1] = 0.875855078195
                        + kernels[1]
                        + kernels[3]
                        + kernels[4]
                        + kernels[5]
                        + kernels[6] * 0.541410304488
                        + kernels[7]
                        + kernels[8]
                        + kernels[9] * 0.124041155634
                        + kernels[10] * 0.533445342903
                        + kernels[11]
                        + kernels[12]
                        + kernels[13]
                        + kernels[14]
                        + kernels[15] * 0.000729645654
                        + kernels[16]
                        + kernels[17]
                        + kernels[20] * 0.283534750635
                        + kernels[23]
                        + kernels[24]
                        + kernels[25]
                        + kernels[26]
                        + kernels[27]
                        + kernels[28]
                        + kernels[29]
                        + kernels[30]
                        + kernels[31]
                        + kernels[32]
                        + kernels[33]
                        + kernels[34]
                        + kernels[35]
                        + kernels[36] * 0.124207983082
                        + kernels[37]
                        + kernels[38] * 0.109343657153
                        + kernels[39]
                        + kernels[41] * 0.124331772403
                        + kernels[42]
                        + kernels[43] * 0.124541216767
                        + kernels[45]
                        + kernels[46]
                        + kernels[48]
                        + kernels[50]
                        + kernels[51]
                        + kernels[52] * 0.124331772403
                        + kernels[53]
                        + kernels[54] * 0.123844862943
                        + kernels[55]
                        + kernels[56]
                        + kernels[57] * 0.124099080988
                        + kernels[58]
                        + kernels[59] * 0.124060656436
                        + kernels[60]
                        + kernels[61] * 0.123488229903
                        + kernels[62]
                        + kernels[63]
                        + kernels[65]
                        + kernels[66] * 0.062049540494
                        + kernels[67] * 0.116777638046
                        + kernels[68] * 0.109046808323
                        + kernels[69] * 0.566455603449
                        + kernels[70]
                        + kernels[71]
                        + kernels[72]
                        + kernels[73]
                        + kernels[74]
                        + kernels[76] * 0.124119623312
                        + kernels[77] * 0.062049540494
                        + kernels[78]
                        + kernels[81] * 0.850013204362
                        - kernels[122]
                        - kernels[123]
                        - kernels[124]
                        - kernels[125]
                        + kernels[126] * -0.299920799141
                        - kernels[127]
                        - kernels[128]
                        - kernels[129]
                        - kernels[130]
                        - kernels[131]
                        - kernels[132]
                        - kernels[133]
                        - kernels[134]
                        - kernels[135]
                        + kernels[136] * -0.052778133068
                        - kernels[137]
                        - kernels[139]
                        - kernels[140]
                        - kernels[141]
                        - kernels[142]
                        - kernels[144]
                        - kernels[145]
                        - kernels[147]
                        - kernels[148]
                        - kernels[149]
                        - kernels[151]
                        - kernels[154]
                        - kernels[157]
                        - kernels[160]
                        - kernels[162]
                        - kernels[163]
                        - kernels[165]
                        - kernels[167]
                        + kernels[169] * -0.134872330979
                        - kernels[170]
                        - kernels[171]
                        - kernels[172]
                        - kernels[173]
                        + kernels[174] * -0.996140189966
                        + kernels[176] * -0.387540249303
                        - kernels[177]
                        - kernels[178]
                        - kernels[180]
                        - kernels[183]
                        - kernels[185]
                        - kernels[186]
                        - kernels[187]
                        - kernels[188]
                        - kernels[190]
                        - kernels[193]
                        - kernels[194]
                        - kernels[195]
                        + kernels[196] * -0.604670687416
                        - kernels[198]
                        - kernels[199]
                        ;
                        decisions[2] = 0.897536563465
                        + kernels[0] * 0.578141876556
                        + kernels[1]
                        + kernels[3] * 0.381666956575
                        + kernels[5]
                        + kernels[7]
                        + kernels[8]
                        + kernels[9] * 0.102613389751
                        + kernels[13]
                        + kernels[15] * 0.005746445549
                        + kernels[17]
                        + kernels[25]
                        + kernels[26]
                        + kernels[28]
                        + kernels[29]
                        + kernels[32]
                        + kernels[33] * 0.065353819173
                        + kernels[34]
                        + kernels[36] * 0.102858020598
                        + kernels[38] * 0.089993225184
                        + kernels[40]
                        + kernels[41] * 0.102565843121
                        + kernels[42]
                        + kernels[43] * 0.102422024755
                        + kernels[45]
                        + kernels[46]
                        + kernels[48]
                        + kernels[50]
                        + kernels[52] * 0.102858020598
                        + kernels[53] * 0.636864849376
                        + kernels[54] * 0.10258804795
                        + kernels[55]
                        + kernels[56]
                        + kernels[57] * 0.102613389751
                        + kernels[58]
                        + kernels[59] * 0.102776210253
                        + kernels[61] * 0.096819857912
                        + kernels[63]
                        + kernels[65]
                        + kernels[66] * 0.019706716933
                        + kernels[68] * 0.090173284765
                        + kernels[69] * 0.981954144049
                        + kernels[70]
                        + kernels[72] * 0.968327779533
                        + kernels[73]
                        + kernels[74] * 0.254429487223
                        + kernels[76] * 0.102569657735
                        + kernels[77] * 0.082964733841
                        + kernels[78] * 0.998713055558
                        + kernels[79] * 0.009274693827
                        + kernels[81]
                        - kernels[200]
                        - kernels[201]
                        - kernels[202]
                        - kernels[203]
                        - kernels[204]
                        - kernels[206]
                        - kernels[208]
                        - kernels[210]
                        - kernels[211]
                        - kernels[213]
                        - kernels[214]
                        - kernels[215]
                        - kernels[216]
                        - kernels[217]
                        - kernels[218]
                        + kernels[219] * -0.968941563701
                        - kernels[220]
                        - kernels[221]
                        - kernels[222]
                        - kernels[223]
                        - kernels[224]
                        + kernels[225] * -0.889785891977
                        - kernels[226]
                        - kernels[227]
                        - kernels[228]
                        - kernels[230]
                        - kernels[231]
                        - kernels[232]
                        - kernels[233]
                        - kernels[234]
                        - kernels[235]
                        + kernels[236] * -0.325268074887
                        - kernels[237]
                        ;
                        decisions[3] = 0.266249321083
                        + kernels[84] * 0.401682871712
                        + kernels[85]
                        + kernels[89] * 0.391514111321
                        + kernels[92]
                        + kernels[94]
                        + kernels[95]
                        + kernels[98] * 0.733385612677
                        + kernels[99]
                        + kernels[100] * 0.890249881811
                        + kernels[102] * 0.37254427483
                        + kernels[103] * 0.856228502046
                        + kernels[104] * 0.071228074812
                        + kernels[106]
                        + kernels[108] * 0.369524555548
                        + kernels[109] * 0.537899502849
                        + kernels[110]
                        + kernels[111]
                        + kernels[112]
                        + kernels[113] * 0.01903995754
                        + kernels[114] * 0.022617589356
                        + kernels[115]
                        + kernels[116]
                        + kernels[117]
                        + kernels[119] * 0.392760291139
                        + kernels[120]
                        - kernels[122]
                        - kernels[124]
                        - kernels[130]
                        - kernels[131]
                        - kernels[132]
                        - kernels[133]
                        - kernels[134]
                        + kernels[135] * -0.015085067803
                        + kernels[139] * -0.741899165353
                        + kernels[145] * -0.962573927413
                        - kernels[147]
                        - kernels[151]
                        + kernels[156] * -0.587488716011
                        - kernels[160]
                        - kernels[166]
                        - kernels[170]
                        + kernels[172] * -0.755388721633
                        - kernels[181]
                        + kernels[182] * -0.764425096713
                        + kernels[190] * -0.000567151336
                        + kernels[197] * -0.966566583051
                        + kernels[198] * -0.264680796329
                        ;
                        decisions[4] = 0.214503814774
                        + kernels[84] * 0.974782952777
                        + kernels[85]
                        + kernels[89] * 0.421149899942
                        + kernels[92]
                        + kernels[94]
                        + kernels[95]
                        + kernels[98] * 0.784907815639
                        + kernels[99]
                        + kernels[100]
                        + kernels[102] * 0.420298891983
                        + kernels[103] * 0.73876392504
                        + kernels[106]
                        + kernels[108] * 0.397337989464
                        + kernels[110]
                        + kernels[111]
                        + kernels[112]
                        + kernels[114] * 0.021074863041
                        + kernels[115] * 0.904607688366
                        + kernels[116]
                        + kernels[117]
                        + kernels[119] * 0.418722197398
                        + kernels[120] * 0.11784005286
                        - kernels[200]
                        - kernels[202]
                        + kernels[204] * -0.151081134979
                        - kernels[210]
                        - kernels[213]
                        + kernels[214] * -0.095182728435
                        - kernels[216]
                        - kernels[218]
                        - kernels[221]
                        + kernels[222] * -0.689813032107
                        - kernels[223]
                        - kernels[226]
                        - kernels[227]
                        - kernels[230]
                        - kernels[231]
                        + kernels[232] * -0.856683088688
                        + kernels[233] * -0.836114151513
                        + kernels[234] * -0.898430544918
                        - kernels[235]
                        + kernels[239] * -0.672181595872
                        ;
                        decisions[5] = 0.661475533249
                        + kernels[122]
                        + kernels[123] * 0.273270030943
                        + kernels[124]
                        + kernels[129]
                        + kernels[130] * 0.120866656384
                        + kernels[131]
                        + kernels[132]
                        + kernels[133]
                        + kernels[134]
                        + kernels[135]
                        + kernels[138] * 0.380421201443
                        + kernels[139]
                        + kernels[140]
                        + kernels[143]
                        + kernels[145] * 0.967904839241
                        + kernels[146]
                        + kernels[147]
                        + kernels[150]
                        + kernels[151] * 0.400869743431
                        + kernels[152]
                        + kernels[153]
                        + kernels[155]
                        + kernels[156]
                        + kernels[157]
                        + kernels[158]
                        + kernels[159]
                        + kernels[160]
                        + kernels[161]
                        + kernels[163]
                        + kernels[164]
                        + kernels[166]
                        + kernels[168]
                        + kernels[170]
                        + kernels[175] * 0.852707788608
                        + kernels[179]
                        + kernels[181]
                        + kernels[182]
                        + kernels[184]
                        + kernels[189] * 0.936718673679
                        + kernels[190] * 0.982409036657
                        + kernels[191] * 0.916309017333
                        + kernels[192] * 0.001364890888
                        + kernels[193]
                        + kernels[195] * 0.010808208159
                        + kernels[197]
                        + kernels[198] * 0.156349913234
                        - kernels[200]
                        - kernels[201]
                        - kernels[202]
                        - kernels[203]
                        - kernels[204]
                        - kernels[205]
                        - kernels[206]
                        - kernels[207]
                        - kernels[208]
                        - kernels[209]
                        - kernels[210]
                        - kernels[211]
                        - kernels[212]
                        - kernels[213]
                        - kernels[214]
                        - kernels[215]
                        - kernels[216]
                        - kernels[217]
                        - kernels[218]
                        - kernels[219]
                        - kernels[220]
                        - kernels[221]
                        - kernels[222]
                        - kernels[223]
                        - kernels[224]
                        - kernels[225]
                        - kernels[226]
                        - kernels[227]
                        - kernels[228]
                        - kernels[229]
                        - kernels[230]
                        - kernels[231]
                        - kernels[232]
                        - kernels[233]
                        - kernels[234]
                        - kernels[235]
                        - kernels[236]
                        - kernels[237]
                        - kernels[238]
                        - kernels[239]
                        ;
                        votes[decisions[0] > 0 ? 0 : 1] += 1;
                        votes[decisions[1] > 0 ? 0 : 2] += 1;
                        votes[decisions[2] > 0 ? 0 : 3] += 1;
                        votes[decisions[3] > 0 ? 1 : 2] += 1;
                        votes[decisions[4] > 0 ? 1 : 3] += 1;
                        votes[decisions[5] > 0 ? 2 : 3] += 1;
                        int val = votes[0];
                        int idx = 0;

                        for (int i = 1; i < 4; i++) {
                            if (votes[i] > val) {
                                val = votes[i];
                                idx = i;
                            }
                        }

                        return idx;
                    }

                protected:
                    /**
                    * Compute kernel between feature vector and support vector.
                    * Kernel type: rbf
                    */
                    float compute_kernel(float *x, ...) {
                        va_list w;
                        va_start(w, 5);
                        float kernel = 0.0;

                        for (uint16_t i = 0; i < 5; i++) {
                            kernel += pow(x[i] - va_arg(w, double), 2);
                        }

                        return exp(-0.5 * kernel);
                    }
                };
            }
        }
    }