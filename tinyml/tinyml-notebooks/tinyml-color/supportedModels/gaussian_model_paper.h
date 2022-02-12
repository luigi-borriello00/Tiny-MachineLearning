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
                        float votes[4] = { 0.0f };
                        float theta[5] = { 0 };
                        float sigma[5] = { 0 };
                        theta[0] = 57.516666666667; theta[1] = 116.058333333333; theta[2] = 104.458333333333; theta[3] = 805.783333333333; theta[4] = 116.858333333333;
                        sigma[0] = 1636.849872286155; sigma[1] = 470.888413952824; sigma[2] = 220.381747286157; sigma[3] = 144582.7532056197; sigma[4] = 174875.15508061938;
                        votes[0] = 0.3 - gauss(x, theta, sigma);
                        theta[0] = 18.75; theta[1] = 92.4125; theta[2] = 58.65; theta[3] = 293.2625; theta[4] = 0.0;
                        sigma[0] = 14.962650063935; sigma[1] = 635.042493813935; sigma[2] = 1558.152650063935; sigma[3] = 63849.643743813955; sigma[4] = 0.000150063935;
                        votes[1] = 0.2 - gauss(x, theta, sigma);
                        theta[0] = 69.8125; theta[1] = 110.44375; theta[2] = 101.825; theta[3] = 896.99375; theta[4] = 0.0;
                        sigma[0] = 1451.239993813935; sigma[1] = 6.196986001435; sigma[2] = 4.407025063935; sigma[3] = 72883.30636100151; sigma[4] = 0.000150063935;
                        votes[2] = 0.4 - gauss(x, theta, sigma);
                        theta[0] = 61.25; theta[1] = 109.775; theta[2] = 102.275; theta[3] = 753.875; theta[4] = 0.0;
                        sigma[0] = 1562.737650063935; sigma[1] = 26.224525063935; sigma[2] = 10.549525063935; sigma[3] = 137041.35952506395; sigma[4] = 0.000150063935;
                        votes[3] = 0.1 - gauss(x, theta, sigma);
                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 4; i++) {
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