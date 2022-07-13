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
                        float votes[6] = { 0.000893757052 ,0.000617946795 ,0.000376839643 ,-0.000650867031 ,-0.000403063342 ,-0.000834613117  };
                        votes[0] += dot(x,   -0.003783299576  , 0.001009030586  , -0.004496205164  , 4.6629013e-05  , 0.000628078026  , -0.002466727323  , 0.00582683221  , 0.002434184432  , 0.000215306784  , 0.000263007691  , 0.005178383601  , 0.001383360804  , 0.00592357612  , 0.004711562546  , 0.005395044233  , -0.006633787793  , -0.0017789323  , 0.001813693342  , -0.000312561821  , -0.004704434982  , -0.008990685453  , 0.00123852159  , -0.004392401033  , -0.00013354907  , -0.000370623929  , 0.002066778554  , 0.008264829012  , -0.000559347219  , 0.002233725159  , -0.001761104431  , -0.000856161488  , -0.007631390445 );
                        votes[1] += dot(x,   -0.006486666739  , -0.003559076204  , 0.00536697264  , -0.000694515303  , 0.001718255231  , 0.002791768199  , -0.000923734351  , -0.002986553508  , -0.00080750745  , -0.000882551243  , 0.001161257433  , -0.001799030731  , -0.00373199205  , -0.005714705732  , 0.001334472505  , 0.00201272429  , 0.003086827812  , 2.7103515e-05  , -0.000558936691  , 0.00362855544  , 0.002152938345  , 0.000544172078  , -0.001664966669  , 0.001938071596  , 0.003326298308  , 0.002564883613  , -8.9350828e-05  , -0.001278490137  , -0.001484987437  , -0.001922274905  , 0.001595177137  , 0.001214037899 );
                        votes[2] += dot(x,   0.00335853  , 0.000408269748  , -0.00027494212  , -0.000428110849  , -0.001482980233  , 0.000434779839  , -0.002268540527  , 0.000272250167  , -0.001046421121  , -0.001032253581  , -0.002174104304  , 0.000334457765  , -0.000620736189  , 0.000397211209  , -0.00104829133  , -0.000683642234  , -0.001819735435  , -0.001388189678  , 0.001863320764  , -5.1273716e-05  , 6.185903e-05  , -0.00079170671  , 0.004290509306  , 0.00057032261  , 0.002253051903  , -0.001869420835  , -0.000691983318  , 0.001685190068  , -0.000604349579  , 0.000950673046  , -0.001561828112  , 0.002922154699 );
                        votes[3] += dot(x,   0.00474608549  , 0.000650749941  , 0.001654135782  , 0.001262486249  , 0.000619758389  , 0.000500091729  , -0.001102364177  , -0.000276225471  , 0.000568759643  , -0.001061049567  , -0.001730291012  , -3.5976668e-05  , -0.00104281692  , -0.000447120255  , -0.003113863745  , 0.000620104328  , -0.002149616711  , -0.001975466484  , -0.001739633961  , -0.000970504816  , 0.000344667625  , -0.003064114004  , 0.000231374433  , 0.000247373241  , -0.001185985331  , 0.000911586997  , 0.000546772807  , 0.002888337314  , 0.001655194407  , 0.002647877019  , 0.000825726072  , -0.000886780865 );
                        votes[4] += dot(x,   0.005050877997  , 0.003588178069  , 0.000585918785  , 0.001605492882  , -0.00025626457  , 0.000487066681  , 0.00030979069  , 0.00285598109  , 0.004048726736  , 0.002051198923  , -0.002028104009  , -0.000834966471  , -0.00198801859  , -0.003538038948  , -0.003308528845  , 0.000149827564  , -0.000658569172  , 0.000233941913  , -0.001908401014  , -0.000659470573  , 0.002419615255  , -0.000287188777  , -0.000671867027  , -0.002671435852  , -0.00328598311  , -0.003839714804  , -0.00713072777  , -0.004020437447  , -0.000919319829  , 0.001522190346  , 0.006192859872  , 0.007008240151 );
                        votes[5] += dot(x,   -0.002885527172  , -0.002097152139  , -0.002835879923  , -0.001791981992  , -0.001226846842  , -0.001746979125  , -0.001841983846  , -0.002299636709  , -0.002978864592  , 0.000661647777  , -0.000407141709  , 0.000952155302  , 0.001459987629  , 0.004591091181  , 0.000741167183  , 0.004534773844  , 0.003320025806  , 0.001288917393  , 0.002656212723  , 0.002757128648  , 0.004011605198  , 0.002360315824  , 0.002207350989  , 4.9217476e-05  , -0.000736757842  , 0.000165886475  , -0.000899539902  , 0.001284747422  , -0.000880262721  , -0.001437361074  , -0.006195773482  , -0.00262626144 );
                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 6; i++) {
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