#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class LogisticRegression {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        float votes[2] = { 0.52178244295  };
                        votes[0] += dot(x,   -0.839833130713  , 1.308825404345  , 0.287798982135  , -0.764001408499  , 1.223514065671  , -0.261753936532  , -0.867699986126  , 0.47322599778  , 0.826381547392  , -0.319073069697  , -0.041930147588  , 0.292076343507  , -0.396027607349  , -0.178639529838  , 0.945351997816  , 0.279290167159  , 1.997339158387  , -1.355901580581  , 1.056060924691  , 1.222121607075  , -2.281917836738  , 0.597405995656  , 1.009004060335  , -0.93205692963  , -0.193300666962  , 1.516320227647  , 0.882621219428  , -0.841781979442  , 1.295925016983  , 0.511262367796  , -1.206675566175  , 0.684124784807  , 0.19911140254  , -1.23604648464  , 0.430007977307  , -0.098547888916  , -1.039513355229  , 0.520036781283  , -0.201608226599  , -1.011926793844  , 0.311804356909  , 0.00068597227 );
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
                    * Compute dot product
                    */
                    float dot(float *x, ...) {
                        va_list w;
                        va_start(w, 42);
                        float dot = 0.0;

                        for (uint16_t i = 0; i < 42; i++) {
                            const float wi = va_arg(w, double);
                            dot += x[i] * wi;
                        }

                        return dot;
                    }
                };
            }
        }
    }