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
                        float kernels[222] = { 0 };
                        float decisions[6] = { 0 };
                        int votes[4] = { 0 };
                        kernels[0] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1002.0  , 0.0 );
                        kernels[1] = compute_kernel(x,   102.0  , 120.0  , 112.0  , 1102.0  , 0.0 );
                        kernels[2] = compute_kernel(x,   101.0  , 120.0  , 112.0  , 1102.0  , 0.0 );
                        kernels[3] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[4] = compute_kernel(x,   110.0  , 122.0  , 120.0  , 1120.0  , 111.0 );
                        kernels[5] = compute_kernel(x,   100.0  , 112.0  , 111.0  , 1012.0  , 0.0 );
                        kernels[6] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[7] = compute_kernel(x,   20.0  , 101.0  , 22.0  , 211.0  , 0.0 );
                        kernels[8] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[9] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 212.0  , 0.0 );
                        kernels[10] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[11] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[12] = compute_kernel(x,   21.0  , 101.0  , 22.0  , 211.0  , 0.0 );
                        kernels[13] = compute_kernel(x,   22.0  , 111.0  , 110.0  , 1002.0  , 0.0 );
                        kernels[14] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[15] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 222.0  , 0.0 );
                        kernels[16] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[17] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[18] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[19] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[20] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[21] = compute_kernel(x,   101.0  , 120.0  , 111.0  , 1101.0  , 0.0 );
                        kernels[22] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[23] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[24] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[25] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[26] = compute_kernel(x,   111.0  , 200.0  , 121.0  , 1200.0  , 1201.0 );
                        kernels[27] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1001.0  , 0.0 );
                        kernels[28] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1021.0  , 0.0 );
                        kernels[29] = compute_kernel(x,   112.0  , 200.0  , 121.0  , 1201.0  , 2022.0 );
                        kernels[30] = compute_kernel(x,   111.0  , 200.0  , 121.0  , 1200.0  , 1222.0 );
                        kernels[31] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[32] = compute_kernel(x,   111.0  , 200.0  , 121.0  , 1201.0  , 2002.0 );
                        kernels[33] = compute_kernel(x,   100.0  , 111.0  , 110.0  , 1010.0  , 0.0 );
                        kernels[34] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[35] = compute_kernel(x,   101.0  , 120.0  , 111.0  , 1021.0  , 0.0 );
                        kernels[36] = compute_kernel(x,   102.0  , 121.0  , 112.0  , 1110.0  , 0.0 );
                        kernels[37] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[38] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 211.0  , 0.0 );
                        kernels[39] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[40] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[41] = compute_kernel(x,   110.0  , 122.0  , 120.0  , 1121.0  , 1011.0 );
                        kernels[42] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1001.0  , 0.0 );
                        kernels[43] = compute_kernel(x,   110.0  , 122.0  , 120.0  , 1121.0  , 210.0 );
                        kernels[44] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[45] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[46] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[47] = compute_kernel(x,   111.0  , 122.0  , 121.0  , 1122.0  , 1102.0 );
                        kernels[48] = compute_kernel(x,   100.0  , 111.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[49] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[50] = compute_kernel(x,   102.0  , 121.0  , 120.0  , 1111.0  , 0.0 );
                        kernels[51] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[52] = compute_kernel(x,   21.0  , 101.0  , 22.0  , 211.0  , 0.0 );
                        kernels[53] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[54] = compute_kernel(x,   101.0  , 112.0  , 111.0  , 1022.0  , 0.0 );
                        kernels[55] = compute_kernel(x,   21.0  , 102.0  , 101.0  , 222.0  , 0.0 );
                        kernels[56] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[57] = compute_kernel(x,   110.0  , 122.0  , 120.0  , 1120.0  , 10.0 );
                        kernels[58] = compute_kernel(x,   22.0  , 110.0  , 102.0  , 1001.0  , 0.0 );
                        kernels[59] = compute_kernel(x,   112.0  , 200.0  , 121.0  , 1201.0  , 2020.0 );
                        kernels[60] = compute_kernel(x,   101.0  , 120.0  , 111.0  , 1100.0  , 0.0 );
                        kernels[61] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[62] = compute_kernel(x,   100.0  , 112.0  , 111.0  , 1021.0  , 0.0 );
                        kernels[63] = compute_kernel(x,   21.0  , 110.0  , 101.0  , 221.0  , 0.0 );
                        kernels[64] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[65] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[66] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[67] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1010.0  , 0.0 );
                        kernels[68] = compute_kernel(x,   21.0  , 102.0  , 101.0  , 222.0  , 0.0 );
                        kernels[69] = compute_kernel(x,   111.0  , 200.0  , 121.0  , 1200.0  , 1100.0 );
                        kernels[70] = compute_kernel(x,   102.0  , 122.0  , 120.0  , 1112.0  , 10.0 );
                        kernels[71] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[72] = compute_kernel(x,   22.0  , 112.0  , 110.0  , 1002.0  , 0.0 );
                        kernels[73] = compute_kernel(x,   22.0  , 102.0  , 101.0  , 222.0  , 0.0 );
                        kernels[74] = compute_kernel(x,   101.0  , 120.0  , 112.0  , 1101.0  , 0.0 );
                        kernels[75] = compute_kernel(x,   101.0  , 121.0  , 112.0  , 1102.0  , 0.0 );
                        kernels[76] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[77] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 211.0  , 0.0 );
                        kernels[78] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[79] = compute_kernel(x,   21.0  , 102.0  , 101.0  , 222.0  , 0.0 );
                        kernels[80] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 220.0  , 0.0 );
                        kernels[81] = compute_kernel(x,   12.0  , 100.0  , 21.0  , 200.0  , 0.0 );
                        kernels[82] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 212.0  , 0.0 );
                        kernels[83] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[84] = compute_kernel(x,   20.0  , 100.0  , 21.0  , 202.0  , 0.0 );
                        kernels[85] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[86] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 222.0  , 0.0 );
                        kernels[87] = compute_kernel(x,   11.0  , 21.0  , 12.0  , 112.0  , 0.0 );
                        kernels[88] = compute_kernel(x,   20.0  , 100.0  , 22.0  , 202.0  , 0.0 );
                        kernels[89] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[90] = compute_kernel(x,   12.0  , 100.0  , 21.0  , 201.0  , 0.0 );
                        kernels[91] = compute_kernel(x,   20.0  , 101.0  , 22.0  , 211.0  , 0.0 );
                        kernels[92] = compute_kernel(x,   12.0  , 22.0  , 21.0  , 200.0  , 0.0 );
                        kernels[93] = compute_kernel(x,   12.0  , 22.0  , 21.0  , 200.0  , 0.0 );
                        kernels[94] = compute_kernel(x,   20.0  , 101.0  , 22.0  , 211.0  , 0.0 );
                        kernels[95] = compute_kernel(x,   22.0  , 102.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[96] = compute_kernel(x,   20.0  , 101.0  , 22.0  , 211.0  , 0.0 );
                        kernels[97] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 1000.0  , 0.0 );
                        kernels[98] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 222.0  , 0.0 );
                        kernels[99] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 212.0  , 0.0 );
                        kernels[100] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[101] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 212.0  , 0.0 );
                        kernels[102] = compute_kernel(x,   21.0  , 101.0  , 22.0  , 212.0  , 0.0 );
                        kernels[103] = compute_kernel(x,   20.0  , 100.0  , 21.0  , 201.0  , 0.0 );
                        kernels[104] = compute_kernel(x,   11.0  , 21.0  , 20.0  , 120.0  , 0.0 );
                        kernels[105] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[106] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[107] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[108] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[109] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 212.0  , 0.0 );
                        kernels[110] = compute_kernel(x,   12.0  , 22.0  , 21.0  , 122.0  , 0.0 );
                        kernels[111] = compute_kernel(x,   12.0  , 22.0  , 20.0  , 121.0  , 0.0 );
                        kernels[112] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[113] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[114] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[115] = compute_kernel(x,   21.0  , 101.0  , 22.0  , 212.0  , 0.0 );
                        kernels[116] = compute_kernel(x,   21.0  , 101.0  , 22.0  , 221.0  , 0.0 );
                        kernels[117] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 1000.0  , 0.0 );
                        kernels[118] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[119] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[120] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[121] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[122] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[123] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[124] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[125] = compute_kernel(x,   22.0  , 110.0  , 100.0  , 221.0  , 0.0 );
                        kernels[126] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[127] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[128] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[129] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[130] = compute_kernel(x,   101.0  , 120.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[131] = compute_kernel(x,   101.0  , 120.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[132] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[133] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[134] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1012.0  , 0.0 );
                        kernels[135] = compute_kernel(x,   22.0  , 110.0  , 100.0  , 222.0  , 0.0 );
                        kernels[136] = compute_kernel(x,   22.0  , 110.0  , 100.0  , 221.0  , 0.0 );
                        kernels[137] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[138] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 1000.0  , 0.0 );
                        kernels[139] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[140] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[141] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[142] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[143] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[144] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[145] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[146] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[147] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[148] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[149] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[150] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[151] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[152] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[153] = compute_kernel(x,   101.0  , 112.0  , 102.0  , 1012.0  , 0.0 );
                        kernels[154] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[155] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[156] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[157] = compute_kernel(x,   22.0  , 110.0  , 100.0  , 222.0  , 0.0 );
                        kernels[158] = compute_kernel(x,   22.0  , 110.0  , 100.0  , 222.0  , 0.0 );
                        kernels[159] = compute_kernel(x,   22.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[160] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[161] = compute_kernel(x,   22.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[162] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[163] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[164] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[165] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[166] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[167] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[168] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[169] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[170] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[171] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[172] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1002.0  , 0.0 );
                        kernels[173] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[174] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[175] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[176] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[177] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[178] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[179] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[180] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[181] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[182] = compute_kernel(x,   22.0  , 110.0  , 100.0  , 221.0  , 0.0 );
                        kernels[183] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[184] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[185] = compute_kernel(x,   101.0  , 120.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[186] = compute_kernel(x,   101.0  , 120.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[187] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[188] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[189] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[190] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[191] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[192] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[193] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[194] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[195] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[196] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[197] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[198] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[199] = compute_kernel(x,   102.0  , 120.0  , 111.0  , 1022.0  , 0.0 );
                        kernels[200] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[201] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[202] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[203] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[204] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[205] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[206] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[207] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[208] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[209] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[210] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[211] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[212] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[213] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[214] = compute_kernel(x,   110.0  , 122.0  , 112.0  , 1110.0  , 0.0 );
                        kernels[215] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[216] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[217] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[218] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[219] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[220] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[221] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        decisions[0] = 0.453875092764
                        + kernels[0] * 0.545698574148
                        + kernels[1] * 0.339973929738
                        + kernels[2] * 0.024406709947
                        + kernels[4] * 0.546154602314
                        + kernels[5] * 0.340071954928
                        + kernels[6] * 0.330272094599
                        + kernels[7]
                        + kernels[9]
                        + kernels[10]
                        + kernels[11]
                        + kernels[12]
                        + kernels[13] * 0.340215620077
                        + kernels[15] * 0.58903516139
                        + kernels[16]
                        + kernels[21] * 0.075926898028
                        + kernels[23]
                        + kernels[25]
                        + kernels[26] * 0.545953009069
                        + kernels[28] * 0.098284456393
                        + kernels[29] * 0.48092851831
                        + kernels[30] * 0.546355969199
                        + kernels[31] * 0.101040048044
                        + kernels[32] * 0.546165547494
                        + kernels[33] * 0.298867422963
                        + kernels[35] * 0.546168563764
                        + kernels[36] * 0.546513800462
                        + kernels[38]
                        + kernels[40]
                        + kernels[41] * 0.546513800462
                        + kernels[42] * 0.10127544313
                        + kernels[43] * 0.546155146013
                        + kernels[44]
                        + kernels[45] * 0.092243553294
                        + kernels[46]
                        + kernels[47] * 0.546135969274
                        + kernels[48] * 0.300045536346
                        + kernels[49] * 0.339700210735
                        + kernels[50] * 0.546504782955
                        + kernels[51]
                        + kernels[52]
                        + kernels[53] * 0.399124081962
                        + kernels[54] * 0.438800930066
                        + kernels[55]
                        + kernels[56] * 0.339700210735
                        + kernels[57] * 0.546154602314
                        + kernels[58] * 0.134072778714
                        + kernels[59] * 0.481049372871
                        + kernels[60] * 0.436458830152
                        + kernels[61] * 0.393703960195
                        + kernels[62] * 0.177961403025
                        + kernels[63] * 0.398895170283
                        + kernels[64] * 0.399326157606
                        + kernels[65] * 0.393258840084
                        + kernels[66]
                        + kernels[67] * 0.300253433224
                        + kernels[68] * 0.58983423107
                        + kernels[69] * 0.546045482482
                        + kernels[70] * 0.546652061087
                        + kernels[71] * 0.995491083296
                        + kernels[72] * 0.339329489227
                        + kernels[74] * 0.074368346372
                        + kernels[75] * 0.340296444877
                        + kernels[76] * 0.546648383394
                        + kernels[77]
                        - kernels[78]
                        - kernels[79]
                        + kernels[80] * -0.904832578545
                        + kernels[81] * -0.905035030368
                        + kernels[82] * -0.117288909001
                        - kernels[83]
                        + kernels[84] * -0.356448267622
                        + kernels[85] * -0.915762024336
                        - kernels[86]
                        - kernels[87]
                        + kernels[88] * -0.904398107281
                        - kernels[89]
                        + kernels[90] * -0.905035030368
                        + kernels[91] * -0.956344157457
                        + kernels[92] * -0.536187320271
                        + kernels[93] * -0.917647132235
                        - kernels[94]
                        + kernels[95] * -0.90540319867
                        + kernels[96] * -0.993689707464
                        - kernels[98]
                        - kernels[99]
                        - kernels[100]
                        - kernels[101]
                        - kernels[102]
                        + kernels[103] * -0.904982307296
                        - kernels[104]
                        + kernels[106] * -0.791593658927
                        - kernels[107]
                        - kernels[108]
                        - kernels[109]
                        - kernels[110]
                        + kernels[111] * -0.862573158429
                        + kernels[112] * -0.956961728269
                        + kernels[113] * -0.989766862181
                        - kernels[114]
                        + kernels[115] * -0.949716825629
                        - kernels[116]
                        + kernels[117] * -0.904366611762
                        - kernels[118]
                        ;
                        decisions[1] = 0.531594163529
                        + kernels[0] * 0.468477758066
                        + kernels[1] * 0.291685120621
                        + kernels[2] * 0.020983253784
                        + kernels[3]
                        + kernels[4] * 0.468239444177
                        + kernels[5] * 0.290851521705
                        + kernels[7] * 0.291863874386
                        + kernels[8]
                        + kernels[9] * 0.113929923168
                        + kernels[11] * 0.297998300514
                        + kernels[13] * 0.29097237304
                        + kernels[14] * 0.966190852868
                        + kernels[15]
                        + kernels[16]
                        + kernels[17] * 0.840801434478
                        + kernels[18]
                        + kernels[19]
                        + kernels[20]
                        + kernels[21] * 0.064808144489
                        + kernels[22]
                        + kernels[23] * 0.423480195802
                        + kernels[24]
                        + kernels[25]
                        + kernels[26] * 0.468368351853
                        + kernels[27] * 0.503305344494
                        + kernels[28] * 0.573034871962
                        + kernels[29] * 0.412616607313
                        + kernels[30] * 0.468358270216
                        + kernels[31]
                        + kernels[32] * 0.468651267194
                        + kernels[33] * 0.257163696647
                        + kernels[34]
                        + kernels[35] * 0.835867902599
                        + kernels[36] * 0.468651267194
                        + kernels[37]
                        + kernels[39]
                        + kernels[40]
                        + kernels[41] * 0.468170928371
                        + kernels[42]
                        + kernels[43] * 0.468550574523
                        + kernels[44]
                        + kernels[45] * 0.982963565764
                        + kernels[46]
                        + kernels[47] * 0.468170707347
                        + kernels[48] * 0.256295317099
                        + kernels[49]
                        + kernels[50] * 0.468003135657
                        + kernels[51] * 0.99394893106
                        + kernels[52] * 0.291142840313
                        + kernels[53]
                        + kernels[54] * 0.441412637824
                        + kernels[56]
                        + kernels[57] * 0.468562870331
                        + kernels[58]
                        + kernels[59] * 0.412628219341
                        + kernels[60] * 0.37498453918
                        + kernels[61]
                        + kernels[62] * 0.129221812389
                        + kernels[63] * 0.664233564429
                        + kernels[64]
                        + kernels[65] * 0.165845477698
                        + kernels[66]
                        + kernels[67] * 0.25652548883
                        + kernels[69] * 0.46849967811
                        + kernels[70] * 0.468412210119
                        + kernels[71]
                        + kernels[72] * 0.29248855827
                        + kernels[73] * 0.552216077981
                        + kernels[74] * 0.06365798182
                        + kernels[75] * 0.292225541425
                        + kernels[76] * 0.468636248316
                        + kernels[77] * 0.292021025315
                        + kernels[119] * -0.688555354818
                        + kernels[120] * -0.493450523604
                        - kernels[121]
                        - kernels[122]
                        - kernels[123]
                        - kernels[124]
                        + kernels[125] * -0.364759914331
                        - kernels[126]
                        - kernels[127]
                        + kernels[128] * -0.993469789383
                        - kernels[129]
                        - kernels[130]
                        - kernels[131]
                        - kernels[132]
                        + kernels[134] * -0.978797190489
                        + kernels[135] * -0.145517509748
                        + kernels[136] * -0.83349488224
                        - kernels[137]
                        - kernels[138]
                        - kernels[144]
                        + kernels[145] * -0.953196915277
                        + kernels[146] * -0.704271638295
                        - kernels[147]
                        - kernels[148]
                        + kernels[149] * -0.900743567222
                        - kernels[150]
                        - kernels[151]
                        - kernels[152]
                        + kernels[153] * -0.952890981013
                        - kernels[154]
                        - kernels[155]
                        + kernels[156] * -0.972119727954
                        - kernels[157]
                        - kernels[158]
                        + kernels[159] * -0.925922979941
                        - kernels[161]
                        - kernels[162]
                        + kernels[163] * -0.999322770227
                        - kernels[164]
                        - kernels[168]
                        + kernels[170] * -0.466799171651
                        + kernels[171] * -0.920536807972
                        + kernels[172] * -0.375517318937
                        + kernels[173] * -0.9459245879
                        - kernels[174]
                        - kernels[176]
                        + kernels[178] * -0.995504233829
                        - kernels[179]
                        + kernels[180] * -0.931124927976
                        + kernels[181] * -0.953196915277
                        ;
                        decisions[2] = 0.6691863656
                        + kernels[0] * 0.330600213207
                        + kernels[1] * 0.206855523974
                        + kernels[2] * 0.013633121114
                        + kernels[3]
                        + kernels[4] * 0.330600213207
                        + kernels[5] * 0.20631760818
                        + kernels[7] * 0.206542291313
                        + kernels[8]
                        + kernels[9] * 0.080603722889
                        + kernels[13] * 0.205836639742
                        + kernels[15]
                        + kernels[16]
                        + kernels[18]
                        + kernels[19]
                        + kernels[21] * 0.045543753537
                        + kernels[23] * 0.752057345281
                        + kernels[25]
                        + kernels[26] * 0.330570468115
                        + kernels[28] * 0.058425854934
                        + kernels[29] * 0.290998629542
                        + kernels[30] * 0.330737145525
                        + kernels[31]
                        + kernels[32] * 0.330892424187
                        + kernels[33] * 0.181304234284
                        + kernels[34]
                        + kernels[35]
                        + kernels[36] * 0.331268267403
                        + kernels[37]
                        + kernels[39]
                        + kernels[40]
                        + kernels[41] * 0.330678256271
                        + kernels[42] * 0.029159745677
                        + kernels[43] * 0.331085267098
                        + kernels[44]
                        + kernels[45] * 0.662310930658
                        + kernels[46]
                        + kernels[47] * 0.330825854243
                        + kernels[48] * 0.181473460434
                        + kernels[49]
                        + kernels[50] * 0.330805986987
                        + kernels[51] * 0.205935917105
                        + kernels[52] * 0.205583999119
                        + kernels[53] * 0.242638877394
                        + kernels[54] * 0.266355053605
                        + kernels[56]
                        + kernels[57] * 0.331156746044
                        + kernels[58]
                        + kernels[59] * 0.291108683525
                        + kernels[60] * 0.264183172958
                        + kernels[61]
                        + kernels[62] * 0.108135523814
                        + kernels[63] * 0.510954216116
                        + kernels[64] * 0.510479123048
                        + kernels[65] * 0.342063423206
                        + kernels[66]
                        + kernels[67] * 0.181324157814
                        + kernels[69] * 0.330412559906
                        + kernels[70] * 0.331127136271
                        + kernels[71]
                        + kernels[72] * 0.20614440815
                        + kernels[73] * 0.383452696868
                        + kernels[74] * 0.046050329788
                        + kernels[75] * 0.20620916305
                        + kernels[76] * 0.330885365201
                        + kernels[77] * 0.206210010959
                        - kernels[182]
                        + kernels[184] * -0.684079500312
                        - kernels[185]
                        - kernels[186]
                        + kernels[187] * -0.316060274839
                        - kernels[188]
                        + kernels[191] * -0.64011540818
                        + kernels[192] * -0.705105543708
                        + kernels[193] * -0.247766922881
                        - kernels[194]
                        - kernels[195]
                        - kernels[196]
                        + kernels[197] * -0.550169495444
                        - kernels[198]
                        - kernels[199]
                        - kernels[200]
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
                        + kernels[217] * -0.998986620521
                        + kernels[218] * -0.904144723921
                        + kernels[219] * -0.972657720585
                        + kernels[220] * -0.910451311356
                        - kernels[221]
                        ;
                        decisions[3] = 0.106632942201
                        + kernels[78]
                        + kernels[79] * 0.556471904309
                        + kernels[80] * 0.555547958762
                        + kernels[81] * 0.555741346034
                        + kernels[83]
                        + kernels[84] * 0.2186592478
                        + kernels[87] * 0.893569452678
                        + kernels[88] * 0.556326770097
                        + kernels[90] * 0.556274693381
                        + kernels[93] * 0.893179276321
                        + kernels[95] * 0.55542044146
                        + kernels[96] * 0.653043742244
                        + kernels[97] * 0.587938255766
                        + kernels[98] * 0.722674833669
                        + kernels[100] * 0.555797521844
                        + kernels[103] * 0.556199683639
                        + kernels[104] * 0.768716418295
                        + kernels[106]
                        + kernels[107]
                        + kernels[108]
                        + kernels[109] * 0.55631771582
                        + kernels[110] * 0.699362703756
                        + kernels[111] * 0.464231911407
                        + kernels[112] * 0.724086039062
                        + kernels[113]
                        + kernels[114]
                        + kernels[115] * 0.653132924079
                        + kernels[116] * 0.893340655411
                        + kernels[117] * 0.968666623063
                        + kernels[118]
                        + kernels[121] * -0.497436192353
                        + kernels[124] * -0.10706592178
                        - kernels[126]
                        - kernels[127]
                        + kernels[128] * -0.99582374754
                        - kernels[129]
                        - kernels[130]
                        - kernels[131]
                        + kernels[134] * -0.557204146472
                        + kernels[136] * -0.6881627932
                        - kernels[137]
                        - kernels[138]
                        + kernels[145] * -0.689552520246
                        - kernels[147]
                        + kernels[153] * -0.688587677614
                        - kernels[154]
                        + kernels[155] * -0.106841548551
                        - kernels[156]
                        + kernels[158] * -0.271790367864
                        + kernels[161] * -0.689155169277
                        + kernels[163] * -0.689332549697
                        + kernels[167] * -0.556509386196
                        - kernels[171]
                        + kernels[172] * -0.270060610143
                        - kernels[174]
                        - kernels[176]
                        + kernels[178] * -0.270924582826
                        + kernels[179] * -0.6881627932
                        + kernels[180] * -0.688918324947
                        + kernels[181] * -0.689171786991
                        ;
                        decisions[4] = 0.126149738761
                        + kernels[78]
                        + kernels[79] * 0.543773349614
                        + kernels[80] * 0.544511709442
                        + kernels[81] * 0.544329299633
                        + kernels[83]
                        + kernels[84] * 0.214261104164
                        + kernels[87] * 0.873672703429
                        + kernels[88] * 0.544069412862
                        + kernels[90] * 0.543715030382
                        + kernels[93] * 0.873955458263
                        + kernels[95] * 0.543525608404
                        + kernels[96] * 0.638588559561
                        + kernels[98] * 0.716146048533
                        + kernels[103] * 0.543419948978
                        + kernels[104] * 0.751759999834
                        + kernels[105] * 0.831174501829
                        + kernels[106]
                        + kernels[107]
                        + kernels[108]
                        + kernels[109] * 0.544386658431
                        + kernels[110] * 0.683845023158
                        + kernels[111] * 0.454697495273
                        + kernels[112] * 0.884809445017
                        + kernels[113] * 0.543669548759
                        + kernels[114]
                        + kernels[115] * 0.639020762134
                        + kernels[116] * 0.873779271019
                        + kernels[117] * 0.544529867908
                        + kernels[118]
                        + kernels[182] * -0.82305852414
                        - kernels[184]
                        - kernels[185]
                        - kernels[186]
                        + kernels[195] * -0.50217152912
                        - kernels[198]
                        - kernels[199]
                        + kernels[200] * -0.823813829229
                        + kernels[201] * -0.275340930602
                        - kernels[202]
                        - kernels[203]
                        - kernels[206]
                        - kernels[208]
                        - kernels[209]
                        + kernels[210] * -0.701432210303
                        - kernels[212]
                        - kernels[214]
                        - kernels[215]
                        + kernels[216] * -0.70076018205
                        - kernels[217]
                        + kernels[218] * -0.823653945317
                        + kernels[219] * -0.823321935913
                        + kernels[220] * -0.701338659521
                        + kernels[221] * -0.700749060428
                        ;
                        decisions[5] = 0.720486532077
                        + kernels[119]
                        + kernels[121]
                        + kernels[125]
                        + kernels[126]
                        + kernels[127]
                        + kernels[128]
                        + kernels[129]
                        + kernels[130]
                        + kernels[131]
                        + kernels[132] * 0.195556613087
                        + kernels[133] * 0.5
                        + kernels[134] * 0.169069078065
                        + kernels[136] * 0.17442965912
                        + kernels[137]
                        + kernels[138] * 0.279163694784
                        + kernels[139]
                        + kernels[140] * 0.174788479493
                        + kernels[141] * 0.068150656635
                        + kernels[142]
                        + kernels[143]
                        + kernels[144]
                        + kernels[145] * 0.673418480127
                        + kernels[146]
                        + kernels[147] * 0.279305929474
                        + kernels[148]
                        + kernels[150]
                        + kernels[151]
                        + kernels[152]
                        + kernels[153] * 0.174361545851
                        + kernels[154]
                        + kernels[155] * 0.279626624581
                        + kernels[156]
                        + kernels[158] * 0.068116538876
                        + kernels[160] * 0.172942517574
                        + kernels[161] * 0.173999708695
                        + kernels[162]
                        + kernels[163] * 0.999071939117
                        + kernels[165]
                        + kernels[166] * 0.5
                        + kernels[167] * 0.669214411125
                        + kernels[168] * 0.5
                        + kernels[169]
                        + kernels[170]
                        + kernels[171] * 0.279518687868
                        + kernels[172] * 0.069875367826
                        + kernels[173] * 0.946338291162
                        + kernels[174]
                        + kernels[175]
                        + kernels[176]
                        + kernels[177]
                        + kernels[178]
                        + kernels[179] * 0.97856452001
                        + kernels[180] * 0.67448725653
                        + kernels[181]
                        - kernels[182]
                        - kernels[183]
                        - kernels[184]
                        - kernels[185]
                        - kernels[186]
                        - kernels[187]
                        - kernels[188]
                        - kernels[189]
                        - kernels[190]
                        - kernels[191]
                        - kernels[192]
                        - kernels[193]
                        - kernels[194]
                        - kernels[195]
                        - kernels[196]
                        - kernels[197]
                        - kernels[198]
                        - kernels[199]
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