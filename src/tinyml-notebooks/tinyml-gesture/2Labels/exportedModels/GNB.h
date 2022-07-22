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
                        float theta[42] = { 0 };
                        float sigma[42] = { 0 };
                        theta[0] = 0.059; theta[1] = -0.056625; theta[2] = 0.950625; theta[3] = 0.062; theta[4] = -0.0215; theta[5] = 0.966; theta[6] = 0.07475; theta[7] = 0.014375; theta[8] = 1.077125; theta[9] = 0.080625; theta[10] = -0.090875; theta[11] = 1.056125; theta[12] = 0.142625; theta[13] = -0.03225; theta[14] = 0.805875; theta[15] = 0.15925; theta[16] = -0.00625; theta[17] = 0.856; theta[18] = 0.120125; theta[19] = 0.07; theta[20] = 1.0075; theta[21] = 0.0705; theta[22] = 0.049375; theta[23] = 1.037; theta[24] = 0.0385; theta[25] = -0.0265; theta[26] = 0.996625; theta[27] = 0.04; theta[28] = -0.03525; theta[29] = 0.983375; theta[30] = 0.05425; theta[31] = -0.008625; theta[32] = 0.986125; theta[33] = 0.05825; theta[34] = -0.000625; theta[35] = 0.98275; theta[36] = 0.055125; theta[37] = -0.007; theta[38] = 0.9835; theta[39] = 0.05525; theta[40] = -0.007; theta[41] = 0.986125;
                        sigma[0] = 0.001614000048; sigma[1] = 0.002504859423; sigma[2] = 0.023913359423; sigma[3] = 0.002281000048; sigma[4] = 0.003787750048; sigma[5] = 0.002219000048; sigma[6] = 0.002387437548; sigma[7] = 0.009099609423; sigma[8] = 0.007037984423; sigma[9] = 0.001823359423; sigma[10] = 0.005290484423; sigma[11] = 0.010271234423; sigma[12] = 0.002104359423; sigma[13] = 0.002629937548; sigma[14] = 0.010764234423; sigma[15] = 0.003769437548; sigma[16] = 0.008030937548; sigma[17] = 0.009044000048; sigma[18] = 0.003458734423; sigma[19] = 0.012435000048; sigma[20] = 0.006826250048; sigma[21] = 0.004294750048; sigma[22] = 0.009243359423; sigma[23] = 0.002358500048; sigma[24] = 0.002032750048; sigma[25] = 0.004427750048; sigma[26] = 0.001234859423; sigma[27] = 0.001465000048; sigma[28] = 0.003657437548; sigma[29] = 0.001264859423; sigma[30] = 0.001516937548; sigma[31] = 0.003084359423; sigma[32] = 0.000713734423; sigma[33] = 0.001519437548; sigma[34] = 0.002913359423; sigma[35] = 0.000489937548; sigma[36] = 0.001424984423; sigma[37] = 0.002873500048; sigma[38] = 0.000672750048; sigma[39] = 0.001459937548; sigma[40] = 0.003008500048; sigma[41] = 0.000631234423;
                        votes[0] = 0.5 - gauss(x, theta, sigma);
                        theta[0] = 0.014375; theta[1] = 0.007375; theta[2] = 0.9595; theta[3] = 0.0195; theta[4] = 0.0455; theta[5] = 0.96075; theta[6] = 0.0225; theta[7] = 0.076875; theta[8] = 1.09925; theta[9] = 0.042625; theta[10] = -0.128125; theta[11] = 1.097125; theta[12] = 0.1105; theta[13] = -0.069875; theta[14] = 0.867125; theta[15] = 0.175; theta[16] = 0.101625; theta[17] = 0.775; theta[18] = 0.172; theta[19] = 0.164; theta[20] = 0.88; theta[21] = 0.097; theta[22] = 0.141875; theta[23] = 1.0005; theta[24] = 0.0225; theta[25] = 0.071875; theta[26] = 1.038625; theta[27] = -0.011125; theta[28] = 0.03175; theta[29] = 1.012875; theta[30] = -0.012375; theta[31] = 0.028875; theta[32] = 0.994125; theta[33] = -0.008875; theta[34] = 0.02975; theta[35] = 0.979125; theta[36] = -0.002875; theta[37] = 0.029875; theta[38] = 0.976; theta[39] = -0.000625; theta[40] = 0.021375; theta[41] = 0.9845;
                        sigma[0] = 0.002429609423; sigma[1] = 0.001361859423; sigma[2] = 0.024127250048; sigma[3] = 0.002819750048; sigma[4] = 0.004489750048; sigma[5] = 0.003096937548; sigma[6] = 0.005108750048; sigma[7] = 0.016483984423; sigma[8] = 0.007109437548; sigma[9] = 0.006106859423; sigma[10] = 0.020262734423; sigma[11] = 0.010537984423; sigma[12] = 0.003479750048; sigma[13] = 0.015883734423; sigma[14] = 0.009557984423; sigma[15] = 0.003667500048; sigma[16] = 0.016678609423; sigma[17] = 0.004210000048; sigma[18] = 0.003566000048; sigma[19] = 0.016196500048; sigma[20] = 0.007980000048; sigma[21] = 0.005061000048; sigma[22] = 0.015750234423; sigma[23] = 0.008109750048; sigma[24] = 0.004268750048; sigma[25] = 0.009700234423; sigma[26] = 0.001811859423; sigma[27] = 0.003457484423; sigma[28] = 0.004756937548; sigma[29] = 0.001955484423; sigma[30] = 0.004393109423; sigma[31] = 0.004292484423; sigma[32] = 0.001361734423; sigma[33] = 0.004052484423; sigma[34] = 0.002439937548; sigma[35] = 0.000697984423; sigma[36] = 0.003565484423; sigma[37] = 0.001946234423; sigma[38] = 0.000774000048; sigma[39] = 0.003298359423; sigma[40] = 0.001919359423; sigma[41] = 0.000769750048;
                        votes[1] = 0.5 - gauss(x, theta, sigma);
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

                        for (uint16_t i = 0; i < 42; i++) {
                            gauss += log(sigma[i]);
                            gauss += abs(x[i] - theta[i]) / sigma[i];
                        }

                        return gauss;
                    }
                };
            }
        }
    }