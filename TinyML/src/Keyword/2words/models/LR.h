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
                        float votes[2] = { -0.244251102648  };
                        votes[0] += dot(x,   0.601945240219  , -0.694453000178  , -0.502613967213  , 0.638117358118  , 0.920384935124  , -0.52569149751  , -0.365336146684  , -0.639642395182  , -0.189996691121  , 0.294263238816  , -0.275640261422  , 0.104822968772  , 0.002065440792  , -0.257767158927  , 0.223357750624  , -0.515830975971  , 0.477745278905  , 0.036209831541  , 1.161228396423  , 0.0091381203  , -0.161994001207  , 0.077750939657  , -0.68269361229  , 0.68091934305  , -0.743871793858  , 0.662401241511  , -0.619826672945  , 0.671073285876  , -0.375289263417  , -0.081523421496  , 0.515583682167  , -0.667662298325 );
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
                        va_start(w, 32);
                        float dot = 0.0;

                        for (uint16_t i = 0; i < 32; i++) {
                            const float wi = va_arg(w, double);
                            dot += x[i] * wi;
                        }

                        return dot;
                    }
                };
            }
        }
    }