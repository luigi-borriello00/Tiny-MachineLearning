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
                        float votes[6] = { -0.000128820692 ,0.000220774341 ,3.3743735e-05 ,0.000171050433 ,-7.5142956e-05 ,-0.000221604862  };
                        votes[0] += dot(x,   0.00165118598  , -0.000483242326  , 0.001912484399  , 0.00131335121  , 0.000334578661  , 0.000706647272  , 0.000258934637  , 0.000900654493  , 0.000516984426  , -0.000208184405  , -0.000350116968  , -0.00056819409  , -0.000871436898  , -0.001302916909  , -0.000966371149  , 0.000122105982  , -0.002356795568  , -0.000372531494  , -0.000887453343  , -0.001014314243  , -0.000521672117  , -0.000357090276  , -0.000389869048  , 0.000699072925  , -0.000533653045  , -0.000111781534  , -0.00088653021  , 0.00088312467  , -2.1068167e-05  , 0.00087863555  , 0.001559322123  , 0.000509336393 );
                        votes[1] += dot(x,   0.001691021269  , 0.002123442115  , 0.001147540027  , 0.000388667534  , 0.002101580003  , 0.002401564119  , -5.7762908e-05  , -0.000369000247  , 0.000210015388  , -0.001645267029  , -0.001639098382  , 0.000768183615  , 0.000101527316  , 0.000535295179  , -0.000345907438  , -0.000605886337  , -0.000927418949  , -0.003484919542  , -0.002362162549  , -0.000319293055  , -0.001485095152  , 0.003242762546  , 0.004155155542  , 0.002145823217  , 0.002150453602  , 0.001220990419  , 0.002056682692  , -0.00132314833  , 0.000702096596  , -0.002610681297  , -0.002856889975  , -0.007182091841 );
                        votes[2] += dot(x,   0.000387937663  , 0.001148906178  , -0.000162687287  , 0.000715459252  , 0.000592413034  , 0.000102992887  , 9.9806231e-05  , 0.000725873683  , -0.000491760764  , 0.00012003366  , -0.001039127705  , -0.000359539034  , -0.000408894642  , 0.000234588031  , -0.000239855181  , -0.000459321481  , -0.000251742702  , 0.000195104619  , 3.9650378e-05  , 0.000248145595  , 0.00074260902  , -5.8863784e-05  , 8.8529485e-05  , -0.00070332632  , -0.000132647943  , 0.000731972627  , -0.001251924294  , 0.000468713876  , -0.000586147653  , -0.000615419596  , -0.001074561512  , 0.001197128007 );
                        votes[3] += dot(x,   -0.002298158466  , 0.001131796764  , -0.00174455897  , -0.000190514376  , -0.001287553763  , -0.000462984011  , 0.000170815857  , -0.001382415771  , 4.587999e-05  , -0.001095138418  , 0.00018011216  , -0.000371360354  , -0.000776926366  , -0.001048754172  , 0.000709533254  , 0.000944460745  , 0.001896823859  , 0.003619330282  , 0.002426308546  , -0.00123126549  , -0.000412479285  , -0.001129438622  , -0.001196062802  , 0.000755237361  , 0.002864185369  , 0.002297898868  , 0.002266610114  , 0.00069978839  , -0.000162031539  , -0.001468423205  , -0.001932167542  , -0.001869750608 );
                        votes[4] += dot(x,   0.000345645084  , -0.003272908304  , -0.000453601409  , -0.002019317372  , -0.001546813742  , -0.002208089131  , 0.000221047254  , 0.000313013415  , 0.000335838114  , 0.002242906686  , 0.002941140214  , 0.000456076902  , 0.002755528859  , 0.000824024473  , 0.001017663671  , -0.000425213075  , 0.001988651631  , -0.000446777836  , 6.0718415e-05  , 0.001916552808  , 0.000605036828  , -0.003502610594  , -0.002409365767  , -0.003630351464  , -0.004291726302  , -0.002826961111  , -0.000803022027  , -0.001339101153  , 0.000469629103  , 0.003363633985  , 0.004462770373  , 0.004870791091 );
                        votes[5] += dot(x,   -0.00177763153  , -0.000647994427  , -0.00069917676  , -0.000207646248  , -0.000194204193  , -0.000540131135  , -0.000692841071  , -0.000188125573  , -0.000616957154  , 0.000585649506  , -9.2909318e-05  , 7.4832962e-05  , -0.00079979827  , 0.000757763398  , -0.000175063157  , 0.000423854166  , -0.000349518272  , 0.000489793971  , 0.000722938552  , 0.000400174385  , 0.001071600707  , 0.00180524073  , -0.00024838741  , 0.000733544281  , -5.6611682e-05  , -0.001312119269  , -0.001381816276  , 0.000610622546  , -0.00040247834  , 0.000452254564  , -0.000158473468  , 0.002474586958 );
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