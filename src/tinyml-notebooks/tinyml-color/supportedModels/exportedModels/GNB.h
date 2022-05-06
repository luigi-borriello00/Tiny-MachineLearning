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
                        float votes[3] = { 0.0f };
                        float theta[5] = { 0 };
                        float sigma[5] = { 0 };
                        theta[0] = -4.301041666667; theta[1] = -0.091853932584; theta[2] = -0.708333333333; theta[3] = -3.642633928571; theta[4] = 87.64375;
                        sigma[0] = 10.563806751237; sigma[1] = 0.049163935249; sigma[2] = 1.845810151121; sigma[3] = 13.492458380834; sigma[4] = 133716.84192849594;
                        votes[0] = 0.333333333333 - gauss(x, theta, sigma);
                        theta[0] = -0.0203125; theta[1] = 0.138202247191; theta[2] = 0.350694444444; theta[3] = -0.062220982143; theta[4] = 0.0;
                        sigma[0] = 1.906841419206; sigma[1] = 0.131314626449; sigma[2] = 1.712098249115; sigma[3] = 2.344865380072; sigma[4] = 9.2558529e-05;
                        votes[1] = 0.333333333333 - gauss(x, theta, sigma);
                        theta[0] = 1.380729166667; theta[1] = 0.652036516854; theta[2] = 1.149652777778; theta[3] = 1.390904017857; theta[4] = 0.0;
                        sigma[0] = 1.655615290734; sigma[1] = 0.168331136163; sigma[2] = 2.993225154015; sigma[3] = 5.801583980598; sigma[4] = 9.2558529e-05;
                        votes[2] = 0.333333333333 - gauss(x, theta, sigma);
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
                    /**
                    * Compute gaussian value
                    */
                    float gauss(float *x, float *theta, float *sigma) {
                        float gauss = 0.0f;

                        for (uint16_t i = 0; i < 5; i++) {
                            gauss += log(sigma[i]);
                            gauss += abs(x[i] - theta[i]) / sigma[i];
                        }

                        return gauss;
                    }
                };
            }
        }
    }