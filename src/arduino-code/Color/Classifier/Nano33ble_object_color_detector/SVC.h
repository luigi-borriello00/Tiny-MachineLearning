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
                        float kernels[206] = { 0 };
                        float decisions[6] = { 0 };
                        int votes[4] = { 0 };
                        kernels[0] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1002.0  , 0.0 );
                        kernels[1] = compute_kernel(x,   21.0  , 110.0  , 101.0  , 221.0  , 0.0 );
                        kernels[2] = compute_kernel(x,   102.0  , 120.0  , 112.0  , 1102.0  , 0.0 );
                        kernels[3] = compute_kernel(x,   101.0  , 120.0  , 112.0  , 1102.0  , 0.0 );
                        kernels[4] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[5] = compute_kernel(x,   110.0  , 122.0  , 120.0  , 1120.0  , 111.0 );
                        kernels[6] = compute_kernel(x,   100.0  , 112.0  , 111.0  , 1012.0  , 0.0 );
                        kernels[7] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[8] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[9] = compute_kernel(x,   20.0  , 101.0  , 22.0  , 211.0  , 0.0 );
                        kernels[10] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[11] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 212.0  , 0.0 );
                        kernels[12] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[13] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[14] = compute_kernel(x,   21.0  , 101.0  , 22.0  , 211.0  , 0.0 );
                        kernels[15] = compute_kernel(x,   22.0  , 111.0  , 110.0  , 1002.0  , 0.0 );
                        kernels[16] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[17] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 222.0  , 0.0 );
                        kernels[18] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[19] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[20] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[21] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[22] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[23] = compute_kernel(x,   101.0  , 120.0  , 111.0  , 1101.0  , 0.0 );
                        kernels[24] = compute_kernel(x,   100.0  , 111.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[25] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[26] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[27] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[28] = compute_kernel(x,   111.0  , 200.0  , 121.0  , 1200.0  , 1201.0 );
                        kernels[29] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1001.0  , 0.0 );
                        kernels[30] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1021.0  , 0.0 );
                        kernels[31] = compute_kernel(x,   112.0  , 200.0  , 121.0  , 1201.0  , 2022.0 );
                        kernels[32] = compute_kernel(x,   111.0  , 200.0  , 121.0  , 1200.0  , 1222.0 );
                        kernels[33] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[34] = compute_kernel(x,   111.0  , 200.0  , 121.0  , 1201.0  , 2002.0 );
                        kernels[35] = compute_kernel(x,   100.0  , 111.0  , 110.0  , 1010.0  , 0.0 );
                        kernels[36] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[37] = compute_kernel(x,   101.0  , 120.0  , 111.0  , 1021.0  , 0.0 );
                        kernels[38] = compute_kernel(x,   102.0  , 121.0  , 112.0  , 1110.0  , 0.0 );
                        kernels[39] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 211.0  , 0.0 );
                        kernels[40] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[41] = compute_kernel(x,   110.0  , 122.0  , 120.0  , 1121.0  , 1011.0 );
                        kernels[42] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1001.0  , 0.0 );
                        kernels[43] = compute_kernel(x,   110.0  , 122.0  , 120.0  , 1121.0  , 210.0 );
                        kernels[44] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[45] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[46] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[47] = compute_kernel(x,   111.0  , 122.0  , 121.0  , 1122.0  , 1102.0 );
                        kernels[48] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[49] = compute_kernel(x,   102.0  , 121.0  , 120.0  , 1111.0  , 0.0 );
                        kernels[50] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[51] = compute_kernel(x,   21.0  , 101.0  , 22.0  , 211.0  , 0.0 );
                        kernels[52] = compute_kernel(x,   101.0  , 112.0  , 111.0  , 1022.0  , 0.0 );
                        kernels[53] = compute_kernel(x,   21.0  , 102.0  , 101.0  , 222.0  , 0.0 );
                        kernels[54] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[55] = compute_kernel(x,   110.0  , 122.0  , 120.0  , 1120.0  , 10.0 );
                        kernels[56] = compute_kernel(x,   22.0  , 110.0  , 102.0  , 1001.0  , 0.0 );
                        kernels[57] = compute_kernel(x,   112.0  , 200.0  , 121.0  , 1201.0  , 2020.0 );
                        kernels[58] = compute_kernel(x,   101.0  , 120.0  , 111.0  , 1100.0  , 0.0 );
                        kernels[59] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[60] = compute_kernel(x,   100.0  , 112.0  , 111.0  , 1021.0  , 0.0 );
                        kernels[61] = compute_kernel(x,   21.0  , 110.0  , 101.0  , 221.0  , 0.0 );
                        kernels[62] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[63] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[64] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1010.0  , 0.0 );
                        kernels[65] = compute_kernel(x,   21.0  , 102.0  , 101.0  , 222.0  , 0.0 );
                        kernels[66] = compute_kernel(x,   111.0  , 200.0  , 121.0  , 1200.0  , 1100.0 );
                        kernels[67] = compute_kernel(x,   102.0  , 122.0  , 120.0  , 1112.0  , 10.0 );
                        kernels[68] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[69] = compute_kernel(x,   22.0  , 112.0  , 110.0  , 1002.0  , 0.0 );
                        kernels[70] = compute_kernel(x,   22.0  , 102.0  , 101.0  , 222.0  , 0.0 );
                        kernels[71] = compute_kernel(x,   101.0  , 120.0  , 112.0  , 1101.0  , 0.0 );
                        kernels[72] = compute_kernel(x,   101.0  , 121.0  , 112.0  , 1102.0  , 0.0 );
                        kernels[73] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[74] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[75] = compute_kernel(x,   21.0  , 102.0  , 101.0  , 222.0  , 0.0 );
                        kernels[76] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 220.0  , 0.0 );
                        kernels[77] = compute_kernel(x,   12.0  , 100.0  , 21.0  , 200.0  , 0.0 );
                        kernels[78] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[79] = compute_kernel(x,   20.0  , 100.0  , 21.0  , 202.0  , 0.0 );
                        kernels[80] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[81] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 222.0  , 0.0 );
                        kernels[82] = compute_kernel(x,   11.0  , 21.0  , 12.0  , 112.0  , 0.0 );
                        kernels[83] = compute_kernel(x,   20.0  , 100.0  , 22.0  , 202.0  , 0.0 );
                        kernels[84] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[85] = compute_kernel(x,   12.0  , 100.0  , 21.0  , 201.0  , 0.0 );
                        kernels[86] = compute_kernel(x,   20.0  , 101.0  , 22.0  , 211.0  , 0.0 );
                        kernels[87] = compute_kernel(x,   12.0  , 22.0  , 21.0  , 200.0  , 0.0 );
                        kernels[88] = compute_kernel(x,   12.0  , 22.0  , 20.0  , 121.0  , 0.0 );
                        kernels[89] = compute_kernel(x,   12.0  , 22.0  , 21.0  , 200.0  , 0.0 );
                        kernels[90] = compute_kernel(x,   20.0  , 101.0  , 22.0  , 211.0  , 0.0 );
                        kernels[91] = compute_kernel(x,   22.0  , 102.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[92] = compute_kernel(x,   20.0  , 101.0  , 22.0  , 211.0  , 0.0 );
                        kernels[93] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 1000.0  , 0.0 );
                        kernels[94] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 222.0  , 0.0 );
                        kernels[95] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 212.0  , 0.0 );
                        kernels[96] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[97] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 212.0  , 0.0 );
                        kernels[98] = compute_kernel(x,   21.0  , 101.0  , 22.0  , 212.0  , 0.0 );
                        kernels[99] = compute_kernel(x,   20.0  , 100.0  , 21.0  , 201.0  , 0.0 );
                        kernels[100] = compute_kernel(x,   11.0  , 21.0  , 20.0  , 120.0  , 0.0 );
                        kernels[101] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[102] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[103] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[104] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[105] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 212.0  , 0.0 );
                        kernels[106] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[107] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[108] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[109] = compute_kernel(x,   21.0  , 101.0  , 22.0  , 212.0  , 0.0 );
                        kernels[110] = compute_kernel(x,   21.0  , 101.0  , 22.0  , 221.0  , 0.0 );
                        kernels[111] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 1000.0  , 0.0 );
                        kernels[112] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[113] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[114] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[115] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[116] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[117] = compute_kernel(x,   22.0  , 110.0  , 100.0  , 221.0  , 0.0 );
                        kernels[118] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[119] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[120] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[121] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[122] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[123] = compute_kernel(x,   101.0  , 120.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[124] = compute_kernel(x,   101.0  , 120.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[125] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[126] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[127] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1012.0  , 0.0 );
                        kernels[128] = compute_kernel(x,   22.0  , 110.0  , 100.0  , 221.0  , 0.0 );
                        kernels[129] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[130] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 1000.0  , 0.0 );
                        kernels[131] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[132] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[133] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[134] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[135] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[136] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[137] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[138] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[139] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[140] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[141] = compute_kernel(x,   22.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[142] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[143] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[144] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[145] = compute_kernel(x,   101.0  , 112.0  , 102.0  , 1012.0  , 0.0 );
                        kernels[146] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[147] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[148] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[149] = compute_kernel(x,   22.0  , 110.0  , 100.0  , 222.0  , 0.0 );
                        kernels[150] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[151] = compute_kernel(x,   22.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[152] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[153] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[154] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[155] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[156] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[157] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[158] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[159] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[160] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[161] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[162] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[163] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1002.0  , 0.0 );
                        kernels[164] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[165] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[166] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[167] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[168] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[169] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[170] = compute_kernel(x,   22.0  , 110.0  , 100.0  , 221.0  , 0.0 );
                        kernels[171] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[172] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[173] = compute_kernel(x,   101.0  , 120.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[174] = compute_kernel(x,   101.0  , 120.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[175] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[176] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[177] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[178] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[179] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[180] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[181] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[182] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[183] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[184] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[185] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[186] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[187] = compute_kernel(x,   102.0  , 120.0  , 111.0  , 1022.0  , 0.0 );
                        kernels[188] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[189] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[190] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[191] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[192] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[193] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[194] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[195] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[196] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[197] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[198] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 221.0  , 0.0 );
                        kernels[199] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[200] = compute_kernel(x,   110.0  , 122.0  , 112.0  , 1110.0  , 0.0 );
                        kernels[201] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[202] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[203] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[204] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[205] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        decisions[0] = 0.461133600688
                        + kernels[0] * 0.53858035141
                        + kernels[2] * 0.33533763628
                        + kernels[3] * 0.024455889083
                        + kernels[5] * 0.538731678464
                        + kernels[6] * 0.335177196825
                        + kernels[8] * 0.381084456124
                        + kernels[9]
                        + kernels[11]
                        + kernels[12]
                        + kernels[13]
                        + kernels[14]
                        + kernels[15] * 0.33573586483
                        + kernels[17] * 0.583990273385
                        + kernels[18]
                        + kernels[23] * 0.074310134959
                        + kernels[24] * 0.29620500408
                        + kernels[26]
                        + kernels[27]
                        + kernels[28] * 0.538962933728
                        + kernels[30] * 0.334910316655
                        + kernels[31] * 0.474577954466
                        + kernels[32] * 0.538704529405
                        + kernels[33] * 0.099770597062
                        + kernels[34] * 0.538878232003
                        + kernels[35] * 0.295371763157
                        + kernels[37] * 0.539104445044
                        + kernels[38] * 0.538704529405
                        + kernels[39]
                        + kernels[40] * 0.394264783332
                        + kernels[41] * 0.538913147829
                        + kernels[42] * 0.099572831184
                        + kernels[43] * 0.539209109526
                        + kernels[44]
                        + kernels[45] * 0.091652811328
                        + kernels[46]
                        + kernels[47] * 0.538878232003
                        + kernels[48] * 0.335119910708
                        + kernels[49] * 0.538909454928
                        + kernels[50]
                        + kernels[51]
                        + kernels[52] * 0.394318709021
                        + kernels[53]
                        + kernels[54] * 0.335119910708
                        + kernels[55] * 0.538869017569
                        + kernels[56] * 0.132783837217
                        + kernels[57] * 0.475008314205
                        + kernels[58] * 0.431178826607
                        + kernels[59] * 0.387661303128
                        + kernels[60] * 0.19072108677
                        + kernels[61] * 0.393867543155
                        + kernels[62] * 0.388043474959
                        + kernels[63]
                        + kernels[64] * 0.295541378993
                        + kernels[65] * 0.584579654628
                        + kernels[66] * 0.539155904264
                        + kernels[67] * 0.539041312747
                        + kernels[68] * 0.9450317018
                        + kernels[69] * 0.334982704537
                        + kernels[71] * 0.073729519651
                        + kernels[72] * 0.335402738165
                        + kernels[73] * 0.538727186222
                        - kernels[74]
                        - kernels[75]
                        + kernels[76] * -0.909509444302
                        + kernels[77] * -0.910041588739
                        - kernels[78]
                        + kernels[79] * -0.357956427983
                        + kernels[80] * -0.985439197622
                        - kernels[81]
                        - kernels[82]
                        + kernels[83] * -0.909142125336
                        - kernels[84]
                        + kernels[85] * -0.909216978638
                        + kernels[86] * -0.960224419832
                        + kernels[87] * -0.5
                        - kernels[88]
                        + kernels[89] * -0.960905705209
                        - kernels[90]
                        + kernels[91] * -0.9093573415
                        + kernels[92] * -0.994987711333
                        - kernels[94]
                        + kernels[95] * -1.0
                        - kernels[96]
                        - kernels[97]
                        - kernels[98]
                        + kernels[99] * -0.909678497788
                        - kernels[100]
                        + kernels[103] * -0.791593658927
                        - kernels[104]
                        + kernels[105] * -0.516442538129
                        + kernels[106] * -0.96051417307
                        + kernels[107] * -0.923798262063
                        - kernels[108]
                        + kernels[109] * -0.954406158132
                        - kernels[110]
                        + kernels[111] * -0.909663962948
                        - kernels[112]
                        ;
                        decisions[1] = 0.511227230907
                        + kernels[0] * 0.488974646081
                        + kernels[1] * 0.208939228413
                        + kernels[2] * 0.304671093671
                        + kernels[3] * 0.022149294667
                        + kernels[4]
                        + kernels[5] * 0.489038644522
                        + kernels[6] * 0.303240832831
                        + kernels[7]
                        + kernels[9] * 0.304023889305
                        + kernels[10]
                        + kernels[11] * 0.11856997782
                        + kernels[13]
                        + kernels[15] * 0.303638474895
                        + kernels[16]
                        + kernels[17]
                        + kernels[18]
                        + kernels[19] * 0.841716049188
                        + kernels[20]
                        + kernels[21]
                        + kernels[22]
                        + kernels[23] * 0.066316849348
                        + kernels[24] * 0.267079881318
                        + kernels[25]
                        + kernels[26] * 0.432702821697
                        + kernels[27]
                        + kernels[28] * 0.488936132573
                        + kernels[29] * 0.506181200586
                        + kernels[30]
                        + kernels[31] * 0.430413391497
                        + kernels[32] * 0.488602177581
                        + kernels[33]
                        + kernels[34] * 0.48888778941
                        + kernels[35] * 0.267403467723
                        + kernels[36]
                        + kernels[37] * 0.856858572887
                        + kernels[38] * 0.488815203335
                        + kernels[39] * 0.304782908724
                        + kernels[40]
                        + kernels[41] * 0.488815203335
                        + kernels[42]
                        + kernels[43] * 0.489035970217
                        + kernels[44]
                        + kernels[45] * 0.977996866938
                        + kernels[46]
                        + kernels[47] * 0.488969564058
                        + kernels[48]
                        + kernels[49] * 0.488863717791
                        + kernels[50] * 0.304775912145
                        + kernels[51] * 0.304663384753
                        + kernels[52] * 0.357498642016
                        + kernels[54]
                        + kernels[55] * 0.488811595038
                        + kernels[56]
                        + kernels[57] * 0.430604722114
                        + kernels[58] * 0.391984341075
                        + kernels[59]
                        + kernels[60] * 0.185704024917
                        + kernels[61]
                        + kernels[62] * 0.180577162761
                        + kernels[63]
                        + kernels[64] * 0.268198561381
                        + kernels[66] * 0.48891960127
                        + kernels[67] * 0.48881560873
                        + kernels[68]
                        + kernels[69] * 0.304529042006
                        + kernels[70] * 0.34903496829
                        + kernels[71] * 0.066640146198
                        + kernels[72] * 0.304415818805
                        + kernels[73] * 0.488744137802
                        - kernels[113]
                        - kernels[114]
                        - kernels[115]
                        + kernels[116] * -0.950017538803
                        + kernels[117] * -0.387193727418
                        - kernels[118]
                        - kernels[119]
                        - kernels[120]
                        + kernels[122] * -0.588587549006
                        - kernels[123]
                        - kernels[124]
                        - kernels[125]
                        + kernels[127] * -0.969004193037
                        + kernels[128] * -0.99879161217
                        - kernels[129]
                        - kernels[130]
                        + kernels[133] * -0.686374901062
                        - kernels[134]
                        - kernels[135]
                        + kernels[136] * -0.939545660906
                        - kernels[137]
                        - kernels[138]
                        + kernels[139] * -0.897450319647
                        - kernels[140]
                        + kernels[141] * -0.920331831677
                        - kernels[142]
                        - kernels[143]
                        - kernels[144]
                        + kernels[145] * -0.940260831349
                        - kernels[146]
                        - kernels[147]
                        + kernels[148] * -0.962701401795
                        + kernels[149] * -0.940295427231
                        - kernels[151]
                        - kernels[152]
                        + kernels[153] * -0.990868809836
                        - kernels[154]
                        - kernels[155]
                        - kernels[159]
                        + kernels[161] * -0.438678825952
                        - kernels[162]
                        + kernels[163] * -0.371068861089
                        + kernels[164] * -0.970598122049
                        - kernels[167]
                        + kernels[168] * -0.916839792441
                        + kernels[169] * -0.940932114247
                        ;
                        decisions[2] = 0.682523330453
                        + kernels[0] * 0.317446284122
                        + kernels[2] * 0.197624919062
                        + kernels[3] * 0.014001025286
                        + kernels[4]
                        + kernels[5] * 0.317702116745
                        + kernels[6] * 0.197388508104
                        + kernels[9] * 0.197573215833
                        + kernels[11] * 0.076523781466
                        + kernels[15] * 0.197464543992
                        + kernels[17]
                        + kernels[18]
                        + kernels[20]
                        + kernels[21]
                        + kernels[22]
                        + kernels[23] * 0.044360172362
                        + kernels[24] * 0.17328120406
                        + kernels[25]
                        + kernels[26] * 0.74928017531
                        + kernels[27]
                        + kernels[28] * 0.317827863347
                        + kernels[30] * 0.19843348983
                        + kernels[31] * 0.279702175209
                        + kernels[32] * 0.317652024144
                        + kernels[33]
                        + kernels[34] * 0.317561128811
                        + kernels[35] * 0.174315111963
                        + kernels[36]
                        + kernels[37]
                        + kernels[38] * 0.317423347987
                        + kernels[39] * 0.198394852416
                        + kernels[40] * 0.500674608314
                        + kernels[41] * 0.317338978521
                        + kernels[42] * 0.020843336725
                        + kernels[43] * 0.317626856091
                        + kernels[44]
                        + kernels[45] * 0.66177732526
                        + kernels[46]
                        + kernels[47] * 0.317876990962
                        + kernels[48]
                        + kernels[49] * 0.317742862314
                        + kernels[50] * 0.198394852416
                        + kernels[51] * 0.197573215833
                        + kernels[52] * 0.232159338217
                        + kernels[54]
                        + kernels[55] * 0.317310216582
                        + kernels[56] * 0.544548100469
                        + kernels[57] * 0.279335332923
                        + kernels[58] * 0.25385937744
                        + kernels[59] * 0.704509668774
                        + kernels[60] * 0.111249730286
                        + kernels[61] * 0.501476753433
                        + kernels[62] * 0.292507865736
                        + kernels[63]
                        + kernels[64] * 0.17337014632
                        + kernels[66] * 0.317916160086
                        + kernels[67] * 0.3175285085
                        + kernels[68]
                        + kernels[69] * 0.197464543992
                        + kernels[70] * 0.37301335978
                        + kernels[71] * 0.042607573423
                        + kernels[72] * 0.198488181137
                        + kernels[73] * 0.317278150394
                        - kernels[170]
                        - kernels[173]
                        - kernels[174]
                        + kernels[175] * -0.316060274839
                        - kernels[176]
                        + kernels[177] * -0.769849336166
                        - kernels[179]
                        + kernels[180] * -0.744923221507
                        + kernels[181] * -0.245477468032
                        - kernels[182]
                        - kernels[183]
                        - kernels[184]
                        - kernels[185]
                        - kernels[186]
                        - kernels[187]
                        - kernels[188]
                        - kernels[190]
                        + kernels[191] * -0.692023689728
                        - kernels[192]
                        - kernels[193]
                        - kernels[194]
                        - kernels[195]
                        - kernels[196]
                        - kernels[197]
                        + kernels[198] * -0.965334383727
                        - kernels[199]
                        - kernels[200]
                        - kernels[201]
                        - kernels[202]
                        + kernels[203] * -0.914181799181
                        + kernels[204] * -0.984477409848
                        + kernels[205] * -0.996100390946
                        ;
                        decisions[3] = 0.085654682606
                        + kernels[74]
                        + kernels[75] * 0.569534223341
                        + kernels[76] * 0.568982083009
                        + kernels[77] * 0.568876709144
                        + kernels[78]
                        + kernels[79] * 0.223438796336
                        + kernels[82] * 0.914337983469
                        + kernels[83] * 0.569244887865
                        + kernels[85] * 0.568876709144
                        + kernels[88] * 0.747514039026
                        + kernels[89] * 0.914072716165
                        + kernels[91] * 0.569000245106
                        + kernels[92] * 0.668034076017
                        + kernels[93] * 0.598367333412
                        + kernels[94] * 0.730299523374
                        + kernels[96] * 0.568602231128
                        + kernels[99] * 0.569938425814
                        + kernels[100] * 0.747682400313
                        + kernels[102]
                        + kernels[103]
                        + kernels[104]
                        + kernels[105] * 0.569410271223
                        + kernels[106] * 0.730807532972
                        + kernels[107]
                        + kernels[108]
                        + kernels[109] * 0.66880040243
                        + kernels[110] * 0.914612532537
                        + kernels[111] * 0.970632911694
                        + kernels[112]
                        + kernels[113] * -0.48421637361
                        + kernels[116] * -0.089990406998
                        - kernels[118]
                        - kernels[119]
                        + kernels[120] * -0.99946467478
                        - kernels[122]
                        - kernels[123]
                        - kernels[124]
                        + kernels[127] * -0.546838175258
                        + kernels[128] * -0.675410443982
                        - kernels[129]
                        - kernels[130]
                        + kernels[136] * -0.676225197256
                        - kernels[137]
                        + kernels[145] * -0.675299598892
                        - kernels[146]
                        + kernels[147] * -0.086970224181
                        + kernels[148] * -0.998536280525
                        + kernels[149] * -0.266666176908
                        + kernels[151] * -0.676435772442
                        + kernels[153] * -0.26507799246
                        + kernels[154] * -0.675926102633
                        - kernels[155]
                        + kernels[158] * -0.546487634381
                        - kernels[159]
                        + kernels[162] * -0.99525560044
                        + kernels[163] * -0.265192442624
                        + kernels[167] * -0.675059177276
                        + kernels[168] * -0.676379247995
                        + kernels[169] * -0.675634510884
                        ;
                        decisions[4] = 0.116467777508
                        + kernels[74]
                        + kernels[75] * 0.549676393139
                        + kernels[76] * 0.550182127583
                        + kernels[77] * 0.550359440357
                        + kernels[78]
                        + kernels[79] * 0.21719217101
                        + kernels[82] * 0.883638472677
                        + kernels[83] * 0.549647423549
                        + kernels[85] * 0.54948109696
                        + kernels[88] * 0.721875474014
                        + kernels[89] * 0.883152930102
                        + kernels[91] * 0.550410577767
                        + kernels[92] * 0.646061932898
                        + kernels[94] * 0.71990701388
                        + kernels[99] * 0.549702559386
                        + kernels[100] * 0.722495035204
                        + kernels[101] * 0.831174501829
                        + kernels[102]
                        + kernels[103]
                        + kernels[104]
                        + kernels[105] * 0.549600610497
                        + kernels[106] * 0.888781400066
                        + kernels[107] * 0.550675648173
                        + kernels[108]
                        + kernels[109] * 0.645579140427
                        + kernels[110] * 0.883602278326
                        + kernels[111] * 0.549797578177
                        + kernels[112]
                        + kernels[170] * -0.816086930905
                        - kernels[172]
                        - kernels[173]
                        - kernels[174]
                        + kernels[182] * -0.695716107645
                        + kernels[183] * -0.524136857916
                        - kernels[186]
                        - kernels[187]
                        + kernels[188] * -0.816320829251
                        + kernels[189] * -0.272895831495
                        - kernels[190]
                        - kernels[191]
                        + kernels[193] * -0.116937945728
                        - kernels[194]
                        - kernels[195]
                        - kernels[196]
                        + kernels[198] * -0.974239520348
                        + kernels[199] * -0.999494824336
                        - kernels[200]
                        - kernels[201]
                        - kernels[202]
                        + kernels[203] * -0.816060274839
                        + kernels[204] * -0.816060274839
                        + kernels[205] * -0.695044408719
                        ;
                        decisions[5] = 0.627337286405
                        + kernels[113]
                        + kernels[117]
                        + kernels[118]
                        + kernels[119]
                        + kernels[120]
                        + kernels[121] * 0.239993375835
                        + kernels[122]
                        + kernels[123]
                        + kernels[124]
                        + kernels[125] * 0.25
                        + kernels[126]
                        + kernels[127] * 0.224663948803
                        + kernels[128] * 0.232107000454
                        + kernels[129]
                        + kernels[130] * 0.372521214869
                        + kernels[131] * 0.25
                        + kernels[132] * 0.090678660295
                        + kernels[133]
                        + kernels[134]
                        + kernels[135]
                        + kernels[136] * 0.991850514884
                        + kernels[137] * 0.372346591982
                        + kernels[138]
                        + kernels[140]
                        + kernels[142]
                        + kernels[143]
                        + kernels[145] * 0.232545498152
                        + kernels[146]
                        + kernels[147] * 0.5
                        + kernels[148] * 0.872775102541
                        + kernels[149] * 0.091142497241
                        + kernels[150] * 0.237420879798
                        + kernels[151] * 0.232497372808
                        + kernels[153]
                        + kernels[154] * 0.982101366101
                        + kernels[155] * 0.5
                        + kernels[156]
                        + kernels[157] * 0.225550527632
                        + kernels[158]
                        + kernels[159]
                        + kernels[160] * 0.5
                        + kernels[161]
                        + kernels[162] * 0.373060460918
                        + kernels[163] * 0.090797350793
                        + kernels[164] * 0.429019654319
                        + kernels[165]
                        + kernels[166]
                        + kernels[167] * 0.982106987213
                        + kernels[168] * 0.731695446101
                        + kernels[169] * 0.995125549261
                        - kernels[170]
                        - kernels[171]
                        - kernels[172]
                        - kernels[173]
                        - kernels[174]
                        - kernels[175]
                        - kernels[176]
                        - kernels[177]
                        - kernels[178]
                        - kernels[179]
                        - kernels[180]
                        - kernels[181]
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