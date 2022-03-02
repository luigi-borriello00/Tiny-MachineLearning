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
                        float votes[5] = { 0.0f };
                        float theta[32] = { 0 };
                        float sigma[32] = { 0 };
                        theta[0] = 0.072500992632; theta[1] = -0.009573310189; theta[2] = -0.010336478404; theta[3] = 0.031163328135; theta[4] = 0.113346053963; theta[5] = 0.193490009808; theta[6] = 0.400826267936; theta[7] = 0.580219583485; theta[8] = 0.641968890579; theta[9] = 0.568851822353; theta[10] = 0.511885104199; theta[11] = 0.434650592397; theta[12] = 0.319432405455; theta[13] = 0.171423317257; theta[14] = 0.104821810455; theta[15] = 0.070081613027; theta[16] = 0.004728011268; theta[17] = 0.026354199086; theta[18] = 0.07902362505; theta[19] = 0.138879323362; theta[20] = 0.132122026056; theta[21] = 0.186517685961; theta[22] = 0.246033090315; theta[23] = 0.333452695585; theta[24] = 0.441016970054; theta[25] = 0.384992852543; theta[26] = 0.415195997735; theta[27] = 0.432923911816; theta[28] = 0.477358604756; theta[29] = 0.383437267489; theta[30] = 0.25752388524; theta[31] = 0.160626174221;
                        sigma[0] = 0.312246597573; sigma[1] = 0.283670798354; sigma[2] = 0.247887891855; sigma[3] = 0.212808066208; sigma[4] = 0.234651446362; sigma[5] = 0.27393911045; sigma[6] = 0.396565228057; sigma[7] = 0.386584722523; sigma[8] = 0.459825994921; sigma[9] = 0.595767566574; sigma[10] = 0.768692546208; sigma[11] = 0.970016631016; sigma[12] = 0.831830227844; sigma[13] = 0.591270794744; sigma[14] = 0.355868836234; sigma[15] = 0.378955957653; sigma[16] = 0.325616143446; sigma[17] = 0.350359947265; sigma[18] = 0.760400546684; sigma[19] = 1.95005398484; sigma[20] = 2.453841562994; sigma[21] = 3.684808449619; sigma[22] = 3.328121448716; sigma[23] = 6.05625338087; sigma[24] = 8.647791853119; sigma[25] = 8.288163782626; sigma[26] = 9.370774271585; sigma[27] = 9.572735399018; sigma[28] = 10.241560204113; sigma[29] = 6.323996064419; sigma[30] = 1.972986404305; sigma[31] = 0.476109616893;
                        votes[0] = 0.2 - gauss(x, theta, sigma);
                        theta[0] = 0.037223026289; theta[1] = -0.13348703756; theta[2] = -0.027969395879; theta[3] = -0.012364983255; theta[4] = -0.014424470898; theta[5] = -0.134952090256; theta[6] = -0.12369286432; theta[7] = 0.005146232292; theta[8] = 0.133512721808; theta[9] = 0.263463745422; theta[10] = 0.839428916518; theta[11] = 1.284367475938; theta[12] = 1.578637481573; theta[13] = 2.09519158313; theta[14] = 2.326331150949; theta[15] = 2.442693273207; theta[16] = 2.5936521944; theta[17] = 2.53165812172; theta[18] = 2.762536236434; theta[19] = 2.898663320099; theta[20] = 2.842133727308; theta[21] = 2.906383714877; theta[22] = 2.512269407239; theta[23] = 2.321489774377; theta[24] = 2.231873985317; theta[25] = 1.79660779219; theta[26] = 1.552558408971; theta[27] = 1.277533152863; theta[28] = 1.003277338343; theta[29] = 1.045619355242; theta[30] = 1.024730207093; theta[31] = 1.044520400148;
                        sigma[0] = 0.42817529543; sigma[1] = 0.384020560712; sigma[2] = 0.551920455375; sigma[3] = 0.514169861941; sigma[4] = 0.464615345504; sigma[5] = 0.464935090493; sigma[6] = 0.480284500357; sigma[7] = 0.512198288151; sigma[8] = 0.607371224694; sigma[9] = 0.820621095931; sigma[10] = 1.69186021173; sigma[11] = 3.240300657883; sigma[12] = 3.125576889422; sigma[13] = 4.243411714111; sigma[14] = 3.854422169142; sigma[15] = 4.011236435154; sigma[16] = 3.86358203382; sigma[17] = 4.030355582874; sigma[18] = 5.201996261887; sigma[19] = 7.341609731213; sigma[20] = 9.288801887369; sigma[21] = 12.201540870272; sigma[22] = 11.109461956019; sigma[23] = 11.893141220398; sigma[24] = 13.92309900654; sigma[25] = 12.869270191074; sigma[26] = 10.593110044438; sigma[27] = 8.256166704113; sigma[28] = 5.730590793384; sigma[29] = 5.700418676837; sigma[30] = 6.039392886088; sigma[31] = 8.489738408439;
                        votes[1] = 0.2 - gauss(x, theta, sigma);
                        theta[0] = 0.792813733102; theta[1] = 0.493534913973; theta[2] = 0.305512890952; theta[3] = 0.211390363455; theta[4] = 0.240596432618; theta[5] = 0.211916360245; theta[6] = 0.209689172; theta[7] = 0.258687622494; theta[8] = 0.255950842696; theta[9] = 0.203784706898; theta[10] = 0.09379518642; theta[11] = 0.18361159129; theta[12] = 0.200125279295; theta[13] = 0.165624156852; theta[14] = 0.147000396942; theta[15] = 0.193866785361; theta[16] = 0.194657162547; theta[17] = 0.181263311925; theta[18] = 0.262651937203; theta[19] = 0.218102213121; theta[20] = 0.303770872023; theta[21] = 0.26997481467; theta[22] = 0.259526277489; theta[23] = 0.330578247218; theta[24] = 0.319050244482; theta[25] = 0.36418895937; theta[26] = 0.473912072892; theta[27] = 0.35649211045; theta[28] = 0.390568014967; theta[29] = 0.384405328272; theta[30] = 0.426936348576; theta[31] = 0.359145685342;
                        sigma[0] = 0.919570589426; sigma[1] = 0.994778871214; sigma[2] = 0.864537225037; sigma[3] = 0.840250460783; sigma[4] = 0.757561536333; sigma[5] = 0.638348770999; sigma[6] = 0.675251068585; sigma[7] = 0.575478237924; sigma[8] = 0.589280672533; sigma[9] = 0.813480733051; sigma[10] = 0.575670543873; sigma[11] = 0.944527653435; sigma[12] = 0.809524797806; sigma[13] = 0.932022461049; sigma[14] = 0.717488103914; sigma[15] = 0.976655276553; sigma[16] = 1.043753889742; sigma[17] = 0.853332996442; sigma[18] = 1.184760740143; sigma[19] = 1.502336478501; sigma[20] = 2.009888028866; sigma[21] = 2.059561107908; sigma[22] = 1.41159078041; sigma[23] = 1.558471020484; sigma[24] = 1.058939776693; sigma[25] = 1.069538352146; sigma[26] = 1.256637757785; sigma[27] = 1.136570224755; sigma[28] = 1.241964258256; sigma[29] = 1.359191569266; sigma[30] = 1.480088041221; sigma[31] = 1.705674696146;
                        votes[2] = 0.2 - gauss(x, theta, sigma);
                        theta[0] = 0.496330922352; theta[1] = 0.458654422929; theta[2] = 0.34308722564; theta[3] = 0.181233039791; theta[4] = 0.199713212554; theta[5] = 0.188202951683; theta[6] = 0.043419602952; theta[7] = -0.043845509797; theta[8] = -0.070678138466; theta[9] = -0.099017773449; theta[10] = -0.075054692721; theta[11] = -0.004891585452; theta[12] = 0.110080831899; theta[13] = 0.087548373733; theta[14] = 0.104781657927; theta[15] = 0.097550634515; theta[16] = 0.138983804613; theta[17] = 0.156429110695; theta[18] = 0.20992509102; theta[19] = 0.221757440101; theta[20] = 0.312595348024; theta[21] = 0.44730466178; theta[22] = 0.501742052669; theta[23] = 0.619422060814; theta[24] = 0.70595466431; theta[25] = 0.741042301493; theta[26] = 0.823866428217; theta[27] = 0.81500899179; theta[28] = 0.814523832078; theta[29] = 0.859152587017; theta[30] = 0.913769289256; theta[31] = 0.782403091742;
                        sigma[0] = 0.662944858058; sigma[1] = 0.768798158812; sigma[2] = 0.933934403734; sigma[3] = 0.892389330797; sigma[4] = 0.748046618461; sigma[5] = 0.824007297637; sigma[6] = 0.618401027088; sigma[7] = 0.279405358676; sigma[8] = 0.349268878091; sigma[9] = 0.430276406072; sigma[10] = 0.542206447568; sigma[11] = 0.854306270172; sigma[12] = 1.279648867837; sigma[13] = 1.058318201011; sigma[14] = 0.80536873952; sigma[15] = 0.615138127701; sigma[16] = 0.723640099966; sigma[17] = 0.981569802522; sigma[18] = 1.316914078744; sigma[19] = 2.050252493567; sigma[20] = 2.54222529417; sigma[21] = 3.838191512411; sigma[22] = 4.330280676465; sigma[23] = 4.707667268617; sigma[24] = 5.85709243746; sigma[25] = 5.284946547839; sigma[26] = 5.533146502654; sigma[27] = 5.415830957453; sigma[28] = 5.69757031936; sigma[29] = 5.634687174371; sigma[30] = 5.492046515366; sigma[31] = 5.282636769526;
                        votes[3] = 0.2 - gauss(x, theta, sigma);
                        theta[0] = 0.228523222295; theta[1] = -0.099627599796; theta[2] = -0.087274033633; theta[3] = -0.056149303758; theta[4] = 0.114428046399; theta[5] = 0.082469387837; theta[6] = 0.180673229691; theta[7] = 0.336031816442; theta[8] = 0.398264302638; theta[9] = 0.362935268279; theta[10] = 0.345122618677; theta[11] = 0.315967496053; theta[12] = 0.301377149721; theta[13] = 0.356160885766; theta[14] = 0.408714971652; theta[15] = 0.416631686561; theta[16] = 0.445100489844; theta[17] = 0.451286606398; theta[18] = 0.508887883048; theta[19] = 0.485229118284; theta[20] = 0.370068318283; theta[21] = 0.366257461732; theta[22] = 0.377850982595; theta[23] = 0.267435872951; theta[24] = 0.308823494198; theta[25] = 0.286675573228; theta[26] = 0.247451817431; theta[27] = 0.220092303865; theta[28] = 0.148601835625; theta[29] = 0.184766552074; theta[30] = 0.189565070802; theta[31] = 0.121954579064;
                        sigma[0] = 0.51631467918; sigma[1] = 0.400446222151; sigma[2] = 0.502896617906; sigma[3] = 0.535642074382; sigma[4] = 0.523334273984; sigma[5] = 0.342995091258; sigma[6] = 0.385877278344; sigma[7] = 0.376004083209; sigma[8] = 0.367175710038; sigma[9] = 0.388305396649; sigma[10] = 0.391904994916; sigma[11] = 0.484966055074; sigma[12] = 0.417734042992; sigma[13] = 0.438908436652; sigma[14] = 0.400263639922; sigma[15] = 0.453551230162; sigma[16] = 0.497244328936; sigma[17] = 0.604729850463; sigma[18] = 0.769770364722; sigma[19] = 0.876694313188; sigma[20] = 0.916869117671; sigma[21] = 1.079608336685; sigma[22] = 1.845412147689; sigma[23] = 1.046182116618; sigma[24] = 1.131219886034; sigma[25] = 1.167495549456; sigma[26] = 1.313425121225; sigma[27] = 0.975690656326; sigma[28] = 0.833211087713; sigma[29] = 1.038700519202; sigma[30] = 0.889664178544; sigma[31] = 0.709041543641;
                        votes[4] = 0.2 - gauss(x, theta, sigma);
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