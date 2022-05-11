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
                        float kernels[229] = { 0 };
                        float decisions[3] = { 0 };
                        int votes[3] = { 0 };
                        kernels[0] = compute_kernel(x,   101.0  , 120.0  , 111.0  , 1020.0  , 0.0 );
                        kernels[1] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 222.0  , 0.0 );
                        kernels[2] = compute_kernel(x,   21.0  , 101.0  , 22.0  , 212.0  , 0.0 );
                        kernels[3] = compute_kernel(x,   110.0  , 122.0  , 120.0  , 1120.0  , 10.0 );
                        kernels[4] = compute_kernel(x,   22.0  , 110.0  , 102.0  , 1001.0  , 0.0 );
                        kernels[5] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[6] = compute_kernel(x,   21.0  , 102.0  , 101.0  , 221.0  , 0.0 );
                        kernels[7] = compute_kernel(x,   102.0  , 120.0  , 112.0  , 1102.0  , 0.0 );
                        kernels[8] = compute_kernel(x,   111.0  , 200.0  , 121.0  , 1201.0  , 2002.0 );
                        kernels[9] = compute_kernel(x,   102.0  , 121.0  , 112.0  , 1110.0  , 0.0 );
                        kernels[10] = compute_kernel(x,   100.0  , 112.0  , 111.0  , 1021.0  , 0.0 );
                        kernels[11] = compute_kernel(x,   101.0  , 121.0  , 112.0  , 1102.0  , 0.0 );
                        kernels[12] = compute_kernel(x,   22.0  , 112.0  , 110.0  , 1002.0  , 0.0 );
                        kernels[13] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[14] = compute_kernel(x,   111.0  , 122.0  , 121.0  , 1122.0  , 1102.0 );
                        kernels[15] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 211.0  , 0.0 );
                        kernels[16] = compute_kernel(x,   21.0  , 110.0  , 101.0  , 221.0  , 0.0 );
                        kernels[17] = compute_kernel(x,   22.0  , 102.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[18] = compute_kernel(x,   111.0  , 200.0  , 121.0  , 1200.0  , 1100.0 );
                        kernels[19] = compute_kernel(x,   22.0  , 102.0  , 101.0  , 222.0  , 0.0 );
                        kernels[20] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1021.0  , 0.0 );
                        kernels[21] = compute_kernel(x,   102.0  , 121.0  , 120.0  , 1111.0  , 0.0 );
                        kernels[22] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[23] = compute_kernel(x,   102.0  , 121.0  , 120.0  , 1111.0  , 0.0 );
                        kernels[24] = compute_kernel(x,   102.0  , 122.0  , 120.0  , 1112.0  , 10.0 );
                        kernels[25] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[26] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[27] = compute_kernel(x,   101.0  , 120.0  , 112.0  , 1102.0  , 0.0 );
                        kernels[28] = compute_kernel(x,   110.0  , 122.0  , 120.0  , 1121.0  , 210.0 );
                        kernels[29] = compute_kernel(x,   100.0  , 111.0  , 110.0  , 1010.0  , 0.0 );
                        kernels[30] = compute_kernel(x,   101.0  , 120.0  , 112.0  , 1101.0  , 0.0 );
                        kernels[31] = compute_kernel(x,   101.0  , 120.0  , 111.0  , 1021.0  , 0.0 );
                        kernels[32] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[33] = compute_kernel(x,   22.0  , 111.0  , 110.0  , 1002.0  , 0.0 );
                        kernels[34] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[35] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[36] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[37] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[38] = compute_kernel(x,   110.0  , 122.0  , 120.0  , 1121.0  , 1011.0 );
                        kernels[39] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1010.0  , 0.0 );
                        kernels[40] = compute_kernel(x,   21.0  , 102.0  , 101.0  , 222.0  , 0.0 );
                        kernels[41] = compute_kernel(x,   20.0  , 101.0  , 22.0  , 211.0  , 0.0 );
                        kernels[42] = compute_kernel(x,   101.0  , 112.0  , 111.0  , 1022.0  , 0.0 );
                        kernels[43] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 222.0  , 0.0 );
                        kernels[44] = compute_kernel(x,   22.0  , 102.0  , 100.0  , 222.0  , 0.0 );
                        kernels[45] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[46] = compute_kernel(x,   111.0  , 200.0  , 121.0  , 1200.0  , 1201.0 );
                        kernels[47] = compute_kernel(x,   112.0  , 200.0  , 121.0  , 1201.0  , 2020.0 );
                        kernels[48] = compute_kernel(x,   112.0  , 200.0  , 121.0  , 1201.0  , 2022.0 );
                        kernels[49] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1002.0  , 0.0 );
                        kernels[50] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1002.0  , 0.0 );
                        kernels[51] = compute_kernel(x,   21.0  , 101.0  , 22.0  , 211.0  , 0.0 );
                        kernels[52] = compute_kernel(x,   100.0  , 112.0  , 111.0  , 1012.0  , 0.0 );
                        kernels[53] = compute_kernel(x,   100.0  , 110.0  , 101.0  , 1010.0  , 0.0 );
                        kernels[54] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[55] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[56] = compute_kernel(x,   111.0  , 200.0  , 121.0  , 1201.0  , 2002.0 );
                        kernels[57] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[58] = compute_kernel(x,   101.0  , 121.0  , 112.0  , 1102.0  , 0.0 );
                        kernels[59] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 212.0  , 0.0 );
                        kernels[60] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[61] = compute_kernel(x,   100.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[62] = compute_kernel(x,   110.0  , 122.0  , 120.0  , 1120.0  , 111.0 );
                        kernels[63] = compute_kernel(x,   101.0  , 120.0  , 111.0  , 1100.0  , 0.0 );
                        kernels[64] = compute_kernel(x,   21.0  , 101.0  , 100.0  , 212.0  , 0.0 );
                        kernels[65] = compute_kernel(x,   100.0  , 111.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[66] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[67] = compute_kernel(x,   22.0  , 111.0  , 102.0  , 1001.0  , 0.0 );
                        kernels[68] = compute_kernel(x,   101.0  , 120.0  , 111.0  , 1100.0  , 0.0 );
                        kernels[69] = compute_kernel(x,   21.0  , 102.0  , 100.0  , 220.0  , 0.0 );
                        kernels[70] = compute_kernel(x,   111.0  , 200.0  , 121.0  , 1200.0  , 1222.0 );
                        kernels[71] = compute_kernel(x,   101.0  , 120.0  , 111.0  , 1101.0  , 0.0 );
                        kernels[72] = compute_kernel(x,   110.0  , 122.0  , 112.0  , 1110.0  , 0.0 );
                        kernels[73] = compute_kernel(x,   110.0  , 121.0  , 111.0  , 1110.0  , 0.0 );
                        kernels[74] = compute_kernel(x,   110.0  , 200.0  , 120.0  , 1120.0  , 0.0 );
                        kernels[75] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[76] = compute_kernel(x,   110.0  , 122.0  , 112.0  , 1120.0  , 0.0 );
                        kernels[77] = compute_kernel(x,   121.0  , 210.0  , 202.0  , 2001.0  , 0.0 );
                        kernels[78] = compute_kernel(x,   101.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[79] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[80] = compute_kernel(x,   100.0  , 111.0  , 102.0  , 1010.0  , 0.0 );
                        kernels[81] = compute_kernel(x,   112.0  , 201.0  , 122.0  , 1210.0  , 0.0 );
                        kernels[82] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[83] = compute_kernel(x,   112.0  , 200.0  , 121.0  , 1201.0  , 0.0 );
                        kernels[84] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[85] = compute_kernel(x,   120.0  , 202.0  , 201.0  , 2000.0  , 0.0 );
                        kernels[86] = compute_kernel(x,   111.0  , 122.0  , 120.0  , 1122.0  , 0.0 );
                        kernels[87] = compute_kernel(x,   121.0  , 212.0  , 210.0  , 2000.0  , 0.0 );
                        kernels[88] = compute_kernel(x,   112.0  , 210.0  , 201.0  , 1212.0  , 0.0 );
                        kernels[89] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[90] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1000.0  , 0.0 );
                        kernels[91] = compute_kernel(x,   102.0  , 121.0  , 112.0  , 1102.0  , 0.0 );
                        kernels[92] = compute_kernel(x,   121.0  , 202.0  , 201.0  , 2001.0  , 0.0 );
                        kernels[93] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[94] = compute_kernel(x,   112.0  , 202.0  , 200.0  , 1212.0  , 0.0 );
                        kernels[95] = compute_kernel(x,   112.0  , 210.0  , 201.0  , 1211.0  , 0.0 );
                        kernels[96] = compute_kernel(x,   110.0  , 122.0  , 120.0  , 1120.0  , 0.0 );
                        kernels[97] = compute_kernel(x,   22.0  , 110.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[98] = compute_kernel(x,   111.0  , 200.0  , 121.0  , 1202.0  , 0.0 );
                        kernels[99] = compute_kernel(x,   110.0  , 200.0  , 121.0  , 1121.0  , 0.0 );
                        kernels[100] = compute_kernel(x,   111.0  , 122.0  , 120.0  , 1122.0  , 0.0 );
                        kernels[101] = compute_kernel(x,   110.0  , 121.0  , 112.0  , 1110.0  , 0.0 );
                        kernels[102] = compute_kernel(x,   111.0  , 200.0  , 121.0  , 1122.0  , 0.0 );
                        kernels[103] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1002.0  , 0.0 );
                        kernels[104] = compute_kernel(x,   102.0  , 121.0  , 112.0  , 1110.0  , 0.0 );
                        kernels[105] = compute_kernel(x,   112.0  , 210.0  , 201.0  , 1221.0  , 0.0 );
                        kernels[106] = compute_kernel(x,   102.0  , 120.0  , 111.0  , 1022.0  , 0.0 );
                        kernels[107] = compute_kernel(x,   110.0  , 121.0  , 112.0  , 1112.0  , 0.0 );
                        kernels[108] = compute_kernel(x,   112.0  , 201.0  , 122.0  , 1211.0  , 0.0 );
                        kernels[109] = compute_kernel(x,   110.0  , 121.0  , 112.0  , 1110.0  , 0.0 );
                        kernels[110] = compute_kernel(x,   102.0  , 120.0  , 111.0  , 1101.0  , 0.0 );
                        kernels[111] = compute_kernel(x,   102.0  , 120.0  , 111.0  , 1100.0  , 0.0 );
                        kernels[112] = compute_kernel(x,   102.0  , 120.0  , 111.0  , 1101.0  , 0.0 );
                        kernels[113] = compute_kernel(x,   22.0  , 110.0  , 100.0  , 222.0  , 0.0 );
                        kernels[114] = compute_kernel(x,   110.0  , 122.0  , 120.0  , 1111.0  , 0.0 );
                        kernels[115] = compute_kernel(x,   111.0  , 200.0  , 121.0  , 1200.0  , 0.0 );
                        kernels[116] = compute_kernel(x,   110.0  , 121.0  , 112.0  , 1111.0  , 0.0 );
                        kernels[117] = compute_kernel(x,   111.0  , 201.0  , 122.0  , 1202.0  , 0.0 );
                        kernels[118] = compute_kernel(x,   111.0  , 201.0  , 122.0  , 1200.0  , 0.0 );
                        kernels[119] = compute_kernel(x,   111.0  , 201.0  , 122.0  , 1121.0  , 0.0 );
                        kernels[120] = compute_kernel(x,   102.0  , 120.0  , 111.0  , 1100.0  , 0.0 );
                        kernels[121] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[122] = compute_kernel(x,   102.0  , 121.0  , 111.0  , 1022.0  , 0.0 );
                        kernels[123] = compute_kernel(x,   102.0  , 120.0  , 110.0  , 1022.0  , 0.0 );
                        kernels[124] = compute_kernel(x,   100.0  , 111.0  , 101.0  , 1001.0  , 0.0 );
                        kernels[125] = compute_kernel(x,   111.0  , 201.0  , 120.0  , 1112.0  , 0.0 );
                        kernels[126] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[127] = compute_kernel(x,   101.0  , 112.0  , 102.0  , 1020.0  , 0.0 );
                        kernels[128] = compute_kernel(x,   101.0  , 120.0  , 110.0  , 1022.0  , 0.0 );
                        kernels[129] = compute_kernel(x,   110.0  , 122.0  , 120.0  , 1120.0  , 0.0 );
                        kernels[130] = compute_kernel(x,   110.0  , 200.0  , 120.0  , 1110.0  , 0.0 );
                        kernels[131] = compute_kernel(x,   110.0  , 200.0  , 120.0  , 1121.0  , 0.0 );
                        kernels[132] = compute_kernel(x,   120.0  , 211.0  , 202.0  , 1222.0  , 0.0 );
                        kernels[133] = compute_kernel(x,   112.0  , 200.0  , 121.0  , 1210.0  , 0.0 );
                        kernels[134] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[135] = compute_kernel(x,   110.0  , 122.0  , 112.0  , 1111.0  , 0.0 );
                        kernels[136] = compute_kernel(x,   121.0  , 201.0  , 200.0  , 1221.0  , 0.0 );
                        kernels[137] = compute_kernel(x,   110.0  , 121.0  , 112.0  , 1111.0  , 0.0 );
                        kernels[138] = compute_kernel(x,   101.0  , 112.0  , 102.0  , 1012.0  , 0.0 );
                        kernels[139] = compute_kernel(x,   102.0  , 121.0  , 112.0  , 1110.0  , 0.0 );
                        kernels[140] = compute_kernel(x,   102.0  , 121.0  , 112.0  , 1102.0  , 0.0 );
                        kernels[141] = compute_kernel(x,   100.0  , 112.0  , 102.0  , 1011.0  , 0.0 );
                        kernels[142] = compute_kernel(x,   110.0  , 122.0  , 120.0  , 1112.0  , 0.0 );
                        kernels[143] = compute_kernel(x,   102.0  , 120.0  , 110.0  , 1100.0  , 0.0 );
                        kernels[144] = compute_kernel(x,   102.0  , 120.0  , 110.0  , 1100.0  , 0.0 );
                        kernels[145] = compute_kernel(x,   110.0  , 121.0  , 111.0  , 1110.0  , 0.0 );
                        kernels[146] = compute_kernel(x,   112.0  , 202.0  , 200.0  , 1210.0  , 0.0 );
                        kernels[147] = compute_kernel(x,   101.0  , 120.0  , 110.0  , 1021.0  , 0.0 );
                        kernels[148] = compute_kernel(x,   102.0  , 121.0  , 112.0  , 1102.0  , 0.0 );
                        kernels[149] = compute_kernel(x,   102.0  , 120.0  , 110.0  , 1021.0  , 0.0 );
                        kernels[150] = compute_kernel(x,   101.0  , 120.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[151] = compute_kernel(x,   102.0  , 121.0  , 111.0  , 1100.0  , 0.0 );
                        kernels[152] = compute_kernel(x,   102.0  , 121.0  , 112.0  , 1101.0  , 0.0 );
                        kernels[153] = compute_kernel(x,   101.0  , 120.0  , 110.0  , 1020.0  , 0.0 );
                        kernels[154] = compute_kernel(x,   101.0  , 112.0  , 110.0  , 1012.0  , 0.0 );
                        kernels[155] = compute_kernel(x,   112.0  , 201.0  , 120.0  , 1121.0  , 0.0 );
                        kernels[156] = compute_kernel(x,   120.0  , 201.0  , 122.0  , 1210.0  , 0.0 );
                        kernels[157] = compute_kernel(x,   121.0  , 202.0  , 200.0  , 2000.0  , 0.0 );
                        kernels[158] = compute_kernel(x,   120.0  , 200.0  , 121.0  , 1202.0  , 0.0 );
                        kernels[159] = compute_kernel(x,   121.0  , 210.0  , 200.0  , 1221.0  , 0.0 );
                        kernels[160] = compute_kernel(x,   110.0  , 121.0  , 112.0  , 1110.0  , 0.0 );
                        kernels[161] = compute_kernel(x,   122.0  , 210.0  , 201.0  , 2010.0  , 0.0 );
                        kernels[162] = compute_kernel(x,   200.0  , 210.0  , 200.0  , 2002.0  , 0.0 );
                        kernels[163] = compute_kernel(x,   200.0  , 210.0  , 201.0  , 2001.0  , 0.0 );
                        kernels[164] = compute_kernel(x,   121.0  , 201.0  , 122.0  , 1220.0  , 0.0 );
                        kernels[165] = compute_kernel(x,   121.0  , 201.0  , 121.0  , 1210.0  , 0.0 );
                        kernels[166] = compute_kernel(x,   120.0  , 201.0  , 120.0  , 1200.0  , 0.0 );
                        kernels[167] = compute_kernel(x,   120.0  , 201.0  , 120.0  , 1201.0  , 0.0 );
                        kernels[168] = compute_kernel(x,   121.0  , 202.0  , 200.0  , 1220.0  , 0.0 );
                        kernels[169] = compute_kernel(x,   110.0  , 121.0  , 111.0  , 1101.0  , 0.0 );
                        kernels[170] = compute_kernel(x,   121.0  , 202.0  , 122.0  , 1222.0  , 0.0 );
                        kernels[171] = compute_kernel(x,   111.0  , 200.0  , 120.0  , 1120.0  , 0.0 );
                        kernels[172] = compute_kernel(x,   120.0  , 201.0  , 122.0  , 1212.0  , 0.0 );
                        kernels[173] = compute_kernel(x,   110.0  , 122.0  , 112.0  , 1110.0  , 0.0 );
                        kernels[174] = compute_kernel(x,   200.0  , 210.0  , 201.0  , 2010.0  , 0.0 );
                        kernels[175] = compute_kernel(x,   112.0  , 200.0  , 120.0  , 1120.0  , 0.0 );
                        kernels[176] = compute_kernel(x,   112.0  , 201.0  , 121.0  , 1122.0  , 0.0 );
                        kernels[177] = compute_kernel(x,   120.0  , 202.0  , 121.0  , 1210.0  , 0.0 );
                        kernels[178] = compute_kernel(x,   121.0  , 202.0  , 122.0  , 1210.0  , 0.0 );
                        kernels[179] = compute_kernel(x,   112.0  , 200.0  , 112.0  , 1120.0  , 0.0 );
                        kernels[180] = compute_kernel(x,   120.0  , 202.0  , 122.0  , 1212.0  , 0.0 );
                        kernels[181] = compute_kernel(x,   121.0  , 202.0  , 200.0  , 1221.0  , 0.0 );
                        kernels[182] = compute_kernel(x,   121.0  , 210.0  , 200.0  , 2000.0  , 0.0 );
                        kernels[183] = compute_kernel(x,   120.0  , 202.0  , 121.0  , 1202.0  , 0.0 );
                        kernels[184] = compute_kernel(x,   111.0  , 122.0  , 112.0  , 1121.0  , 0.0 );
                        kernels[185] = compute_kernel(x,   112.0  , 200.0  , 120.0  , 1200.0  , 0.0 );
                        kernels[186] = compute_kernel(x,   110.0  , 121.0  , 111.0  , 1110.0  , 0.0 );
                        kernels[187] = compute_kernel(x,   111.0  , 122.0  , 112.0  , 1120.0  , 0.0 );
                        kernels[188] = compute_kernel(x,   122.0  , 202.0  , 200.0  , 1222.0  , 0.0 );
                        kernels[189] = compute_kernel(x,   111.0  , 200.0  , 120.0  , 1120.0  , 0.0 );
                        kernels[190] = compute_kernel(x,   102.0  , 120.0  , 110.0  , 1100.0  , 0.0 );
                        kernels[191] = compute_kernel(x,   121.0  , 202.0  , 121.0  , 1212.0  , 0.0 );
                        kernels[192] = compute_kernel(x,   122.0  , 210.0  , 201.0  , 2010.0  , 0.0 );
                        kernels[193] = compute_kernel(x,   111.0  , 200.0  , 120.0  , 1122.0  , 0.0 );
                        kernels[194] = compute_kernel(x,   112.0  , 201.0  , 120.0  , 1122.0  , 0.0 );
                        kernels[195] = compute_kernel(x,   111.0  , 122.0  , 112.0  , 1120.0  , 0.0 );
                        kernels[196] = compute_kernel(x,   111.0  , 122.0  , 120.0  , 1121.0  , 0.0 );
                        kernels[197] = compute_kernel(x,   110.0  , 121.0  , 112.0  , 1110.0  , 0.0 );
                        kernels[198] = compute_kernel(x,   121.0  , 201.0  , 121.0  , 1212.0  , 0.0 );
                        kernels[199] = compute_kernel(x,   120.0  , 201.0  , 121.0  , 1122.0  , 0.0 );
                        kernels[200] = compute_kernel(x,   122.0  , 210.0  , 200.0  , 2002.0  , 0.0 );
                        kernels[201] = compute_kernel(x,   110.0  , 121.0  , 111.0  , 1110.0  , 0.0 );
                        kernels[202] = compute_kernel(x,   110.0  , 121.0  , 111.0  , 1102.0  , 0.0 );
                        kernels[203] = compute_kernel(x,   110.0  , 121.0  , 111.0  , 1110.0  , 0.0 );
                        kernels[204] = compute_kernel(x,   111.0  , 200.0  , 120.0  , 1121.0  , 0.0 );
                        kernels[205] = compute_kernel(x,   122.0  , 202.0  , 122.0  , 1221.0  , 0.0 );
                        kernels[206] = compute_kernel(x,   111.0  , 121.0  , 112.0  , 1111.0  , 0.0 );
                        kernels[207] = compute_kernel(x,   121.0  , 202.0  , 122.0  , 1220.0  , 0.0 );
                        kernels[208] = compute_kernel(x,   122.0  , 202.0  , 200.0  , 2000.0  , 0.0 );
                        kernels[209] = compute_kernel(x,   120.0  , 200.0  , 120.0  , 1200.0  , 0.0 );
                        kernels[210] = compute_kernel(x,   122.0  , 210.0  , 200.0  , 2001.0  , 0.0 );
                        kernels[211] = compute_kernel(x,   111.0  , 122.0  , 120.0  , 1120.0  , 0.0 );
                        kernels[212] = compute_kernel(x,   112.0  , 200.0  , 120.0  , 1200.0  , 0.0 );
                        kernels[213] = compute_kernel(x,   111.0  , 122.0  , 112.0  , 1111.0  , 0.0 );
                        kernels[214] = compute_kernel(x,   122.0  , 202.0  , 200.0  , 2001.0  , 0.0 );
                        kernels[215] = compute_kernel(x,   120.0  , 202.0  , 122.0  , 1202.0  , 0.0 );
                        kernels[216] = compute_kernel(x,   111.0  , 200.0  , 112.0  , 1120.0  , 0.0 );
                        kernels[217] = compute_kernel(x,   121.0  , 202.0  , 200.0  , 1222.0  , 0.0 );
                        kernels[218] = compute_kernel(x,   121.0  , 202.0  , 122.0  , 1212.0  , 0.0 );
                        kernels[219] = compute_kernel(x,   111.0  , 122.0  , 112.0  , 1111.0  , 0.0 );
                        kernels[220] = compute_kernel(x,   120.0  , 201.0  , 121.0  , 1210.0  , 0.0 );
                        kernels[221] = compute_kernel(x,   122.0  , 202.0  , 122.0  , 1222.0  , 0.0 );
                        kernels[222] = compute_kernel(x,   112.0  , 201.0  , 121.0  , 1122.0  , 0.0 );
                        kernels[223] = compute_kernel(x,   111.0  , 122.0  , 112.0  , 1112.0  , 0.0 );
                        kernels[224] = compute_kernel(x,   111.0  , 122.0  , 112.0  , 1112.0  , 0.0 );
                        kernels[225] = compute_kernel(x,   112.0  , 200.0  , 120.0  , 1122.0  , 0.0 );
                        kernels[226] = compute_kernel(x,   200.0  , 210.0  , 201.0  , 2010.0  , 0.0 );
                        kernels[227] = compute_kernel(x,   120.0  , 202.0  , 122.0  , 1210.0  , 0.0 );
                        kernels[228] = compute_kernel(x,   110.0  , 121.0  , 111.0  , 1110.0  , 0.0 );
                        decisions[0] = -0.042374864761
                        + kernels[0]
                        + kernels[1] * 0.29003844849
                        + kernels[2] * 0.648682068407
                        + kernels[3]
                        + kernels[4] * 0.254369223978
                        + kernels[5]
                        + kernels[6] * 0.223081286922
                        + kernels[7]
                        + kernels[8] * 0.043429272584
                        + kernels[9]
                        + kernels[10] * 0.29613668141
                        + kernels[11]
                        + kernels[12] * 0.648619455613
                        + kernels[13]
                        + kernels[14]
                        + kernels[15] * 0.648532889337
                        + kernels[16] * 0.761590577888
                        + kernels[17]
                        + kernels[18]
                        + kernels[19] * 0.404591178036
                        + kernels[20] * 0.331765322913
                        + kernels[21] * 0.052416028159
                        + kernels[22] * 0.196305398768
                        + kernels[23] * 0.99021230126
                        + kernels[24]
                        + kernels[25]
                        + kernels[26] * 0.702835287122
                        + kernels[28]
                        + kernels[29] * 0.571143103011
                        + kernels[30] * 0.077696648033
                        + kernels[31]
                        + kernels[32]
                        + kernels[33] * 0.649031630085
                        + kernels[34]
                        + kernels[35]
                        + kernels[36] * 0.369489377239
                        + kernels[37] * 0.818909283696
                        + kernels[38]
                        + kernels[39] * 0.571416742865
                        + kernels[40] * 0.267830002037
                        + kernels[41] * 0.648270498922
                        + kernels[42] * 0.959602253244
                        + kernels[43] * 0.999152854929
                        + kernels[44] * 0.402983956586
                        + kernels[45]
                        + kernels[46]
                        + kernels[47] * 0.91820853299
                        + kernels[48] * 0.918014159164
                        + kernels[49]
                        + kernels[50] * 0.749960489138
                        + kernels[51] * 0.255744428827
                        + kernels[52] * 0.649533081854
                        + kernels[53] * 0.699075273493
                        + kernels[54] * 0.99842645175
                        + kernels[55]
                        + kernels[56] * 0.998871474998
                        + kernels[57] * 0.042409327675
                        + kernels[58]
                        + kernels[59] * 0.648548373677
                        + kernels[60] * 0.930817423945
                        + kernels[61]
                        + kernels[62]
                        + kernels[63] * 0.867686923569
                        + kernels[64] * 0.255922531757
                        + kernels[65] * 0.572163899001
                        + kernels[66]
                        + kernels[67] * 0.194714206482
                        + kernels[68]
                        + kernels[69] * 0.845702834478
                        + kernels[70]
                        + kernels[71] * 0.941566702961
                        + kernels[72] * -0.473570244072
                        + kernels[74] * -0.68349597477
                        - kernels[75]
                        + kernels[76] * -0.957768959843
                        + kernels[77] * -0.957372250426
                        + kernels[78] * -0.24199018843
                        - kernels[79]
                        - kernels[80]
                        + kernels[81] * -0.337572376424
                        + kernels[82] * -0.521021369287
                        + kernels[83] * -0.442867489572
                        - kernels[84]
                        + kernels[85] * -0.699677022742
                        + kernels[87] * -0.957524178367
                        + kernels[88] * -0.596371250223
                        + kernels[89] * -0.437230629041
                        - kernels[90]
                        + kernels[91] * -0.532774817572
                        + kernels[92] * -0.700564397304
                        - kernels[93]
                        + kernels[94] * -0.843259141445
                        + kernels[95] * -0.59563838628
                        - kernels[97]
                        + kernels[98] * -0.47365690689
                        + kernels[99] * -0.129396272193
                        + kernels[100] * -0.885104348155
                        + kernels[102] * -0.645082654868
                        + kernels[103] * -0.595780377348
                        + kernels[104] * -1.0
                        + kernels[105] * -0.957946373647
                        + kernels[106] * -0.603103006524
                        + kernels[107] * -0.777774100173
                        + kernels[108] * -0.596623880478
                        + kernels[109] * -0.128033888751
                        + kernels[110] * -0.28458605527
                        + kernels[111] * -0.055454848423
                        + kernels[112] * -0.965441837215
                        - kernels[113]
                        + kernels[114] * -0.596631358772
                        + kernels[115] * -0.47275506852
                        + kernels[117] * -0.616338173349
                        + kernels[118] * -0.616880803593
                        + kernels[119] * -0.749909527841
                        - kernels[120]
                        - kernels[121]
                        + kernels[122] * -0.595725555654
                        + kernels[124] * -0.596295521204
                        + kernels[125] * -0.911799508406
                        - kernels[126]
                        + kernels[127] * -0.957438426051
                        + kernels[128] * -0.587741234827
                        + kernels[129] * -0.884749463605
                        + kernels[130] * -0.911980767852
                        + kernels[131] * -0.283363030007
                        + kernels[132] * -0.957376590955
                        + kernels[133] * -0.700680838267
                        - kernels[134]
                        + kernels[135] * -0.203646959568
                        + kernels[136] * -0.95770852373
                        + kernels[138] * -0.582842723725
                        + kernels[139] * -0.957412051952
                        - kernels[140]
                        + kernels[141] * -0.84442549671
                        + kernels[142] * -0.595305407185
                        + kernels[144] * -0.594169269066
                        + kernels[145] * -0.59657447486
                        + kernels[146] * -0.843521484281
                        + kernels[147] * -0.275445526365
                        + kernels[148] * -0.988232057872
                        + kernels[149] * -0.240437474662
                        + kernels[150] * -0.548904503485
                        + kernels[151] * -0.43880731069
                        + kernels[152] * -0.137188161409
                        - kernels[153]
                        + kernels[154] * -0.994527367097
                        ;
                        decisions[1] = 0.08136866812
                        + kernels[0] * 0.572188921414
                        + kernels[1] * 0.255900917662
                        + kernels[2] * 0.571285173764
                        + kernels[3] * 0.918461846181
                        + kernels[4] * 0.22463842246
                        + kernels[6] * 0.197877476023
                        + kernels[7] * 0.59090105096
                        + kernels[9] * 0.918641206889
                        + kernels[10] * 0.301194026072
                        + kernels[12] * 0.572077847028
                        + kernels[14] * 0.918652590878
                        + kernels[15] * 0.571379005996
                        + kernels[16] * 0.671543478164
                        + kernels[17] * 0.918321458206
                        + kernels[18] * 0.918429023619
                        + kernels[19] * 0.357609898134
                        + kernels[20] * 0.163542219163
                        + kernels[23] * 0.918191082348
                        + kernels[24] * 0.918673410225
                        + kernels[27] * 0.065577549257
                        + kernels[28] * 0.918228288919
                        + kernels[29] * 0.50340970257
                        + kernels[31] * 0.57130900562
                        + kernels[32] * 0.324634654378
                        + kernels[33] * 0.57134488164
                        + kernels[34] * 0.671854821816
                        + kernels[35] * 0.571693812927
                        + kernels[38] * 0.91860537049
                        + kernels[39] * 0.504216804943
                        + kernels[40] * 0.234481519094
                        + kernels[41] * 0.5715878745
                        + kernels[42] * 0.737872027104
                        + kernels[43] * 0.671711666443
                        + kernels[44] * 0.354778437
                        + kernels[46] * 0.91877019799
                        + kernels[47] * 0.809459343476
                        + kernels[48] * 0.809117147311
                        + kernels[49] * 0.918373335065
                        + kernels[50] * 0.660768012511
                        + kernels[51] * 0.225738564875
                        + kernels[52] * 0.571388179282
                        + kernels[53] * 0.671681356289
                        + kernels[54] * 0.171439892912
                        + kernels[56] * 0.918791028312
                        + kernels[58] * 0.571478466677
                        + kernels[59] * 0.572240924789
                        + kernels[60] * 0.66078378304
                        + kernels[61] * 0.156950750607
                        + kernels[62] * 0.918712513295
                        + kernels[63] * 0.11148624548
                        + kernels[64] * 0.224980879821
                        + kernels[65] * 0.503624431566
                        + kernels[66] * 0.91870204984
                        + kernels[67] * 0.171579457192
                        + kernels[68]
                        + kernels[69] * 0.745104122929
                        + kernels[70] * 0.91870777507
                        + kernels[71] * 0.184356953766
                        + kernels[155] * -0.232586423859
                        + kernels[156] * -0.357935152912
                        + kernels[157] * -0.673438139351
                        + kernels[158] * -0.834297040184
                        - kernels[159]
                        + kernels[161] * -0.081682238759
                        + kernels[162] * -0.790537410271
                        + kernels[163] * -0.790456437009
                        + kernels[164] * -0.673723264182
                        + kernels[165] * -0.413453359874
                        + kernels[166] * -0.491235981874
                        + kernels[167] * -0.232295952929
                        + kernels[168] * -0.952396819491
                        + kernels[169] * -0.673655391242
                        + kernels[170] * -0.553628214114
                        + kernels[172] * -0.435935024752
                        + kernels[173] * -0.604476332931
                        + kernels[174] * -0.081367708368
                        + kernels[175] * -0.517097266485
                        + kernels[177] * -0.38933839005
                        + kernels[178] * -0.441032989442
                        + kernels[179] * -0.672401257081
                        + kernels[180] * -0.32814089905
                        + kernels[182] * -0.934451499846
                        + kernels[183] * -0.446244501992
                        + kernels[184] * -0.673692274581
                        + kernels[185] * -0.082367169952
                        + kernels[188] * -0.673285182613
                        + kernels[189] * -0.59357363794
                        - kernels[190]
                        + kernels[191] * -0.341480059792
                        - kernels[192]
                        + kernels[193] * -0.592056473688
                        + kernels[194] * -0.122544965936
                        + kernels[195] * -0.672728781577
                        + kernels[196] * -0.673620409178
                        + kernels[197] * -0.099423927764
                        + kernels[198] * -0.427474390321
                        - kernels[199]
                        + kernels[200] * -0.882395081534
                        + kernels[202] * -0.672780410876
                        + kernels[205] * -0.231805771328
                        + kernels[206] * -0.450423578186
                        + kernels[207] * -0.468744423595
                        + kernels[208] * -0.265149169513
                        + kernels[209] * -0.622726767851
                        + kernels[210] * -0.202362853006
                        + kernels[211] * -0.672288434267
                        + kernels[212] * -0.998946455829
                        + kernels[214] * -0.672761434779
                        + kernels[215] * -0.723648670383
                        + kernels[216] * -0.673455504192
                        + kernels[217] * -0.54371090956
                        + kernels[218] * -0.228312336444
                        + kernels[220] * -0.134820474292
                        + kernels[221] * -0.532934416716
                        + kernels[222] * -0.67397616563
                        + kernels[224] * -0.840822849261
                        + kernels[225] * -0.195734634473
                        - kernels[226]
                        + kernels[227] * -0.090367128825
                        + kernels[228] * -0.672828444055
                        ;
                        decisions[2] = 0.123161820015
                        + kernels[72]
                        + kernels[73]
                        + kernels[74]
                        + kernels[76]
                        + kernels[77]
                        + kernels[78] * 0.155898902265
                        + kernels[80] * 0.704613849138
                        + kernels[81] * 0.310588217364
                        + kernels[83] * 0.985426545268
                        + kernels[85] * 0.94395856484
                        + kernels[86] * 0.482566973136
                        + kernels[87] * 0.876565961744
                        + kernels[88] * 0.546232358901
                        + kernels[90] * 0.545893002355
                        + kernels[92]
                        + kernels[94] * 0.772326132779
                        + kernels[95] * 0.545150692227
                        + kernels[96] * 0.742517890879
                        + kernels[97] * 0.545893002355
                        + kernels[98] * 0.246283256751
                        + kernels[99] * 0.272031524837
                        + kernels[100] * 0.994171398838
                        + kernels[101]
                        + kernels[102]
                        + kernels[103] * 0.545287396222
                        + kernels[105] * 0.877092514664
                        + kernels[106] * 0.215604774158
                        + kernels[107] * 0.563265405137
                        + kernels[108] * 0.545019248851
                        + kernels[109]
                        + kernels[112] * 0.275952271788
                        + kernels[113] * 0.877074702317
                        + kernels[114] * 0.546251307816
                        + kernels[115]
                        + kernels[116] * 0.753921564461
                        + kernels[117] * 0.564302799178
                        + kernels[118] * 0.381035684673
                        + kernels[119]
                        + kernels[120] * 0.020122491916
                        + kernels[122] * 0.545697377412
                        + kernels[123] * 0.099091151065
                        + kernels[124] * 0.546142104812
                        + kernels[125] * 0.835454281767
                        + kernels[126] * 0.877109098245
                        + kernels[127] * 0.876875387955
                        + kernels[128] * 0.450457090409
                        + kernels[129] * 0.98777439348
                        + kernels[130] * 0.835124053234
                        + kernels[131]
                        + kernels[132] * 0.907260679415
                        + kernels[133] * 0.640682828423
                        + kernels[135]
                        + kernels[136]
                        + kernels[137]
                        + kernels[138] * 0.641559267436
                        + kernels[139] * 0.876852411543
                        + kernels[141] * 0.287066254671
                        + kernels[142] * 0.545129332379
                        + kernels[143] * 0.791166741401
                        + kernels[144] * 0.799641140771
                        + kernels[145]
                        + kernels[146] * 0.772472818886
                        + kernels[148] * 0.659709079347
                        + kernels[149] * 0.188265212131
                        + kernels[151] * 0.422803784375
                        + kernels[152] * 0.186173799127
                        + kernels[153] * 0.711241794331
                        + kernels[154] * 0.876872803558
                        + kernels[155] * -0.08708747402
                        + kernels[156] * -0.372376905201
                        - kernels[157]
                        + kernels[158] * -0.866236963566
                        - kernels[159]
                        - kernels[160]
                        + kernels[161] * -0.124863653791
                        + kernels[162] * -0.820914667125
                        + kernels[163] * -0.821491116224
                        + kernels[164] * -0.699602355852
                        + kernels[165] * -0.429594493322
                        + kernels[166] * -0.509988200682
                        + kernels[167] * -0.242191633285
                        - kernels[168]
                        + kernels[169] * -0.69971575848
                        + kernels[170] * -0.575531475316
                        + kernels[171] * -0.919537417591
                        + kernels[172] * -0.452438685713
                        - kernels[173]
                        + kernels[174] * -0.123202142838
                        + kernels[176] * -0.328008935885
                        + kernels[177] * -0.40453670881
                        + kernels[178] * -0.457270215958
                        + kernels[179] * -0.698392348586
                        + kernels[180] * -0.341452238348
                        + kernels[181] * -0.475606540158
                        - kernels[182]
                        + kernels[183] * -0.463412028236
                        + kernels[184] * -0.699735332093
                        + kernels[185] * -0.903961706594
                        + kernels[186] * -0.642422425887
                        + kernels[187] * -0.305242146083
                        + kernels[188] * -0.699049629708
                        + kernels[189] * -0.655218551008
                        - kernels[190]
                        + kernels[191] * -0.355180482791
                        + kernels[192] * -0.998110451159
                        - kernels[193]
                        - kernels[195]
                        - kernels[196]
                        - kernels[197]
                        + kernels[198] * -0.444054222045
                        - kernels[199]
                        + kernels[200] * -0.922670250938
                        - kernels[201]
                        + kernels[202] * -0.698750790706
                        - kernels[203]
                        + kernels[204] * -0.84952774524
                        + kernels[205] * -0.240598397384
                        - kernels[206]
                        + kernels[207] * -0.486780227468
                        + kernels[208] * -0.210613454924
                        + kernels[209] * -0.646595731636
                        + kernels[210] * -0.277246364776
                        - kernels[211]
                        + kernels[212] * -0.985126412296
                        + kernels[213] * -0.03979222993
                        - kernels[214]
                        + kernels[215] * -0.751731116154
                        + kernels[216] * -0.699500159759
                        + kernels[217] * -0.643261082841
                        + kernels[218] * -0.236812186506
                        - kernels[219]
                        + kernels[220] * -0.139782794505
                        + kernels[221] * -0.553359596022
                        + kernels[222] * -0.993792553248
                        + kernels[223] * -0.079184941172
                        + kernels[224] * -0.962242959825
                        + kernels[225] * -0.068457982705
                        - kernels[226]
                        + kernels[227] * -0.093417436639
                        - kernels[228]
                        ;
                        votes[decisions[0] > 0 ? 0 : 1] += 1;
                        votes[decisions[1] > 0 ? 0 : 2] += 1;
                        votes[decisions[2] > 0 ? 1 : 2] += 1;
                        int val = votes[0];
                        int idx = 0;

                        for (int i = 1; i < 3; i++) {
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