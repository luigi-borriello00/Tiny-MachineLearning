#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class GaussianNB {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        float votes[2] = { 0.0f };
                        float theta[60] = { 0 };
                        float sigma[60] = { 0 };
                        theta[0] = -0.040674846626; theta[1] = 0.027801635992; theta[2] = 0.980214723926; theta[3] = -0.040306748466; theta[4] = 0.027934560327; theta[5] = 0.980245398773; theta[6] = -0.040623721881; theta[7] = 0.027627811861; theta[8] = 0.980194274029; theta[9] = -0.040439672802; theta[10] = 0.028036809816; theta[11] = 0.980235173824; theta[12] = -0.040398773006; theta[13] = 0.027586912065; theta[14] = 0.980224948875; theta[15] = -0.040521472393; theta[16] = 0.028026584867; theta[17] = 0.980235173824; theta[18] = -0.040255623722; theta[19] = 0.027658486708; theta[20] = 0.980235173824; theta[21] = -0.040572597137; theta[22] = 0.028006134969; theta[23] = 0.980245398773; theta[24] = -0.040235173824; theta[25] = 0.027658486708; theta[26] = 0.980224948875; theta[27] = -0.040613496933; theta[28] = 0.027883435583; theta[29] = 0.98027607362; theta[30] = -0.04018404908; theta[31] = 0.027801635992; theta[32] = 0.980265848671; theta[33] = -0.040674846626; theta[34] = 0.027770961145; theta[35] = 0.980194274029; theta[36] = -0.040235173824; theta[37] = 0.027934560327; theta[38] = 0.980245398773; theta[39] = -0.040572597137; theta[40] = 0.027597137014; theta[41] = 0.980265848671; theta[42] = -0.040286298569; theta[43] = 0.028047034765; theta[44] = 0.980245398773; theta[45] = -0.040398773006; theta[46] = 0.027423312883; theta[47] = 0.980235173824; theta[48] = -0.040480572597; theta[49] = 0.028128834356; theta[50] = 0.98027607362; theta[51] = -0.040316973415; theta[52] = 0.027556237219; theta[53] = 0.980214723926; theta[54] = -0.040685071575; theta[55] = 0.027801635992; theta[56] = 0.980224948875; theta[57] = -0.040398773006; theta[58] = 0.027740286299; theta[59] = 0.980245398773;
                        sigma[0] = 7.3982211e-05; sigma[1] = 0.000110197872; sigma[2] = 2.101134e-06; sigma[3] = 7.3934537e-05; sigma[4] = 0.000112502876; sigma[5] = 2.393769e-06; sigma[6] = 7.4559848e-05; sigma[7] = 0.000111755138; sigma[8] = 1.904999e-06; sigma[9] = 7.3937569e-05; sigma[10] = 0.000112914802; sigma[11] = 2.296433e-06; sigma[12] = 7.3767362e-05; sigma[13] = 0.000112172918; sigma[14] = 2.198888e-06; sigma[15] = 7.324545e-05; sigma[16] = 0.000110727311; sigma[17] = 2.296433e-06; sigma[18] = 7.4270036e-05; sigma[19] = 0.000112001979; sigma[20] = 2.296433e-06; sigma[21] = 7.451876e-05; sigma[22] = 0.000111464176; sigma[23] = 2.393769e-06; sigma[24] = 7.4280073e-05; sigma[25] = 0.000108320998; sigma[26] = 2.198888e-06; sigma[27] = 7.4674748e-05; sigma[28] = 0.000109528336; sigma[29] = 2.684521e-06; sigma[30] = 7.4199256e-05; sigma[31] = 0.000110197872; sigma[32] = 2.587813e-06; sigma[33] = 7.3982211e-05; sigma[34] = 0.000111800303; sigma[35] = 1.904999e-06; sigma[36] = 7.3666576e-05; sigma[37] = 0.000111071384; sigma[38] = 2.393769e-06; sigma[39] = 7.4109762e-05; sigma[40] = 0.000110688419; sigma[41] = 2.587813e-06; sigma[42] = 7.4151163e-05; sigma[43] = 0.000110398607; sigma[44] = 2.393769e-06; sigma[45] = 7.4789857e-05; sigma[46] = 0.000110538599; sigma[47] = 2.296433e-06; sigma[48] = 7.5126925e-05; sigma[49] = 0.000110097922; sigma[50] = 2.684521e-06; sigma[51] = 7.4643905e-05; sigma[52] = 0.000110490193; sigma[53] = 2.101134e-06; sigma[54] = 7.1821067e-05; sigma[55] = 0.000111833864; sigma[56] = 2.198888e-06; sigma[57] = 7.3562863e-05; sigma[58] = 0.000113809851; sigma[59] = 2.393769e-06;
                        votes[0] = 0.466825775656 - gauss(x, theta, sigma);
                        theta[0] = -0.068146821844; theta[1] = -0.020152193375; theta[2] = 0.981441360788; theta[3] = -0.068227394808; theta[4] = -0.020196956132; theta[5] = 0.981432408236; theta[6] = -0.068272157565; theta[7] = -0.020196956132; theta[8] = 0.981298119964; theta[9] = -0.068316920322; theta[10] = -0.020295434199; theta[11] = 0.981351835273; theta[12] = -0.068263205013; theta[13] = -0.020349149508; theta[14] = 0.981226499552; theta[15] = -0.068200537153; theta[16] = -0.020331244405; theta[17] = 0.981280214861; theta[18] = -0.068227394808; theta[19] = -0.020322291853; theta[20] = 0.981298119964; theta[21] = -0.068191584602; theta[22] = -0.020322291853; theta[23] = 0.981360787825; theta[24] = -0.068272157565; theta[25] = -0.020277529096; theta[26] = 0.981307072516; theta[27] = -0.068254252462; theta[28] = -0.020295434199; theta[29] = 0.981342882722; theta[30] = -0.068236347359; theta[31] = -0.020196956132; theta[32] = 0.981369740376; theta[33] = -0.068173679499; theta[34] = -0.020044762757; theta[35] = 0.981530886303; theta[36] = -0.068173679499; theta[37] = -0.019982094897; theta[38] = 0.981557743957; theta[39] = -0.06818263205; theta[40] = -0.019883616831; theta[41] = 0.981647269472; theta[42] = -0.06824529991; theta[43] = -0.019829901522; theta[44] = 0.981763652641; theta[45] = -0.068209489705; theta[46] = -0.019865711728; theta[47] = 0.98163831692; theta[48] = -0.068227394808; theta[49] = -0.02; theta[50] = 0.981566696509; theta[51] = -0.068200537153; theta[52] = -0.02; theta[53] = 0.981602506714; theta[54] = -0.068209489705; theta[55] = -0.019964189794; theta[56] = 0.981629364369; theta[57] = -0.068290062668; theta[58] = -0.020107430618; theta[59] = 0.981459265891;
                        sigma[0] = 1.5097514e-05; sigma[1] = 8.5115603e-05; sigma[2] = 5.6561693e-05; sigma[3] = 1.4583924e-05; sigma[4] = 8.7159061e-05; sigma[5] = 5.7930303e-05; sigma[6] = 1.4292986e-05; sigma[7] = 8.6084755e-05; sigma[8] = 5.7491251e-05; sigma[9] = 1.3998041e-05; sigma[10] = 8.4872434e-05; sigma[11] = 5.6095551e-05; sigma[12] = 1.4351494e-05; sigma[13] = 8.4121605e-05; sigma[14] = 5.6239657e-05; sigma[15] = 1.4756563e-05; sigma[16] = 8.5566196e-05; sigma[17] = 5.7000263e-05; sigma[18] = 1.4583924e-05; sigma[19] = 8.6198726e-05; sigma[20] = 5.6775047e-05; sigma[21] = 1.4813789e-05; sigma[22] = 8.530347e-05; sigma[23] = 5.6518893e-05; sigma[24] = 1.4292986e-05; sigma[25] = 8.5777948e-05; sigma[26] = 5.6125045e-05; sigma[27] = 1.4409842e-05; sigma[28] = 8.5767689e-05; sigma[29] = 5.7104456e-05; sigma[30] = 1.4526057e-05; sigma[31] = 8.6442857e-05; sigma[32] = 5.8195433e-05; sigma[33] = 1.492776e-05; sigma[34] = 8.4420558e-05; sigma[35] = 5.6474652e-05; sigma[36] = 1.492776e-05; sigma[37] = 8.4690818e-05; sigma[38] = 5.6123122e-05; sigma[39] = 1.4870855e-05; sigma[40] = 8.5304272e-05; sigma[41] = 5.6910497e-05; sigma[42] = 1.446803e-05; sigma[43] = 8.5288883e-05; sigma[44] = 5.5886845e-05; sigma[45] = 1.4699177e-05; sigma[46] = 8.4404528e-05; sigma[47] = 5.6313233e-05; sigma[48] = 1.4583924e-05; sigma[49] = 8.5944496e-05; sigma[50] = 5.6005625e-05; sigma[51] = 1.4756563e-05; sigma[52] = 8.6481649e-05; sigma[53] = 5.6429288e-05; sigma[54] = 1.4699177e-05; sigma[55] = 8.5585111e-05; sigma[56] = 5.6611064e-05; sigma[57] = 1.4175489e-05; sigma[58] = 8.5932954e-05; sigma[59] = 5.6509757e-05;
                        votes[1] = 0.533174224344 - gauss(x, theta, sigma);
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
                    /**
                    * Compute gaussian value
                    */
                    float gauss(float *x, float *theta, float *sigma) {
                        float gauss = 0.0f;

                        for (uint16_t i = 0; i < 60; i++) {
                            gauss += log(sigma[i]);
                            gauss += abs(x[i] - theta[i]) / sigma[i];
                        }

                        return gauss;
                    }
                };
            }
        }
    }