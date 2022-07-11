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
                        float votes[6] = { 0.0f };
                        float theta[32] = { 0 };
                        float sigma[32] = { 0 };
                        theta[0] = 1142.10625; theta[1] = 1145.80175; theta[2] = 1142.618125; theta[3] = 1145.333875; theta[4] = 1145.84875; theta[5] = 1143.92; theta[6] = 1149.455; theta[7] = 1146.8635; theta[8] = 1145.5175; theta[9] = 1145.428750000001; theta[10] = 1149.182; theta[11] = 1146.2805; theta[12] = 1149.406375; theta[13] = 1148.269125; theta[14] = 1149.658375; theta[15] = 1140.311625; theta[16] = 1143.87625; theta[17] = 1146.474125; theta[18] = 1144.984875; theta[19] = 1142.172375; theta[20] = 1138.651124999999; theta[21] = 1146.172125; theta[22] = 1142.10175; theta[23] = 1145.70325; theta[24] = 1145.579375; theta[25] = 1147.1865; theta[26] = 1151.69525; theta[27] = 1144.87325; theta[28] = 1146.88025; theta[29] = 1144.167375; theta[30] = 1145.865; theta[31] = 1140.914625;
                        sigma[0] = 4755.280355459114; sigma[1] = 4365.083048959117; sigma[2] = 4692.611829755992; sigma[3] = 4986.165215755989; sigma[4] = 5131.202927959115; sigma[5] = 4512.299479521618; sigma[6] = 4145.596052021614; sigma[7] = 4163.146517271617; sigma[8] = 4604.443880771614; sigma[9] = 5198.38720795912; sigma[10] = 4828.460278021618; sigma[11] = 4492.430336771616; sigma[12] = 4267.173722630992; sigma[13] = 4393.432100005991; sigma[14] = 5774.561028130991; sigma[15] = 4037.781358130994; sigma[16] = 3999.388112959117; sigma[17] = 3867.918243755996; sigma[18] = 4041.662179505991; sigma[19] = 4008.774887630994; sigma[20] = 4208.603707005991; sigma[21] = 4284.837711255994; sigma[22] = 4041.592246459118; sigma[23] = 5417.38230645912; sigma[24] = 5231.495235380991; sigma[25] = 4556.203939771614; sigma[26] = 5202.097054459113; sigma[27] = 4124.989596459115; sigma[28] = 4776.307449459116; sigma[29] = 4525.114238880991; sigma[30] = 4050.413607021616; sigma[31] = 3908.972049380993;
                        votes[0] = 0.166666666667 - gauss(x, theta, sigma);
                        theta[0] = 1789.9535; theta[1] = 1792.623625; theta[2] = 1798.645875; theta[3] = 1794.603375; theta[4] = 1796.062375; theta[5] = 1796.82225; theta[6] = 1794.81525; theta[7] = 1793.098125000001; theta[8] = 1794.67475; theta[9] = 1794.4765; theta[10] = 1796.323999999999; theta[11] = 1793.91575; theta[12] = 1793.039875; theta[13] = 1791.335125; theta[14] = 1796.952250000001; theta[15] = 1795.89175; theta[16] = 1796.999375; theta[17] = 1795.61725; theta[18] = 1795.298000000001; theta[19] = 1797.8055; theta[20] = 1796.1055; theta[21] = 1796.256750000001; theta[22] = 1794.2855; theta[23] = 1797.9225; theta[24] = 1799.034500000001; theta[25] = 1798.342375000001; theta[26] = 1797.04475; theta[27] = 1795.26675; theta[28] = 1795.316624999999; theta[29] = 1795.14475; theta[30] = 1798.88475; theta[31] = 1797.862999999999;
                        sigma[0] = 5007.091734771618; sigma[1] = 5203.339032630993; sigma[2] = 5020.942183755993; sigma[3] = 5706.137214380988; sigma[4] = 5755.777502630992; sigma[5] = 4852.568309459115; sigma[6] = 5737.215474459117; sigma[7] = 4985.217059755993; sigma[8] = 5344.446611959116; sigma[9] = 4899.732244771616; sigma[10] = 5454.021241021615; sigma[11] = 4689.370648959117; sigma[12] = 4705.253675755989; sigma[13] = 4933.14217450599; sigma[14] = 5009.265714459116; sigma[15] = 5204.009471459118; sigma[16] = 5478.030455380989; sigma[17] = 4358.218499459116; sigma[18] = 4939.383898021615; sigma[19] = 5381.584014271619; sigma[20] = 4611.957041771617; sigma[21] = 5035.953603959113; sigma[22] = 4446.157509271618; sigma[23] = 5058.353715771613; sigma[24] = 4729.06394927162; sigma[25] = 4519.841277630992; sigma[26] = 4113.299796959115; sigma[27] = 4372.534306459119; sigma[28] = 4062.40661188099; sigma[29] = 4455.66789695912; sigma[30] = 4612.757429459118; sigma[31] = 4038.178703021619;
                        votes[1] = 0.166666666667 - gauss(x, theta, sigma);
                        theta[0] = 2393.948; theta[1] = 2392.873; theta[2] = 2392.699000000001; theta[3] = 2392.41625; theta[4] = 2391.56275; theta[5] = 2392.899875000002; theta[6] = 2391.561125; theta[7] = 2392.768375; theta[8] = 2392.231875; theta[9] = 2391.99625; theta[10] = 2391.788375000001; theta[11] = 2392.90275; theta[12] = 2392.70675; theta[13] = 2392.771875000001; theta[14] = 2392.882125; theta[15] = 2391.660750000001; theta[16] = 2391.37925; theta[17] = 2392.22075; theta[18] = 2394.429; theta[19] = 2393.084750000001; theta[20] = 2392.327625; theta[21] = 2393.048625; theta[22] = 2395.7665; theta[23] = 2394.8045; theta[24] = 2396.1315; theta[25] = 2393.231625; theta[26] = 2394.38325; theta[27] = 2394.7835; theta[28] = 2393.551125000001; theta[29] = 2394.691; theta[30] = 2394.794125000001; theta[31] = 2396.797125;
                        sigma[0] = 3909.931023021615; sigma[1] = 3696.104865521616; sigma[2] = 3540.754843521616; sigma[3] = 3796.641630459116; sigma[4] = 3509.594239459116; sigma[5] = 3561.063788255989; sigma[6] = 3572.92391950599; sigma[7] = 3635.112388130994; sigma[8] = 3638.706784755994; sigma[9] = 3558.675922959121; sigma[10] = 3674.641625630992; sigma[11] = 3622.124004459118; sigma[12] = 3255.25506895912; sigma[13] = 3379.672249755992; sigma[14] = 3495.04945125599; sigma[15] = 3631.998653959116; sigma[16] = 3424.13636145912; sigma[17] = 3683.677578959116; sigma[18] = 3742.347106021619; sigma[19] = 3869.284109459118; sigma[20] = 3633.468815130994; sigma[21] = 4173.617218880994; sigma[22] = 3904.565854771613; sigma[23] = 4201.120461771615; sigma[24] = 4117.263519771619; sigma[25] = 3995.690153130992; sigma[26] = 4274.430511459115; sigma[27] = 3981.261019771616; sigma[28] = 4417.085762005988; sigma[29] = 4464.194843521618; sigma[30] = 4208.758888755987; sigma[31] = 5231.784142505991;
                        votes[2] = 0.166666666667 - gauss(x, theta, sigma);
                        theta[0] = 5111.180000000001; theta[1] = 5109.643500000002; theta[2] = 5110.728374999998; theta[3] = 5110.120374999998; theta[4] = 5109.37725; theta[5] = 5109.535625; theta[6] = 5108.7515; theta[7] = 5108.719875; theta[8] = 5109.976375; theta[9] = 5108.335249999999; theta[10] = 5108.249500000002; theta[11] = 5108.710875000002; theta[12] = 5108.684749999999; theta[13] = 5107.969499999999; theta[14] = 5107.738000000002; theta[15] = 5108.147875000001; theta[16] = 5106.377500000001; theta[17] = 5107.320875; theta[18] = 5107.595375; theta[19] = 5107.914124999998; theta[20] = 5107.338249999998; theta[21] = 5106.412249999998; theta[22] = 5107.868375000001; theta[23] = 5110.08925; theta[24] = 5109.180250000001; theta[25] = 5110.065749999999; theta[26] = 5109.87875; theta[27] = 5109.9825; theta[28] = 5109.119624999997; theta[29] = 5110.028000000001; theta[30] = 5111.130124999997; theta[31] = 5108.26475;
                        sigma[0] = 5937.417079521623; sigma[1] = 5826.578697271621; sigma[2] = 5825.549628130981; sigma[3] = 5835.627798130993; sigma[4] = 5837.351301959118; sigma[5] = 5931.779426630991; sigma[6] = 6224.491807271618; sigma[7] = 6175.817293255992; sigma[8] = 6267.772847630987; sigma[9] = 6180.026101959121; sigma[10] = 6065.271399271615; sigma[11] = 6236.459480005989; sigma[12] = 6202.018466959121; sigma[13] = 5666.968106771612; sigma[14] = 5862.758828021622; sigma[15] = 5737.727031255997; sigma[16] = 5721.640888271617; sigma[17] = 5672.871325005986; sigma[18] = 5641.158569380992; sigma[19] = 5501.831806255989; sigma[20] = 5438.390648959115; sigma[21] = 5446.152599459112; sigma[22] = 5214.592055631001; sigma[23] = 5110.030556459114; sigma[24] = 5265.935631959113; sigma[25] = 5189.838886459111; sigma[26] = 5173.874465459113; sigma[27] = 5183.970238271616; sigma[28] = 5083.050370630992; sigma[29] = 4951.124605521612; sigma[30] = 5098.197725755988; sigma[31] = 4822.738364459115;
                        votes[3] = 0.166666666667 - gauss(x, theta, sigma);
                        theta[0] = 4406.637125000002; theta[1] = 4405.654875; theta[2] = 4402.536874999999; theta[3] = 4402.470625000001; theta[4] = 4398.402125; theta[5] = 4398.500124999998; theta[6] = 4399.548749999999; theta[7] = 4401.968125000001; theta[8] = 4405.377624999999; theta[9] = 4403.938625; theta[10] = 4400.693125; theta[11] = 4400.174375; theta[12] = 4398.431749999999; theta[13] = 4396.59675; theta[14] = 4398.430375000001; theta[15] = 4400.277375; theta[16] = 4402.674000000002; theta[17] = 4405.497875; theta[18] = 4406.87425; theta[19] = 4409.248999999999; theta[20] = 4412.759750000001; theta[21] = 4413.615375; theta[22] = 4414.300875000001; theta[23] = 4415.421500000002; theta[24] = 4415.950500000001; theta[25] = 4415.476124999999; theta[26] = 4413.71725; theta[27] = 4415.942125000002; theta[28] = 4422.287375; theta[29] = 4430.13575; theta[30] = 4447.2255; theta[31] = 4452.699624999998;
                        sigma[0] = 138278.17348000605; sigma[1] = 148196.56579450596; sigma[2] = 162025.844848506; sigma[3] = 166123.588930381; sigma[4] = 191313.53661375598; sigma[5] = 198066.599893256; sigma[6] = 188713.5989179591; sigma[7] = 176149.07053225592; sigma[8] = 157713.29989263104; sigma[9] = 154710.56304388095; sigma[10] = 163027.92988350595; sigma[11] = 170725.71726913095; sigma[12] = 187787.66362645908; sigma[13] = 186215.83861645914; sigma[14] = 183288.695058131; sigma[15] = 169897.35767888097; sigma[16] = 143307.64642102164; sigma[17] = 131448.32708625603; sigma[18] = 110528.57017645914; sigma[19] = 96293.02122352159; sigma[20] = 78275.78676445915; sigma[21] = 70140.79401188101; sigma[22] = 60991.17099500601; sigma[23] = 58172.46219227162; sigma[24] = 54425.99629177161; sigma[25] = 53213.325943255986; sigma[26] = 52051.36845445912; sigma[27] = 45177.585448756; sigma[28] = 27053.086081380996; sigma[29] = 11572.167996459119; sigma[30] = 11724.469099271611; sigma[31] = 29343.015625630993;
                        votes[4] = 0.166666666667 - gauss(x, theta, sigma);
                        theta[0] = 5611.706375; theta[1] = 5613.504124999998; theta[2] = 5613.331124999999; theta[3] = 5614.313875000002; theta[4] = 5614.012499999999; theta[5] = 5614.090125; theta[6] = 5614.947875000001; theta[7] = 5614.569125; theta[8] = 5615.171499999999; theta[9] = 5617.274624999999; theta[10] = 5617.372499999998; theta[11] = 5617.875999999999; theta[12] = 5619.208375; theta[13] = 5621.04375; theta[14] = 5619.758624999999; theta[15] = 5621.20625; theta[16] = 5621.100375; theta[17] = 5620.808875; theta[18] = 5622.583374999997; theta[19] = 5622.930374999999; theta[20] = 5622.613; theta[21] = 5623.718500000001; theta[22] = 5622.855; theta[23] = 5624.290000000002; theta[24] = 5624.021999999999; theta[25] = 5624.172625000001; theta[26] = 5624.160875; theta[27] = 5623.989750000002; theta[28] = 5623.202750000001; theta[29] = 5624.033374999999; theta[30] = 5624.309875000002; theta[31] = 5625.81625;
                        sigma[0] = 8119.796267630988; sigma[1] = 8085.876256255992; sigma[2] = 7879.336259505993; sigma[3] = 7971.302883255981; sigma[4] = 8099.016030771618; sigma[5] = 8073.691403255996; sigma[6] = 8147.782176255985; sigma[7] = 7969.637587505984; sigma[8] = 7647.499202271603; sigma[9] = 7762.100424380987; sigma[10] = 8137.241158271603; sigma[11] = 7511.616056021608; sigma[12] = 7777.11185813098; sigma[13] = 7816.585410459119; sigma[14] = 7472.146916380993; sigma[15] = 7422.901590459116; sigma[16] = 7914.188105630999; sigma[17] = 7495.443892005988; sigma[18] = 7742.738606880994; sigma[19] = 7835.406385630995; sigma[20] = 7602.752165521618; sigma[21] = 7713.447477271618; sigma[22] = 8031.252569521629; sigma[23] = 7544.67361702161; sigma[24] = 7695.676210521608; sigma[25] = 7601.684186381; sigma[26] = 7798.173455005988; sigma[27] = 7537.514934459108; sigma[28] = 8018.40815445911; sigma[29] = 8201.275416880993; sigma[30] = 7706.227045755983; sigma[31] = 7649.972447959117;
                        votes[5] = 0.166666666667 - gauss(x, theta, sigma);
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