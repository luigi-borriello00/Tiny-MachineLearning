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
                        float votes[6] = { -3.358208285619 ,-2.61150575208 ,-2.18404806084 ,-2.168258972361 ,-1.899091425375 ,-4.785408508425  };
                        votes[0] += dot(x,   -0.270418480417  , 0.247187590228  , -0.146805331899  , 0.061810242572  , 0.150157265028  , -0.228829286021  , -0.161422211939  , -0.074233498002  , -0.544565831705  , 0.322373063561  , -0.338307331586  , -0.001589855533  , -0.543968594821  , 0.092124375308  , 0.2405794962  , -0.463703669623  , 0.01273856895  , -0.190315701101  , 0.010448229195  , -0.162251216818  , -0.159821790656  , -0.453347008733  , -0.081655065956  , -0.451402764002  , 0.38083127942  , -0.044301017898  , -0.018607670844  , 0.126964415986  , 0.072946593661  , 0.166718272218  , -0.274125343587  , -0.238418173572 );
                        votes[1] += dot(x,   0.110720269494  , -0.404500086628  , -0.038642043505  , -0.229537193644  , -0.32971861704  , 0.050652583809  , -0.03987561504  , -0.023301778911  , 0.427805267113  , -0.59917952579  , 0.394501630601  , -0.206211019221  , 0.553230589067  , -0.11402487364  , -0.284298839108  , 0.473449912489  , -0.126534628742  , 0.025038008635  , -0.236162270216  , -0.040097625552  , -0.08561862497  , 0.243436240728  , -0.298555468652  , 0.20186857572  , -0.502395556346  , -0.085644272429  , -0.156176018924  , -0.247772084482  , -0.295040061477  , -0.415636787658  , 0.059100835531  , -0.008762903187 );
                        votes[2] += dot(x,   0.735953424677  , -0.035972527157  , 0.199000000471  , 0.69677916477  , 0.338199355877  , -0.42713575086  , 0.161215799561  , 0.195625907227  , -0.047501555109  , 0.555225776705  , -0.097566621915  , -0.187662918479  , -0.319696367181  , -0.336928233796  , -0.158635333694  , 0.732431613602  , -0.204174100428  , -0.825181312091  , -0.147051744946  , -0.58248926992  , -0.370857130352  , 0.081525048454  , 0.310934837514  , -0.394500820034  , 0.433042687632  , -0.125074114885  , 0.714263293945  , 0.053696619569  , 0.240647212459  , -0.093177101149  , -0.060861425613  , -0.702935731765 );
                        votes[3] += dot(x,   0.031964920758  , -0.042679120851  , -0.012343273856  , -0.147036771235  , -0.193087114425  , -0.117732781391  , 0.096842612826  , -0.228841568728  , 0.007513366548  , -0.183582196918  , -0.07472742993  , -0.169765764635  , 0.015629783434  , -0.146667517708  , -0.139752701598  , -0.04605965579  , 0.18486078306  , 0.087333705398  , 0.18115215255  , 0.122795388004  , 0.173802780177  , 0.251521733755  , -0.030962065505  , 0.099036115255  , -0.106743523256  , 0.184732377507  , -0.00990280888  , 0.002047347503  , 0.09706926384  , 0.05174528542  , 0.144565326067  , 0.208061580114 );
                        votes[4] += dot(x,   -0.479641683549  , -0.090027822946  , 0.227200955297  , 0.432726577987  , 0.386942058249  , 0.356070935648  , -0.057705293119  , 0.070741920725  , -0.225740230821  , -0.758652041332  , 0.024185396424  , 0.179266385051  , 0.265712583109  , 0.317817831092  , 0.347505994319  , 0.056777155918  , 0.137181538523  , 0.595859124758  , 0.204254743307  , 0.548788982908  , -0.104751714344  , -0.081894119691  , 0.210792812429  , -0.119604617151  , 0.337996005251  , -0.474417701593  , -0.317920418839  , 0.154580103827  , 0.074887616596  , -0.442917711512  , -0.162444808038  , -0.19223563119 );
                        votes[5] += dot(x,   0.492856285642  , 0.288297030391  , -0.00917344616  , -0.069120400716  , -0.204361830258  , 0.164656282219  , 0.071437524445  , 0.118931733807  , 0.54160145246  , 0.557100311063  , 0.077607789811  , 0.229453379391  , -0.192363129414  , 0.120409034206  , -0.045914864108  , -0.138555800328  , -0.142765803028  , 0.024264675309  , 0.010059590537  , 0.000914712897  , 0.213410407236  , 0.342423125208  , -0.068056493086  , 0.35660754843  , -0.009764015624  , 0.434789941556  , 0.132647321356  , 0.064210911886  , 0.10004233548  , 0.479456816205  , 0.281163233841  , 0.629556579683 );
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