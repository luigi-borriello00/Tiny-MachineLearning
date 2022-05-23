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
                        float votes[5] = { 3.8348298e-05 ,-0.297360119683 ,-1.996859514833 ,-1.296839430035 ,-0.915788295041  };
                        votes[0] += dot(x,   -0.000849707546  , 0.000325649672  , 0.000156853938  , -0.000177133002  , -0.000479213023  , -0.000135778524  , 0.000179364967  , 0.000391275513  , 0.000518133272  , -4.5157257e-05  , 0.000201156695  , -0.000729625579  , 0.000160205945  , 0.000123071937  , -0.000433626389  , 0.00222873015  , -0.001590949153  , -0.000953304928  , -0.002427062203  , 0.002992108079  , -0.002244252183  , 8.2644946e-05  , 0.00066939807  , -0.002170247881  , 0.005143495826  , -0.003006904198  , -0.000264556537  , -0.004463605217  , 0.006510247014  , 0.000210561048  , -0.005040672275  , 0.003149979639 );
                        votes[1] += dot(x,   -0.000427849704  , -0.000365812144  , -0.000262837058  , 0.000649555301  , -5.956639e-06  , -0.000391861897  , -0.000339223771  , 0.000263822498  , -0.000608969503  , -0.000347146121  , -6.7055848e-05  , 0.00053722732  , -0.000190513074  , -1.6775011e-05  , 0.000422023383  , -0.000496778744  , 0.001251654443  , 7.783017e-06  , -0.000602290983  , 0.001536116162  , -0.000269011318  , -0.000126415576  , -0.000400250431  , -0.00024479685  , 0.000174662721  , -0.000728610618  , -0.001584619458  , 0.004139708326  , -0.00219654659  , -0.000584494382  , 0.000282779676  , 0.000920776734 );
                        votes[2] += dot(x,   0.000551535294  , 0.000284932905  , -0.000220213433  , -0.000309586716  , -2.2363691e-05  , 0.000120538567  , 6.4633555e-05  , 4.110097e-05  , 0.000600245572  , -3.8106144e-05  , -0.000861295102  , 0.000300658358  , -8.7789778e-05  , 0.000481598906  , -0.001131083816  , 0.000350110656  , -0.000540421893  , 0.001590976823  , -0.000758715136  , -0.003152996117  , 0.003251775718  , 0.000420897189  , -0.000903476255  , 0.001057210713  , -0.002418103567  , 1.4274984e-05  , 0.002549271715  , -0.002699358322  , 0.001577853546  , 0.000890670358  , -0.002306838659  , 4.7173901e-05 );
                        votes[3] += dot(x,   -0.000131670601  , 5.2327018e-05  , 0.000234073558  , 0.000148827222  , 3.9750668e-05  , 0.000247640674  , 0.000222824163  , -0.000771715681  , -0.000630471809  , -0.00059057362  , 1.1437583e-05  , 0.00044245991  , 0.000961499577  , -0.000413299069  , 0.000601046043  , -0.001958232948  , 1.8081718e-05  , -0.000106515839  , -0.000233163409  , -0.002625977218  , 0.001536624197  , -0.002427802919  , 0.005386760592  , 0.000931731101  , -0.004138459492  , 0.002039321612  , -0.000368396229  , -0.001071159253  , 0.000899204026  , -0.000375455077  , 0.003199044845  , -0.001707601805 );
                        votes[4] += dot(x,   0.000350299025  , -0.000709455332  , -2.5827698e-05  , -8.0887573e-05  , 0.000452514185  , 5.94854e-07  , -0.00039526092  , 0.000116438767  , -0.000100194728  , 0.000664188703  , 0.000339834133  , -0.000171089947  , -0.000594081891  , -0.000409765619  , 5.2461426e-05  , 0.000895182423  , -0.000824914942  , -0.000572025689  , 0.001587578184  , 0.00113943227  , -0.002205222034  , 0.001227234518  , -0.002576356676  , -0.00029580917  , 0.001302200426  , 0.002764477359  , -0.002765449505  , 0.002297038884  , -0.002798758828  , 0.002503802948  , 0.000883865459  , -0.00308433328 );
                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 5; i++) {
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