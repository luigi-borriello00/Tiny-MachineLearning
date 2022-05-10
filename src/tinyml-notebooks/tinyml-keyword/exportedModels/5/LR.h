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
                        float votes[5] = { 0.258208610592 ,-0.415336960237 ,-0.083998399153 ,0.153360414181 ,0.087766334617  };
                        votes[0] += dot(x,   -0.663212012668  , 0.238424491875  , 0.314533454495  , -0.304133197905  , -0.486539127272  , -0.14671144815  , 0.34963886792  , 0.394339230452  , 0.228797852973  , 0.169142835578  , 0.207765554436  , -0.534382750034  , 0.140120897792  , 0.075680302313  , -0.106467342939  , 0.611387915311  , -0.360999443418  , -0.386380720481  , -0.704098084271  , 0.75929424228  , -0.475983718152  , 0.138402329554  , 0.064505035605  , -0.369543440727  , 0.699015505253  , -0.563658679369  , -0.055421239344  , -0.556668826708  , 0.858843680487  , 0.213170747666  , -0.580462566924  , 0.192159227309 );
                        votes[1] += dot(x,   -0.027500637741  , -0.275815194264  , -0.58556360329  , 0.742341751499  , -0.008547380858  , -0.125740556872  , -0.302814611216  , 0.090227668344  , -0.202660547171  , -0.277541971883  , -0.054953022964  , 0.437825266995  , -0.355437426686  , -0.087356208576  , 0.266715839075  , 0.003549255521  , 0.153311514446  , 0.214476268583  , 0.36969107564  , 0.436470740695  , -0.427007884221  , 0.274264536381  , -0.486222801149  , -0.241781938671  , 0.430437427181  , 0.253839720297  , -0.36704004533  , 0.462894627632  , -0.559387339739  , 0.045898633264  , 0.023626793397  , 0.174872742555 );
                        votes[2] += dot(x,   0.437111312368  , 0.496007523566  , -0.089172806107  , -0.467276366245  , 0.045324582078  , 0.153146717003  , -0.046521714248  , 0.037746058434  , 0.580423707848  , 0.218722486161  , -0.59311631577  , 0.221484802698  , -0.139316953166  , 0.418343324366  , -0.447112860492  , -0.060325325113  , -0.041572579989  , 0.489760882952  , -0.227764363444  , -0.837277979271  , 0.963111077969  , -0.094214469417  , -0.051305960953  , 0.294366905414  , -0.719664763823  , 0.054142918823  , 0.75778976146  , -0.550074192443  , 0.241563144389  , -0.07038992308  , -0.23070138645  , -0.021401394923 );
                        votes[3] += dot(x,   -0.005175791579  , 0.09947040697  , 0.268980588026  , 0.180295214379  , -0.009195993125  , 0.324224333637  , 0.241562388335  , -0.700526001412  , -0.585519540264  , -0.520207145924  , 0.24950215252  , 0.054830175775  , 0.556467256715  , -0.203424351009  , 0.180936337469  , -0.631696777438  , 0.075425311207  , -0.079224634358  , -0.056904546273  , -0.72556040256  , 0.410908175479  , -0.335392653596  , 0.878258341468  , 0.273121156439  , -0.56403049191  , 0.085005929835  , -0.140044850997  , 0.09823819105  , -0.024482876156  , -0.140527568466  , 0.598986682057  , -0.151518240037 );
                        votes[4] += dot(x,   0.25877712962  , -0.558087228147  , 0.091222366876  , -0.151227401728  , 0.458957919177  , -0.204919045618  , -0.241864930792  , 0.178213044182  , -0.021041473386  , 0.409883796069  , 0.190801631778  , -0.179757495434  , -0.201833774656  , -0.203243067095  , 0.105928026887  , 0.077084931718  , 0.173835197753  , -0.238631796696  , 0.619075918347  , 0.367073398855  , -0.471027651075  , 0.016940257078  , -0.405234614971  , 0.043837317545  , 0.154242323299  , 0.170670110414  , -0.195283625788  , 0.545610200469  , -0.516536608981  , -0.048151889385  , 0.18855047792  , -0.194112334903 );
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