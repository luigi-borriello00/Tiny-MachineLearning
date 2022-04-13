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
                        float votes[4] = { -0.823604267647 ,-2.111377087696 ,-1.344041621559 ,-1.200633737417  };
                        votes[0] += dot(x,   -1.02513084421  , 0.637394516813  , 0.412869205396  , -0.312019133374  , -0.995478014754  , -0.222137608312  , 0.141561381957  , 0.849827407842  , 0.64446738377  , -0.169897368055  , 0.602090364801  , -0.486640619345  , 0.134620992927  , 0.157401128506  , -0.751600668975  , 0.155622472252  , -0.411783171396  , -0.571296135367  , -0.860324532534  , 0.847959224066  , -0.665592204708  , 0.587251210311  , 0.026375573273  , -0.233926718997  , 0.367188990711  , -0.278638925294  , -0.458761814008  , -0.16139961268  , 0.62667045036  , 0.45720935183  , -0.725566270932  , 0.163010024674 );
                        votes[1] += dot(x,   0.338849913742  , -0.757933719326  , -0.621047966431  , 1.368486865787  , 0.205621551197  , -0.214461544589  , 0.353866404665  , -0.923443562826  , -1.200492098868  , -0.74651050626  , 0.674298369473  , 0.568646704409  , 0.18484048359  , -0.580342339428  , 0.529225020835  , -0.153152484809  , 0.369792297141  , 1.0431804521  , -0.431954843577  , 0.245899055243  , -0.252454434474  , 0.913104657376  , -0.586740303354  , -0.667030127975  , 0.571930537253  , -0.086386799942  , -0.4297773378  , 0.845389475274  , -0.548084541762  , 0.246579915756  , -0.415438588699  , 0.413674879803 );
                        votes[2] += dot(x,   0.550108989109  , 0.335151293434  , 0.129704168004  , -0.312934280796  , -0.078854692754  , 0.653190805225  , -0.374307226751  , -0.168059145399  , 0.188698230107  , 0.145458192666  , -1.270123201984  , 0.258168443682  , 0.694420074848  , 0.258621119435  , -0.926201413778  , -0.314649487384  , -0.040700583781  , 0.184212197248  , -0.00481443941  , -1.408985425324  , 1.653368247322  , -0.756082166662  , -0.095447047872  , 0.605955275238  , -0.5276056206  , -0.119968108644  , 0.741828888206  , -0.846971124241  , 0.621315070939  , -0.447637894358  , 0.136881357767  , 0.135831846816 );
                        votes[3] += dot(x,   0.500793238454  , -0.909007399904  , -0.040217864253  , -0.276011856097  , 0.890816422965  , -0.376006278918  , -0.307967643078  , 0.286988238825  , 0.150661395824  , 0.378056684961  , 0.066821196287  , -0.134984839489  , -0.755675422733  , -0.011826928732  , 0.475445089053  , 0.459029934779  , -0.429112603181  , -0.376797096616  , 0.436439576896  , 0.609539545618  , -0.758260104736  , -0.390669691885  , 0.365989337933  , -0.058090166801  , -0.247703968938  , 0.667896249312  , -0.503541477447  , 0.371040367803  , -0.33553565238  , -0.133954604535  , 0.577370464453  , -0.500588812957 );
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