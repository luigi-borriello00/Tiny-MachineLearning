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
                        theta[0] = 0.286689573727; theta[1] = 0.26717184717; theta[2] = 0.152770003919; theta[3] = 0.110189645071; theta[4] = 0.149111054761; theta[5] = 0.185858117835; theta[6] = 0.326263070887; theta[7] = 0.426869402906; theta[8] = 0.322857795644; theta[9] = 0.310013423201; theta[10] = 0.160999456238; theta[11] = 0.113904707551; theta[12] = 0.085617144086; theta[13] = -0.035955137552; theta[14] = -0.112777202649; theta[15] = -0.096110249615; theta[16] = -0.097988898927; theta[17] = -0.040412514144; theta[18] = -0.025727514475; theta[19] = 0.018474563926; theta[20] = 0.059634222306; theta[21] = 0.116436304563; theta[22] = 0.189686737042; theta[23] = 0.322204922705; theta[24] = 0.450883297498; theta[25] = 0.499816195174; theta[26] = 0.645329726811; theta[27] = 0.697255143934; theta[28] = 0.794229740053; theta[29] = 0.633305624827; theta[30] = 0.520848477821; theta[31] = 0.281722277282;
                        sigma[0] = 1.141880435231; sigma[1] = 0.723788662877; sigma[2] = 0.468352805675; sigma[3] = 0.405358248592; sigma[4] = 0.41098239714; sigma[5] = 0.381053107143; sigma[6] = 0.449185176285; sigma[7] = 0.35332983873; sigma[8] = 0.357755542638; sigma[9] = 0.470541320628; sigma[10] = 0.463312918401; sigma[11] = 0.550333271633; sigma[12] = 0.387403808898; sigma[13] = 0.285613793818; sigma[14] = 0.152214002058; sigma[15] = 0.141135220515; sigma[16] = 0.118612304726; sigma[17] = 0.122521982634; sigma[18] = 0.24066827712; sigma[19] = 0.628863797988; sigma[20] = 1.292247632855; sigma[21] = 2.223656434309; sigma[22] = 1.900201524475; sigma[23] = 5.167515536302; sigma[24] = 7.251077332242; sigma[25] = 7.695469271115; sigma[26] = 10.387581234535; sigma[27] = 12.715633032844; sigma[28] = 14.188946636187; sigma[29] = 8.905054513471; sigma[30] = 4.567163124857; sigma[31] = 1.679515142251;
                        votes[0] = 0.333333333333 - gauss(x, theta, sigma);
                        theta[0] = 0.379621420277; theta[1] = 0.162019744307; theta[2] = 0.197350494018; theta[3] = 0.083121915246; theta[4] = -0.040078796983; theta[5] = -0.197553357367; theta[6] = -0.185403227377; theta[7] = -0.072870452416; theta[8] = -0.081524586628; theta[9] = 0.125148574792; theta[10] = 0.481476230734; theta[11] = 0.839365546097; theta[12] = 0.973465115806; theta[13] = 1.081099493102; theta[14] = 1.072893435735; theta[15] = 1.141522996712; theta[16] = 1.170003016515; theta[17] = 1.205244177477; theta[18] = 1.233881976577; theta[19] = 1.258246150744; theta[20] = 1.574679070893; theta[21] = 1.689000533316; theta[22] = 1.474525523446; theta[23] = 1.839319627956; theta[24] = 1.822632002232; theta[25] = 1.603002911337; theta[26] = 1.525297055086; theta[27] = 1.244447382691; theta[28] = 0.931272707761; theta[29] = 0.902265170407; theta[30] = 0.867051095086; theta[31] = 0.895863157508;
                        sigma[0] = 1.781727170795; sigma[1] = 1.028532594599; sigma[2] = 0.868732855324; sigma[3] = 0.953581345688; sigma[4] = 0.732463779366; sigma[5] = 0.613659799386; sigma[6] = 0.61565985772; sigma[7] = 0.551455025824; sigma[8] = 0.576267272289; sigma[9] = 0.753206546477; sigma[10] = 1.244040298791; sigma[11] = 2.129260764385; sigma[12] = 1.610883286656; sigma[13] = 1.821760341406; sigma[14] = 1.416805698487; sigma[15] = 1.384531584715; sigma[16] = 1.199231976741; sigma[17] = 1.248511854082; sigma[18] = 1.461899410094; sigma[19] = 2.141590609991; sigma[20] = 4.239669913182; sigma[21] = 6.262076279128; sigma[22] = 5.491112696205; sigma[23] = 9.978684229067; sigma[24] = 11.843892382422; sigma[25] = 12.791522613457; sigma[26] = 12.186072971041; sigma[27] = 9.995562738926; sigma[28] = 5.741106176274; sigma[29] = 4.595381798648; sigma[30] = 5.224311362957; sigma[31] = 8.450539163825;
                        votes[1] = 0.333333333333 - gauss(x, theta, sigma);
                        theta[0] = 0.55685421575; theta[1] = 0.063709077752; theta[2] = 0.041370042432; theta[3] = 0.031411853646; theta[4] = 0.157590415866; theta[5] = 0.059578784204; theta[6] = 0.132890276116; theta[7] = 0.25118222206; theta[8] = 0.114152795916; theta[9] = 0.199290983497; theta[10] = 0.100466936166; theta[11] = 0.117737520685; theta[12] = 0.122605890511; theta[13] = 0.084480216489; theta[14] = 0.076008163029; theta[15] = 0.113865875994; theta[16] = 0.150393305181; theta[17] = 0.184506616933; theta[18] = 0.210330111181; theta[19] = 0.205638602825; theta[20] = 0.213175015973; theta[21] = 0.241885190211; theta[22] = 0.342345764514; theta[23] = 0.308370981053; theta[24] = 0.333843780262; theta[25] = 0.307692560171; theta[26] = 0.29096598326; theta[27] = 0.273831179065; theta[28] = 0.214363377827; theta[29] = 0.225781379884; theta[30] = 0.226775602918; theta[31] = 0.138422347025;
                        sigma[0] = 1.975935262368; sigma[1] = 1.042187940518; sigma[2] = 0.745560640215; sigma[3] = 0.95326473391; sigma[4] = 0.819049498937; sigma[5] = 0.470603263251; sigma[6] = 0.523300255289; sigma[7] = 0.442958816859; sigma[8] = 0.299155537549; sigma[9] = 0.41694067228; sigma[10] = 0.338389141393; sigma[11] = 0.404767385231; sigma[12] = 0.243616288385; sigma[13] = 0.217189535946; sigma[14] = 0.181957497391; sigma[15] = 0.170804425279; sigma[16] = 0.174017374266; sigma[17] = 0.196997534511; sigma[18] = 0.238223290757; sigma[19] = 0.289244455969; sigma[20] = 0.466524340802; sigma[21] = 0.688085984233; sigma[22] = 1.496197994519; sigma[23] = 1.005257550228; sigma[24] = 1.062600120401; sigma[25] = 1.039428646345; sigma[26] = 0.938378815719; sigma[27] = 0.991413866257; sigma[28] = 0.907731422137; sigma[29] = 0.87926617872; sigma[30] = 0.817872002483; sigma[31] = 0.745657174515;
                        votes[2] = 0.333333333333 - gauss(x, theta, sigma);
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