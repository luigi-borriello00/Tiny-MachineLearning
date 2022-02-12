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
                        float kernels[287] = { 0 };
                        float decisions[6] = { 0 };
                        int votes[4] = { 0 };
                        kernels[0] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1002.0  , 0.0 );
                        kernels[1] = compute_kernel(x,   21.0  , 102.0  , 101.0  , 222.0  , 0.0 );
                        kernels[2] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1010.0  , 0.0 );
                        kernels[3] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[4] = compute_kernel(x,   21.0  , 110.0  , 101.0  , 221.0  , 0.0 );
                        kernels[5] = compute_kernel(x,   102.0  , 120.0  , 112.0  , 1102.0  , 0.0 );
                        kernels[6] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[7] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[8] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1010.0  , 0.0 );
                        kernels[9] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[10] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[11] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[12] = compute_kernel(x,   110.0  , 122.0  , 120.0  , 1120.0  , 111.0 );
                        kernels[13] = compute_kernel(x,   100.0  , 112.0  , 111.0  , 1012.0  , 0.0 );
                        kernels[14] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[15] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[16] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[17] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[18] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[19] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[20] = compute_kernel(x,   20.0  , 101.0  , 22.0  , 211.0  , 0.0 );
                        kernels[21] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[22] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[23] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 212.0  , 0.0 );
                        kernels[24] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[25] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[26] = compute_kernel(x,   21.0  , 101.0  , 22.0  , 211.0  , 0.0 );
                        kernels[27] = compute_kernel(x,   101.0  , 112.0  , 111.0  , 1022.0  , 0.0 );
                        kernels[28] = compute_kernel(x,   22.0  , 111.0  , 110.0  , 1002.0  , 0.0 );
                        kernels[29] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[30] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[31] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[32] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 222.0  , 0.0 );
                        kernels[33] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[34] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[35] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[36] = compute_kernel(x,   100.0  , 111.0  , 110.0  , 1011.0  , 0.0 );
                        kernels[37] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[38] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1001.0  , 0.0 );
                        kernels[39] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[40] = compute_kernel(x,   100.0  , 111.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[41] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[42] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[43] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[44] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[45] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[46] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1010.0  , 0.0 );
                        kernels[47] = compute_kernel(x,   111.0  , 200.0  , 121.0  , 1200.0  , 1201.0 );
                        kernels[48] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1001.0  , 0.0 );
                        kernels[49] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1021.0  , 0.0 );
                        kernels[50] = compute_kernel(x,   112.0  , 200.0  , 121.0  , 1201.0  , 2022.0 );
                        kernels[51] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[52] = compute_kernel(x,   111.0  , 200.0  , 121.0  , 1200.0  , 1222.0 );
                        kernels[53] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[54] = compute_kernel(x,   111.0  , 200.0  , 121.0  , 1201.0  , 2002.0 );
                        kernels[55] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1011.0  , 0.0 );
                        kernels[56] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[57] = compute_kernel(x,   100.0  , 111.0  , 110.0  , 1010.0  , 0.0 );
                        kernels[58] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[59] = compute_kernel(x,   101.0  , 120.0  , 111.0  , 1021.0  , 0.0 );
                        kernels[60] = compute_kernel(x,   102.0  , 121.0  , 112.0  , 1110.0  , 0.0 );
                        kernels[61] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[62] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[63] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 211.0  , 0.0 );
                        kernels[64] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[65] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[66] = compute_kernel(x,   110.0  , 122.0  , 120.0  , 1121.0  , 1011.0 );
                        kernels[67] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[68] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[69] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[70] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1001.0  , 0.0 );
                        kernels[71] = compute_kernel(x,   110.0  , 122.0  , 120.0  , 1121.0  , 210.0 );
                        kernels[72] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[73] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1011.0  , 0.0 );
                        kernels[74] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[75] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[76] = compute_kernel(x,   111.0  , 122.0  , 121.0  , 1122.0  , 1102.0 );
                        kernels[77] = compute_kernel(x,   100.0  , 111.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[78] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[79] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[80] = compute_kernel(x,   21.0  , 101.0  , 22.0  , 211.0  , 0.0 );
                        kernels[81] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[82] = compute_kernel(x,   101.0  , 112.0  , 111.0  , 1022.0  , 0.0 );
                        kernels[83] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[84] = compute_kernel(x,   21.0  , 102.0  , 101.0  , 222.0  , 0.0 );
                        kernels[85] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[86] = compute_kernel(x,   110.0  , 122.0  , 120.0  , 1120.0  , 10.0 );
                        kernels[87] = compute_kernel(x,   22.0  , 110.0  , 102.0  , 1001.0  , 0.0 );
                        kernels[88] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[89] = compute_kernel(x,   101.0  , 120.0  , 111.0  , 1100.0  , 0.0 );
                        kernels[90] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1011.0  , 0.0 );
                        kernels[91] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[92] = compute_kernel(x,   100.0  , 112.0  , 111.0  , 1021.0  , 0.0 );
                        kernels[93] = compute_kernel(x,   21.0  , 110.0  , 101.0  , 221.0  , 0.0 );
                        kernels[94] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[95] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[96] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[97] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1010.0  , 0.0 );
                        kernels[98] = compute_kernel(x,   21.0  , 102.0  , 101.0  , 222.0  , 0.0 );
                        kernels[99] = compute_kernel(x,   111.0  , 200.0  , 121.0  , 1200.0  , 1100.0 );
                        kernels[100] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[101] = compute_kernel(x,   22.0  , 112.0  , 110.0  , 1002.0  , 0.0 );
                        kernels[102] = compute_kernel(x,   22.0  , 102.0  , 101.0  , 222.0  , 0.0 );
                        kernels[103] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[104] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 211.0  , 0.0 );
                        kernels[105] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[106] = compute_kernel(x,   21.0  , 102.0  , 101.0  , 222.0  , 0.0 );
                        kernels[107] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[108] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 220.0  , 0.0 );
                        kernels[109] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[110] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[111] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[112] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 1000.0  , 0.0 );
                        kernels[113] = compute_kernel(x,   12.0  , 100.0  , 21.0  , 200.0  , 0.0 );
                        kernels[114] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 212.0  , 0.0 );
                        kernels[115] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[116] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[117] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[118] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[119] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[120] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 1000.0  , 0.0 );
                        kernels[121] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 1000.0  , 0.0 );
                        kernels[122] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[123] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[124] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[125] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 222.0  , 0.0 );
                        kernels[126] = compute_kernel(x,   11.0  , 21.0  , 12.0  , 112.0  , 0.0 );
                        kernels[127] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[128] = compute_kernel(x,   22.0  , 102.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[129] = compute_kernel(x,   21.0  , 101.0  , 22.0  , 212.0  , 0.0 );
                        kernels[130] = compute_kernel(x,   12.0  , 22.0  , 21.0  , 200.0  , 0.0 );
                        kernels[131] = compute_kernel(x,   12.0  , 22.0  , 21.0  , 200.0  , 0.0 );
                        kernels[132] = compute_kernel(x,   22.0  , 102.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[133] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 1000.0  , 0.0 );
                        kernels[134] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 222.0  , 0.0 );
                        kernels[135] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 212.0  , 0.0 );
                        kernels[136] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[137] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 212.0  , 0.0 );
                        kernels[138] = compute_kernel(x,   21.0  , 101.0  , 22.0  , 212.0  , 0.0 );
                        kernels[139] = compute_kernel(x,   20.0  , 100.0  , 21.0  , 201.0  , 0.0 );
                        kernels[140] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[141] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[142] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[143] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[144] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 212.0  , 0.0 );
                        kernels[145] = compute_kernel(x,   12.0  , 22.0  , 21.0  , 122.0  , 0.0 );
                        kernels[146] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[147] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[148] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[149] = compute_kernel(x,   21.0  , 101.0  , 22.0  , 212.0  , 0.0 );
                        kernels[150] = compute_kernel(x,   21.0  , 101.0  , 22.0  , 221.0  , 0.0 );
                        kernels[151] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 1000.0  , 0.0 );
                        kernels[152] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[153] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[154] = compute_kernel(x,   22.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[155] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[156] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[157] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[158] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[159] = compute_kernel(x,   22.0  , 110.0  , 100.0  , 222.0  , 0.0 );
                        kernels[160] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[161] = compute_kernel(x,   22.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[162] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[163] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[164] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[165] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[166] = compute_kernel(x,   22.0  , 110.0  , 100.0  , 221.0  , 0.0 );
                        kernels[167] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[168] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[169] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[170] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[171] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[172] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[173] = compute_kernel(x,   22.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[174] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[175] = compute_kernel(x,   101.0  , 120.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[176] = compute_kernel(x,   22.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[177] = compute_kernel(x,   22.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[178] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[179] = compute_kernel(x,   22.0  , 110.0  , 100.0  , 222.0  , 0.0 );
                        kernels[180] = compute_kernel(x,   101.0  , 120.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[181] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[182] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[183] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[184] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[185] = compute_kernel(x,   22.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[186] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1012.0  , 0.0 );
                        kernels[187] = compute_kernel(x,   22.0  , 110.0  , 100.0  , 222.0  , 0.0 );
                        kernels[188] = compute_kernel(x,   22.0  , 110.0  , 100.0  , 221.0  , 0.0 );
                        kernels[189] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[190] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[191] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[192] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 1000.0  , 0.0 );
                        kernels[193] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[194] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[195] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[196] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[197] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[198] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[199] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[200] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[201] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[202] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[203] = compute_kernel(x,   101.0  , 112.0  , 102.0  , 1012.0  , 0.0 );
                        kernels[204] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[205] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[206] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[207] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[208] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[209] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[210] = compute_kernel(x,   22.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[211] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[212] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[213] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[214] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[215] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[216] = compute_kernel(x,   101.0  , 112.0  , 102.0  , 1012.0  , 0.0 );
                        kernels[217] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[218] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[219] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[220] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[221] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[222] = compute_kernel(x,   22.0  , 110.0  , 100.0  , 222.0  , 0.0 );
                        kernels[223] = compute_kernel(x,   22.0  , 110.0  , 100.0  , 222.0  , 0.0 );
                        kernels[224] = compute_kernel(x,   22.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[225] = compute_kernel(x,   22.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[226] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[227] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[228] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[229] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[230] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[231] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[232] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[233] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[234] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[235] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[236] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[237] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[238] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[239] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[240] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[241] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[242] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[243] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[244] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[245] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[246] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[247] = compute_kernel(x,   22.0  , 110.0  , 100.0  , 221.0  , 0.0 );
                        kernels[248] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[249] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[250] = compute_kernel(x,   101.0  , 120.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[251] = compute_kernel(x,   101.0  , 120.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[252] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[253] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[254] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[255] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[256] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[257] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[258] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[259] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[260] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[261] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[262] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[263] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[264] = compute_kernel(x,   102.0  , 120.0  , 111.0  , 1022.0  , 0.0 );
                        kernels[265] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[266] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[267] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[268] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[269] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[270] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[271] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[272] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[273] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[274] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[275] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[276] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[277] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[278] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[279] = compute_kernel(x,   110.0  , 122.0  , 112.0  , 1110.0  , 0.0 );
                        kernels[280] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[281] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[282] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[283] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[284] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[285] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[286] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        decisions[0] = 0.472148867517
                        + kernels[0] * 0.305165441246
                        + kernels[1]
                        + kernels[3]
                        + kernels[4]
                        + kernels[9]
                        + kernels[11]
                        + kernels[12] * 0.527864965055
                        + kernels[17]
                        + kernels[20]
                        + kernels[22]
                        + kernels[23]
                        + kernels[24]
                        + kernels[25]
                        + kernels[26]
                        + kernels[32]
                        + kernels[33]
                        + kernels[35]
                        + kernels[41] * 0.439255251301
                        + kernels[42]
                        + kernels[44]
                        + kernels[45]
                        + kernels[47] * 0.321073366046
                        + kernels[48] * 0.992497018978
                        + kernels[50] * 0.316185386452
                        + kernels[52] * 0.321127843975
                        + kernels[53]
                        + kernels[54] * 0.316089476007
                        + kernels[58]
                        + kernels[59] * 0.201838781873
                        + kernels[62]
                        + kernels[63]
                        + kernels[64]
                        + kernels[65]
                        + kernels[66] * 0.527699276957
                        + kernels[70] * 0.97395510229
                        + kernels[71] * 0.52787881182
                        + kernels[72]
                        + kernels[75]
                        + kernels[76] * 0.528224340892
                        + kernels[78] * 0.002138518336
                        + kernels[79]
                        + kernels[80]
                        + kernels[82] * 0.131018900692
                        + kernels[84]
                        + kernels[86] * 0.349139128013
                        + kernels[87]
                        + kernels[89] * 0.348232444082
                        + kernels[91]
                        + kernels[93]
                        + kernels[94] * 0.975173266195
                        + kernels[96]
                        + kernels[98]
                        + kernels[99] * 0.528058396034
                        + kernels[100]
                        + kernels[102]
                        + kernels[104]
                        - kernels[105]
                        - kernels[106]
                        - kernels[107]
                        - kernels[108]
                        - kernels[109]
                        - kernels[110]
                        - kernels[111]
                        - kernels[112]
                        + kernels[113] * -0.94991616989
                        + kernels[114] * -0.77112962442
                        - kernels[115]
                        - kernels[116]
                        - kernels[117]
                        - kernels[118]
                        - kernels[119]
                        - kernels[120]
                        - kernels[121]
                        - kernels[122]
                        - kernels[123]
                        - kernels[124]
                        - kernels[125]
                        + kernels[126] * -0.810561464851
                        - kernels[127]
                        - kernels[128]
                        + kernels[129] * -0.221376777145
                        + kernels[130] * -0.466668528589
                        - kernels[131]
                        - kernels[132]
                        - kernels[133]
                        - kernels[134]
                        - kernels[135]
                        - kernels[136]
                        - kernels[137]
                        - kernels[138]
                        + kernels[139] * -0.713168566264
                        - kernels[140]
                        - kernels[141]
                        - kernels[142]
                        - kernels[143]
                        + kernels[144] * -0.977015478544
                        + kernels[145] * -0.794034751565
                        - kernels[146]
                        - kernels[147]
                        - kernels[148]
                        + kernels[149] * -0.928744354976
                        - kernels[150]
                        - kernels[151]
                        - kernels[152]
                        ;
                        decisions[1] = 0.825536853658
                        + kernels[0]
                        + kernels[2]
                        + kernels[4]
                        + kernels[6] * 0.131230085355
                        + kernels[7]
                        + kernels[8]
                        + kernels[9] * 0.641289286812
                        + kernels[10]
                        + kernels[11]
                        + kernels[12] * 0.174848964064
                        + kernels[13]
                        + kernels[14]
                        + kernels[15]
                        + kernels[16]
                        + kernels[17]
                        + kernels[18]
                        + kernels[19]
                        + kernels[20] * 0.008183851609
                        + kernels[21]
                        + kernels[22]
                        + kernels[25] * 0.47452765553
                        + kernels[27] * 0.59991732052
                        + kernels[28]
                        + kernels[29]
                        + kernels[30]
                        + kernels[31]
                        + kernels[32]
                        + kernels[33]
                        + kernels[34]
                        + kernels[35]
                        + kernels[36]
                        + kernels[37]
                        + kernels[38]
                        + kernels[39]
                        + kernels[40]
                        + kernels[41]
                        + kernels[42]
                        + kernels[43]
                        + kernels[44]
                        + kernels[45]
                        + kernels[46]
                        + kernels[47] * 0.105869067896
                        + kernels[48]
                        + kernels[49]
                        + kernels[50] * 0.10437651849
                        + kernels[51]
                        + kernels[52] * 0.106302418517
                        + kernels[53]
                        + kernels[54] * 0.104530844876
                        + kernels[55]
                        + kernels[56]
                        + kernels[57]
                        + kernels[58]
                        + kernels[59]
                        + kernels[61]
                        + kernels[62]
                        + kernels[64]
                        + kernels[66] * 0.17437389351
                        + kernels[67]
                        + kernels[68]
                        + kernels[69]
                        + kernels[70]
                        + kernels[71] * 0.174365930613
                        + kernels[72]
                        + kernels[73]
                        + kernels[74]
                        + kernels[75]
                        + kernels[76] * 0.174113774745
                        + kernels[77]
                        + kernels[78]
                        + kernels[79] * 0.965346917033
                        + kernels[80] * 0.167758693784
                        + kernels[81]
                        + kernels[82] * 0.389250670786
                        + kernels[83]
                        + kernels[85]
                        + kernels[86] * 0.117638903696
                        + kernels[87]
                        + kernels[88]
                        + kernels[89] * 0.111508039252
                        + kernels[90]
                        + kernels[91]
                        + kernels[92]
                        + kernels[93]
                        + kernels[94]
                        + kernels[95]
                        + kernels[96]
                        + kernels[97]
                        + kernels[99] * 0.174154180649
                        + kernels[100]
                        + kernels[101]
                        + kernels[102]
                        + kernels[103]
                        - kernels[153]
                        - kernels[154]
                        - kernels[155]
                        - kernels[156]
                        - kernels[157]
                        - kernels[159]
                        - kernels[160]
                        - kernels[161]
                        - kernels[164]
                        - kernels[165]
                        - kernels[166]
                        - kernels[167]
                        - kernels[168]
                        - kernels[169]
                        - kernels[171]
                        - kernels[172]
                        - kernels[173]
                        + kernels[174] * -0.950733297482
                        - kernels[175]
                        - kernels[176]
                        - kernels[177]
                        - kernels[178]
                        - kernels[179]
                        - kernels[180]
                        - kernels[181]
                        - kernels[182]
                        - kernels[183]
                        - kernels[185]
                        - kernels[186]
                        - kernels[187]
                        - kernels[188]
                        - kernels[189]
                        - kernels[190]
                        - kernels[191]
                        + kernels[194] * -0.095362867723
                        - kernels[195]
                        - kernels[196]
                        - kernels[197]
                        - kernels[198]
                        - kernels[199]
                        - kernels[200]
                        - kernels[202]
                        - kernels[203]
                        + kernels[204] * -0.153178111377
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
                        - kernels[234]
                        - kernels[235]
                        - kernels[236]
                        - kernels[237]
                        + kernels[238] * -0.491900528849
                        - kernels[239]
                        + kernels[240] * -0.14830664645
                        - kernels[241]
                        - kernels[242]
                        - kernels[243]
                        - kernels[244]
                        - kernels[245]
                        + kernels[246] * -0.060105565858
                        ;
                        decisions[2] = 0.885357712646
                        + kernels[0]
                        + kernels[2]
                        + kernels[5] * 0.324713963986
                        + kernels[7]
                        + kernels[8]
                        + kernels[12] * 0.114552056954
                        + kernels[17] * 0.408486331699
                        + kernels[20] * 0.009201804532
                        + kernels[21]
                        + kernels[22]
                        + kernels[23] * 0.088582144032
                        + kernels[32]
                        + kernels[33]
                        + kernels[34]
                        + kernels[35]
                        + kernels[36]
                        + kernels[37]
                        + kernels[42]
                        + kernels[44]
                        + kernels[45]
                        + kernels[46]
                        + kernels[47] * 0.070353461667
                        + kernels[50] * 0.068084758378
                        + kernels[52] * 0.069382529273
                        + kernels[53]
                        + kernels[54] * 0.069364740828
                        + kernels[55]
                        + kernels[57]
                        + kernels[58]
                        + kernels[60] * 0.511975849292
                        + kernels[62]
                        + kernels[64]
                        + kernels[65]
                        + kernels[66] * 0.114618621477
                        + kernels[71] * 0.114588888361
                        + kernels[72]
                        + kernels[73]
                        + kernels[74]
                        + kernels[75]
                        + kernels[76] * 0.11424350932
                        + kernels[77] * 0.554772659869
                        + kernels[78]
                        + kernels[80] * 0.105661890424
                        + kernels[85]
                        + kernels[86] * 0.327934519691
                        + kernels[87] * 0.973080906641
                        + kernels[90]
                        + kernels[91]
                        + kernels[94] * 0.132974723751
                        + kernels[96]
                        + kernels[97]
                        + kernels[99] * 0.114531635222
                        + kernels[100]
                        + kernels[102] * 0.970781423343
                        + kernels[103] * 0.157072499461
                        + kernels[104] * 0.585041081799
                        - kernels[247]
                        - kernels[248]
                        - kernels[249]
                        - kernels[250]
                        - kernels[251]
                        - kernels[252]
                        - kernels[253]
                        - kernels[254]
                        - kernels[255]
                        - kernels[256]
                        - kernels[257]
                        - kernels[258]
                        - kernels[259]
                        - kernels[260]
                        - kernels[261]
                        - kernels[262]
                        - kernels[263]
                        - kernels[264]
                        - kernels[265]
                        - kernels[266]
                        - kernels[267]
                        - kernels[268]
                        - kernels[269]
                        - kernels[270]
                        - kernels[271]
                        - kernels[272]
                        - kernels[273]
                        - kernels[274]
                        - kernels[275]
                        - kernels[276]
                        - kernels[277]
                        - kernels[278]
                        - kernels[279]
                        - kernels[280]
                        - kernels[281]
                        - kernels[282]
                        - kernels[283]
                        - kernels[284]
                        - kernels[285]
                        - kernels[286]
                        ;
                        decisions[3] = 0.205359404588
                        + kernels[105]
                        + kernels[106]
                        + kernels[108]
                        + kernels[109]
                        + kernels[110]
                        + kernels[111]
                        + kernels[112]
                        + kernels[113] * 0.494607243051
                        + kernels[115]
                        + kernels[116]
                        + kernels[117]
                        + kernels[118]
                        + kernels[120]
                        + kernels[121]
                        + kernels[123]
                        + kernels[124]
                        + kernels[125]
                        + kernels[126] * 0.438294948125
                        + kernels[128]
                        + kernels[131] * 0.792070333254
                        + kernels[132]
                        + kernels[133]
                        + kernels[134]
                        + kernels[136] * 0.946490170367
                        + kernels[140]
                        + kernels[141]
                        + kernels[142]
                        + kernels[143]
                        + kernels[145] * 0.427563059776
                        + kernels[146]
                        + kernels[147]
                        + kernels[148]
                        + kernels[150] * 0.498023982647
                        + kernels[151]
                        + kernels[152]
                        - kernels[153]
                        - kernels[156]
                        - kernels[159]
                        + kernels[160] * -0.27319356279
                        - kernels[164]
                        - kernels[166]
                        - kernels[167]
                        - kernels[168]
                        - kernels[169]
                        - kernels[172]
                        - kernels[179]
                        + kernels[180] * -0.675745305977
                        - kernels[181]
                        - kernels[187]
                        - kernels[188]
                        - kernels[189]
                        - kernels[192]
                        + kernels[196] * -0.2463966444
                        - kernels[200]
                        + kernels[201] * -0.741821747236
                        - kernels[205]
                        - kernels[208]
                        - kernels[213]
                        - kernels[215]
                        - kernels[219]
                        - kernels[222]
                        - kernels[223]
                        - kernels[226]
                        - kernels[231]
                        - kernels[234]
                        + kernels[237] * -0.093956930559
                        - kernels[239]
                        - kernels[241]
                        + kernels[243] * -0.581316099045
                        + kernels[244] * -0.984619447212
                        - kernels[245]
                        ;
                        decisions[4] = 0.370253541529
                        + kernels[105]
                        + kernels[106]
                        + kernels[113] * 0.393282918839
                        + kernels[116] * 0.370554338056
                        + kernels[117]
                        + kernels[118]
                        + kernels[120] * 0.343308121926
                        + kernels[121]
                        + kernels[123]
                        + kernels[124]
                        + kernels[125]
                        + kernels[126] * 0.347975523907
                        + kernels[128]
                        + kernels[131] * 0.627810063413
                        + kernels[132]
                        + kernels[133]
                        + kernels[134]
                        + kernels[140]
                        + kernels[141]
                        + kernels[142]
                        + kernels[143]
                        + kernels[145] * 0.338124993818
                        + kernels[146] * 0.997175374638
                        + kernels[148]
                        + kernels[150] * 0.394159699877
                        + kernels[151] * 0.972813733611
                        + kernels[152]
                        - kernels[247]
                        - kernels[249]
                        - kernels[253]
                        - kernels[257]
                        - kernels[260]
                        - kernels[261]
                        - kernels[263]
                        + kernels[264] * -0.891532247409
                        - kernels[265]
                        - kernels[267]
                        - kernels[268]
                        - kernels[269]
                        - kernels[270]
                        - kernels[271]
                        - kernels[273]
                        - kernels[274]
                        - kernels[275]
                        - kernels[277]
                        - kernels[278]
                        - kernels[279]
                        - kernels[281]
                        - kernels[282]
                        + kernels[283] * -0.893672520676
                        ;
                        decisions[5] = 0.726546046727
                        + kernels[153]
                        + kernels[156]
                        + kernels[158] * 0.550363222648
                        + kernels[162]
                        + kernels[163]
                        + kernels[165] * 0.460602402687
                        + kernels[167]
                        + kernels[168]
                        + kernels[169]
                        + kernels[170]
                        + kernels[172]
                        + kernels[175]
                        + kernels[177] * 0.841617680119
                        + kernels[180]
                        + kernels[181] * 0.136802152608
                        + kernels[184]
                        + kernels[185]
                        + kernels[186]
                        + kernels[189]
                        + kernels[192] * 0.730713977299
                        + kernels[193]
                        + kernels[200]
                        + kernels[201]
                        + kernels[205] * 0.730228959221
                        + kernels[208]
                        + kernels[210]
                        + kernels[216] * 0.531752564247
                        + kernels[217]
                        + kernels[219]
                        + kernels[220]
                        + kernels[221] * 0.327785622845
                        + kernels[222] * 0.518427270784
                        + kernels[223] * 0.931481752597
                        + kernels[224]
                        + kernels[225]
                        + kernels[227] * 0.519797468313
                        + kernels[229]
                        + kernels[232]
                        + kernels[233] * 0.090154278221
                        + kernels[235]
                        + kernels[236]
                        + kernels[237] * 0.878005469698
                        + kernels[238]
                        + kernels[239]
                        + kernels[241] * 0.752267178713
                        + kernels[244]
                        - kernels[247]
                        - kernels[248]
                        - kernels[249]
                        - kernels[250]
                        - kernels[251]
                        - kernels[252]
                        - kernels[253]
                        - kernels[254]
                        - kernels[255]
                        - kernels[256]
                        - kernels[257]
                        - kernels[258]
                        - kernels[259]
                        - kernels[260]
                        - kernels[261]
                        - kernels[262]
                        - kernels[263]
                        - kernels[264]
                        - kernels[265]
                        - kernels[266]
                        - kernels[267]
                        - kernels[268]
                        - kernels[269]
                        - kernels[270]
                        - kernels[271]
                        - kernels[272]
                        - kernels[273]
                        - kernels[274]
                        - kernels[275]
                        - kernels[276]
                        - kernels[277]
                        - kernels[278]
                        - kernels[279]
                        - kernels[280]
                        - kernels[281]
                        - kernels[282]
                        - kernels[283]
                        - kernels[284]
                        - kernels[285]
                        - kernels[286]
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

                        return exp(-0.001 * kernel);
                    }
                };
            }
        }
    }