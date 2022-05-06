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
                        float votes[3] = { 0.0f };
                        float theta[32] = { 0 };
                        float sigma[32] = { 0 };
                        theta[0] = 5110.301666666667; theta[1] = 5108.610833333333; theta[2] = 5110.465277777778; theta[3] = 5109.951805555556; theta[4] = 5108.083611111109; theta[5] = 5108.631250000001; theta[6] = 5108.233333333334; theta[7] = 5107.471111111112; theta[8] = 5107.423888888889; theta[9] = 5106.359305555556; theta[10] = 5106.626805555557; theta[11] = 5105.934027777777; theta[12] = 5107.044166666667; theta[13] = 5106.124166666667; theta[14] = 5106.168333333335; theta[15] = 5107.018055555554; theta[16] = 5105.270138888889; theta[17] = 5106.251111111112; theta[18] = 5107.095972222222; theta[19] = 5107.177916666668; theta[20] = 5107.188472222223; theta[21] = 5106.888194444445; theta[22] = 5107.943055555555; theta[23] = 5109.710555555554; theta[24] = 5108.681666666665; theta[25] = 5110.104166666665; theta[26] = 5109.821388888889; theta[27] = 5109.648611111112; theta[28] = 5108.999583333333; theta[29] = 5109.752777777778; theta[30] = 5110.891944444444; theta[31] = 5108.628472222223;
                        sigma[0] = 5011.56643876607; sigma[1] = 4937.435296404952; sigma[2] = 4971.245419244454; sigma[3] = 4889.614831339371; sigma[4] = 4890.480178503728; sigma[5] = 4833.611883036895; sigma[6] = 5016.106263766073; sigma[7] = 4970.523804198167; sigma[8] = 4781.870345864834; sigma[9] = 4775.496295228265; sigma[10] = 4840.41446050603; sigma[11] = 4834.569810043074; sigma[12] = 4785.877832516075; sigma[13] = 4500.799729738287; sigma[14] = 4773.385397099405; sigma[15] = 4788.104765540766; sigma[16] = 4900.623409580106; sigma[17] = 4882.134509753721; sigma[18] = 4891.288712820849; sigma[19] = 4884.387144148009; sigma[20] = 4811.609168376412; sigma[21] = 4777.444406339365; sigma[22] = 4617.305821096318; sigma[23] = 4553.976621790758; sigma[24] = 4610.686944321616; sigma[25] = 4639.113821404949; sigma[26] = 4671.054653503715; sigma[27] = 4555.003706281498; sigma[28] = 4635.726798314679; sigma[29] = 4414.961700494456; sigma[30] = 4511.377704429644; sigma[31] = 4404.145451709737;
                        votes[0] = 0.4 - gauss(x, theta, sigma);
                        theta[0] = 3209.70125; theta[1] = 3212.645277777778; theta[2] = 3208.857083333334; theta[3] = 3208.151111111112; theta[4] = 3208.246944444445; theta[5] = 3208.24625; theta[6] = 3203.547222222222; theta[7] = 3202.439305555556; theta[8] = 3201.991666666667; theta[9] = 3198.556805555555; theta[10] = 3198.593611111112; theta[11] = 3203.154027777778; theta[12] = 3204.570972222222; theta[13] = 3208.165138888888; theta[14] = 3207.597916666666; theta[15] = 3205.754583333334; theta[16] = 3203.019583333334; theta[17] = 3199.46736111111; theta[18] = 3202.364166666668; theta[19] = 3209.879166666666; theta[20] = 3210.753055555557; theta[21] = 3221.710555555556; theta[22] = 3225.672916666668; theta[23] = 3225.228888888889; theta[24] = 3227.104305555556; theta[25] = 3228.355555555555; theta[26] = 3229.033611111112; theta[27] = 3221.488194444444; theta[28] = 3218.519027777778; theta[29] = 3203.3475; theta[30] = 3194.346666666667; theta[31] = 3181.226527777778;
                        sigma[0] = 87531.92300525916; sigma[1] = 85992.97780257778; sigma[2] = 85200.02261775912; sigma[3] = 86779.85567919818; sigma[4] = 84281.1056099852; sigma[5] = 83980.41411220354; sigma[6] = 84040.45613105001; sigma[7] = 87916.8691174505; sigma[8] = 87231.36840821052; sigma[9] = 90281.50087995049; sigma[10] = 87930.3265173926; sigma[11] = 87204.10031282081; sigma[12] = 86230.40495865421; sigma[13] = 88124.0974887468; sigma[14] = 91332.23055525911; sigma[15] = 93584.92725803694; sigma[16] = 93283.13350387025; sigma[17] = 96183.11743874679; sigma[18] = 97476.68089918277; sigma[19] = 106878.12559362718; sigma[20] = 111313.11217665186; sigma[21] = 121407.64834401298; sigma[22] = 125582.42424831468; sigma[23] = 125993.44135142038; sigma[24] = 134328.05141883937; sigma[25] = 143779.8576023463; sigma[26] = 140095.17882572595; sigma[27] = 132462.95442578386; sigma[28] = 114170.87251143198; sigma[29] = 95058.05359640496; sigma[30] = 101591.51897765501; sigma[31] = 121026.85243920973;
                        votes[1] = 0.4 - gauss(x, theta, sigma);
                        theta[0] = 4225.6725; theta[1] = 4226.754444444444; theta[2] = 4223.89388888889; theta[3] = 4226.993055555556; theta[4] = 4223.628888888888; theta[5] = 4226.656944444445; theta[6] = 4223.746666666667; theta[7] = 4225.1675; theta[8] = 4225.137777777779; theta[9] = 4224.448055555556; theta[10] = 4222.815277777776; theta[11] = 4226.269722222222; theta[12] = 4226.027222222223; theta[13] = 4225.578055555556; theta[14] = 4225.650277777778; theta[15] = 4226.693055555556; theta[16] = 4224.955; theta[17] = 4226.7175; theta[18] = 4225.141944444444; theta[19] = 4227.304444444445; theta[20] = 4225.852777777777; theta[21] = 4225.781111111112; theta[22] = 4224.259166666666; theta[23] = 4225.65611111111; theta[24] = 4225.696111111112; theta[25] = 4229.846111111112; theta[26] = 4225.96; theta[27] = 4227.343055555556; theta[28] = 4223.131111111112; theta[29] = 4225.626944444444; theta[30] = 4224.071666666666; theta[31] = 4228.0775;
                        sigma[0] = 649.735551960516; sigma[1] = 649.205774568534; sigma[2] = 681.676579198162; sigma[3] = 621.331182207421; sigma[4] = 653.528743087057; sigma[5] = 747.554132207424; sigma[6] = 622.769705432732; sigma[7] = 595.491474182734; sigma[8] = 605.106017161129; sigma[9] = 600.594671096312; sigma[10] = 643.793124800016; sigma[11] = 684.37939702224; sigma[12] = 710.681319938908; sigma[13] = 532.564515540759; sigma[14] = 582.546197022242; sigma[15] = 585.19605442965; sigma[16] = 615.724980432735; sigma[17] = 592.305796404954; sigma[18] = 695.312882207422; sigma[19] = 528.128507901867; sigma[20] = 730.650775494465; sigma[21] = 580.312637531498; sigma[22] = 682.825968627181; sigma[23] = 643.351340309276; sigma[24] = 620.580845864833; sigma[25] = 803.148290309277; sigma[26] = 678.075716543847; sigma[27] = 687.932115540761; sigma[28] = 660.920048642607; sigma[29] = 705.279404429651; sigma[30] = 716.648369321621; sigma[31] = 643.786468627178;
                        votes[2] = 0.2 - gauss(x, theta, sigma);
                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 3; i++) {
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

                        for (uint16_t i = 0; i < 32; i++) {
                            gauss += log(sigma[i]);
                            gauss += abs(x[i] - theta[i]) / sigma[i];
                        }

                        return gauss;
                    }
                };
            }
        }
    }