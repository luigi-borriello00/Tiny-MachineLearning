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
                        float votes[2] = { 0.202317692092  };
                        votes[0] += dot(x,   -0.163181981765  , -0.00649316745  , 0.144077288797  , -0.08629057232  , -0.072208457249  , 0.335688386873  , -0.355020680105  , 0.509349602058  , -0.323746918436  , -0.487631455728  , -0.437473135833  , -0.376845052513  , -0.392376496382  , 0.03086001039  , 1.190125770832  , -0.080347981124  , 0.664720611505  , -0.194563747425  , 0.122111136525  , 0.56379703179  , -0.431526454764  , -0.005136523844  , 0.370680829885  , -0.04871676909  , -0.10732758972  , 0.454712913896  , 0.130057834005  , -0.251280622557  , 0.305796333699  , 0.12660368603  , -0.182683835384  , 0.122916876164  , 0.159384405707  , -0.067338650074  , -0.016431154557  , 0.080671171997  , 0.005864739233  , -0.187798189898  , -0.318573292425  , -0.026622487288  , -0.041263439894  , 0.039853936538 );
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