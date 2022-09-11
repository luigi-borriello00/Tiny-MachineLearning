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
                        float votes[15] = { -1.577201415269 ,0.804923301933 ,1.694164198173 ,-3.004564516917 ,2.013141287217 ,-2.69260102254 ,1.125627177279 ,-0.361808185591 ,1.538422517317 ,-1.097155493834 ,1.519780369899 ,0.435849088796 ,-2.481690422163 ,-0.029153841924 ,2.112266957624  };
                        votes[0] += dot(x,   -0.331724336711  , -0.380961032114  , -0.290696511567  , 0.025673645072  , -1.41727201844  , 1.26365196273  , -0.057807450053  , -1.655016082369  , -1.02480647211  , 0.331088629891  , 1.551229277092  , -2.596416911993  , 0.172453852413  , 2.131525910645  , 0.621174004096  , -0.827621482221  , 0.008254295438  , 2.082039702834  , -1.07594542366  , -2.507261179477  , 2.026953935102  , -1.235096230517  , -1.60572518022  , -0.752027357197  , -0.7016560512  , -0.427552032646  , -0.85714371971  , -0.704506206188  , 0.239567755013  , 1.1418134485  , -0.899118812341  , -1.424899835065  , 0.57813761668  , -0.644128363563  , -1.347315413562  , -0.01724709113  , -0.58862218301  , -0.585876279309  , 0.037421650099  , -0.5612671864  , -0.340102038578  , 0.274962466288 );
                        votes[1] += dot(x,   0.425616038599  , -0.80313793774  , 0.274897602732  , 0.548947420417  , -1.192555219661  , 0.227821666842  , 1.220983149892  , -0.989741798205  , 1.41618296011  , 1.420350875552  , -2.232311272177  , -1.822720287553  , 1.755153358535  , 0.147986501018  , -3.344314464128  , 1.335444018118  , 1.977759132185  , -0.829332408515  , 0.672213164527  , 1.658822251366  , 1.385101022517  , 0.292941546135  , 0.06662861211  , 1.067582626189  , 1.172283653677  , 0.982976247956  , -1.287331914279  , 1.357494406442  , 0.653999841287  , -0.369720882432  , 1.301219657963  , -0.956960911399  , -0.265828421066  , 1.420035606848  , -0.661733814465  , -0.212858434757  , 1.339290767052  , -0.455128232899  , -0.092434157597  , 1.364756218775  , -0.620239045326  , -0.032808862837 );
                        votes[2] += dot(x,   -0.204648045402  , 0.044397946274  , 0.48106859233  , 0.032206646381  , -0.336011822171  , 0.157636287219  , -0.656945506913  , -0.415894323742  , -1.109245392449  , -0.030632422301  , 2.634073940959  , -1.032872481692  , -0.287915681006  , 1.060926612234  , 2.03485156757  , -0.372866353799  , -1.072820682848  , 1.452766950608  , 1.691940705854  , -0.407994809866  , -1.868113274588  , 3.158757728007  , -0.066662019978  , -3.269284792543  , 2.555170670977  , 0.535956376122  , -1.841975434357  , 1.246710052612  , 0.945832664471  , -0.510837155053  , -0.128681603419  , -0.05690394449  , 0.923678052488  , -0.429038981462  , -0.414663814651  , 0.889057974485  , -0.676527862796  , -0.775329266998  , 0.611844706142  , -0.612539337457  , -0.740269343405  , 0.31230618128 );
                        votes[3] += dot(x,   -0.816046678965  , -0.925265983684  , 0.526918721779  , -0.826098215043  , 1.00453919241  , 0.357468346918  , -0.198860198643  , 0.069594173325  , 0.642981781703  , 0.395351067156  , -2.188911492588  , 0.336157192521  , -0.466666462814  , -2.75227811942  , -0.429746881226  , 0.228933997514  , 1.017930494944  , 0.145576690599  , -0.401582835331  , 2.056680452856  , 1.050983473079  , -0.971401815183  , 0.587563804495  , 0.332346003938  , -0.712192813798  , -0.977547119232  , 0.829770337212  , -0.559465206134  , -1.693142500309  , 0.771607326316  , -0.052709702849  , -0.606599924265  , -0.3663511483  , 0.167274859404  , 0.61528148837  , -0.208323071902  , 0.302796152866  , 1.038785861735  , 0.150898387261  , 0.237279685971  , 1.055755159041  , 0.072235021523 );
                        votes[4] += dot(x,   0.808897147849  , -0.715371237184  , -1.090842484931  , 0.458783168037  , -0.636122049842  , -0.183992586743  , 0.230731576102  , -1.338836015812  , -1.885220199871  , 0.727937573636  , 3.233606791077  , -0.228234721725  , 0.330113203018  , 0.431808262742  , 0.590577779992  , 0.466623466862  , -0.111133385917  , -0.631657215297  , -0.369372245322  , -0.049259908317  , -0.718744351217  , -1.011594278277  , -0.573920845264  , 0.600101449707  , -1.844700691725  , 1.419671327579  , 1.277960432405  , -2.13007180955  , 2.255804430353  , 1.277079177283  , -1.351256827791  , 2.157603098039  , 0.779365259921  , -0.106264428477  , 1.039540951602  , -0.233640284136  , 1.576787912007  , -0.64028944096  , -0.785126750816  , 2.539557244198  , -1.264584414386  , -0.825725109272 );
                        votes[5] += dot(x,   -0.710408733192  , -0.927560157867  , -0.562039995884  , -1.192537147523  , -0.967933141064  , -0.029317043155  , 0.325416575628  , 0.404993342907  , 1.312416954506  , 0.410950793219  , -0.496431661585  , 1.112682205854  , 0.700319286268  , -0.916136337048  , -2.423618576675  , 0.430725328077  , -3.224313632348  , -0.362604130192  , 0.10109597973  , -0.319796189058  , 1.070749231981  , -0.396470035752  , 0.59938872164  , 1.003776464998  , -1.375892185648  , -1.749899942089  , 1.297680763102  , -1.188100255993  , -1.95226193325  , 0.73689695548  , -0.337631091898  , -0.940733386921  , 0.153308928975  , 0.061447314628  , 0.190536803587  , 0.089708459465  , -0.046887390278  , 0.404489455303  , 0.190565148205  , -0.158539846868  , 0.461183767568  , 0.38283993164 );
                        votes[6] += dot(x,   -0.034578071467  , 0.589705420501  , 0.170420951233  , 0.518769101525  , 1.098953814131  , 0.376030141521  , -0.187039238034  , -0.799895271216  , 2.014351844482  , 1.037798739538  , -0.299963807944  , -1.197975114729  , 3.300314272167  , 0.722570846877  , -3.304810468757  , 3.86026872664  , 0.809049995432  , -2.614777673717  , 2.25898667176  , 0.579534294253  , -1.238280924286  , 0.857817449622  , 1.462075034417  , 0.391650205342  , -0.334373816404  , -0.33984240375  , 1.242550938663  , -0.442726773724  , -0.817010321329  , 0.829199786853  , -0.2534606883  , -0.297448054138  , 0.155149193965  , -0.10014272767  , 0.230712408732  , -0.043050457506  , -0.152970862224  , 0.510557609502  , 0.026663022488  , -0.219559418144  , 0.637929346968  , -0.030585917137 );
                        votes[7] += dot(x,   0.793096393798  , 0.432426393468  , 0.226508108431  , 1.135614272683  , -0.041575903618  , 0.363333435103  , 1.32611206916  , 0.65435180151  , -1.467875083993  , 0.583424912757  , -2.052512167608  , -0.635215222206  , 0.958003644367  , 0.229573314599  , 2.777894157517  , 0.287536935658  , -0.94278508164  , -1.222091739774  , -0.21485969978  , -2.725823087923  , -0.063738185603  , 0.289428183615  , -0.670651343548  , 1.516015447773  , 0.741065605525  , -0.720341715785  , -0.60015053532  , 0.47165341764  , -2.859721093874  , -1.653748498055  , 0.117834391418  , -3.095093071404  , 0.559138050406  , 0.095416891439  , -1.211659194021  , 0.343655370699  , -0.272751947459  , -1.089544478351  , 0.090943903339  , -0.23100254184  , -1.067346936004  , 0.086470348599 );
                        votes[8] += dot(x,   0.777653323647  , 0.427065714744  , 0.05943649379  , 0.701607571732  , 0.390226184831  , -0.374953907569  , 0.207531683473  , -1.551185955661  , -1.148563920401  , -0.807891576422  , -1.376153303089  , 1.44367959729  , -0.859049398959  , -0.051152359196  , 1.562536912365  , -0.141851010976  , -0.379754075009  , 0.279911734936  , 0.130217102829  , -1.786350232468  , -1.23315101501  , -0.457210488949  , -2.118722877688  , -0.820296689892  , -0.533518738589  , -1.290727734208  , 1.786376554938  , 0.412368116914  , -0.23646845438  , 1.270333240373  , 1.516450251709  , 0.217397105981  , -1.600667827777  , 2.046664152544  , -1.841590332182  , -1.693032741075  , 2.164574512753  , -2.208765071455  , -0.735855358663  , 1.983730043476  , -1.882626812673  , -0.390865751901 );
                        votes[9] += dot(x,   -2.260337611241  , 1.086833575424  , 0.151275985989  , -1.997759353897  , 1.272923402642  , 0.224889189943  , -1.294391698442  , -0.202267700545  , 2.348902583276  , -0.144694989363  , -1.220624239905  , 1.241503855072  , 0.08233797609  , -0.859811090502  , -0.8405877473  , 0.431585395223  , 1.034198054847  , -2.406542452081  , 1.102736538614  , 0.998787668999  , -2.253778925871  , 0.177733730484  , 1.262528841347  , -0.148961314304  , -1.134331910377  , 1.13453034666  , 2.015008574064  , -1.950830510125  , 0.353857244576  , 0.96310439398  , -1.645511354119  , -0.025534031591  , 0.106987110043  , -1.544626573282  , -0.000514253809  , -0.126463641144  , -1.331290356231  , 0.157954398253  , 0.040878609204  , -1.369083018986  , 0.058624775453  , 0.55547175278 );
                        votes[10] += dot(x,   -0.853154941323  , -0.3948511514  , 0.085791110388  , -1.377637738188  , -0.47511345216  , -0.705162617178  , -2.081158707891  , 2.001153951838  , 0.676490781195  , -2.826313959647  , 0.578880587628  , 1.229860003405  , -2.24766346622  , -1.094880682858  , 1.709356712577  , -0.813538082362  , -0.482595591208  , 0.679228714071  , 0.737648202145  , -0.006382344265  , -0.735555311582  , 2.15422975106  , 0.435534747019  , -1.639430683623  , 2.850933350806  , 0.447711283386  , -1.70292619915  , 2.140223835675  , -0.258866228471  , -0.739536456762  , 1.10588520881  , 0.348611192653  , -0.141124145349  , 0.288956291488  , 1.180637147679  , 0.066619391107  , 0.009730650743  , 2.544205799709  , 0.012682041677  , -0.114414571147  , 2.20968847301  , -0.241263990275 );
                        votes[11] += dot(x,   -0.288241085063  , 0.111224996125  , 0.147367889278  , -0.336096260484  , 0.127649032761  , -0.410830795664  , -0.190263754486  , 1.032048234149  , -0.557409533093  , 0.053187251401  , 2.518912536194  , -0.018597007706  , -0.933533533963  , 0.827580512782  , 1.636157893568  , -0.981633203086  , -0.197318204091  , 0.58827035496  , 0.1970306389  , 0.18565599705  , -1.191668652122  , 0.086902733096  , 0.125570508718  , -0.426586807181  , -0.669749808426  , -0.046544354715  , 0.060594861182  , -1.448487186112  , -0.123617149061  , -0.073456076417  , -2.251008409043  , 0.343856114712  , -0.011096020188  , -2.960838972867  , 0.822354869067  , 0.579668371596  , -3.426871641728  , 0.632475110421  , 0.093673312735  , -3.814728868123  , 0.645584257359  , 0.032311774848 );
                        votes[12] += dot(x,   -0.472083857763  , -0.067518548769  , -0.324931416767  , -0.335061130334  , -0.460208013232  , -0.63547946302  , 0.372127252255  , 0.50511823766  , 0.978841589901  , 0.61547845154  , -0.430341545199  , 1.197719019483  , 0.315380116225  , -1.166992508195  , -1.830792212449  , -0.086463160506  , 0.010272218415  , 1.329873222234  , -0.020028898516  , -0.249323939735  , 2.489637698446  , 0.622166564617  , -1.590374673161  , 1.007085353416  , 0.88640267718  , -0.51551820787  , -1.475449081955  , 1.20141832484  , 1.195542088554  , -1.904499082116  , 0.833596423314  , 1.995022786528  , 0.088578851805  , -0.48687675367  , 0.339378468729  , 1.162700195973  , -1.095353212977  , -1.323606287959  , 0.737379819546  , -1.04249212166  , -1.524825249989  , 0.275873866981 );
                        votes[13] += dot(x,   0.676890030621  , 0.801287407417  , 0.377027127042  , 0.958537336734  , 1.183840920321  , 0.361368837148  , 0.822379813793  , 0.320252097507  , -1.419764275431  , -0.125438795374  , -0.60123343642  , -0.678745628733  , -2.33637172307  , 0.9215766031  , 1.321823441897  , -3.402984867179  , 2.363163938031  , 1.596591252465  , -2.91151711987  , 1.856808725173  , 0.931313644519  , -1.231049062827  , 1.428829740559  , -0.220767132523  , 0.003950408811  , 0.985637938528  , -0.679261174337  , 0.823903240738  , 0.849021640546  , -0.667182970879  , 0.655274093736  , 0.572842000125  , 0.179406723224  , 0.748278208472  , -0.027170438243  , 0.062238208398  , 0.954958958915  , 0.22667019235  , -0.505743256105  , 0.810973320166  , 1.013545021903  , -0.05249863189 );
                        votes[14] += dot(x,   2.489070426613  , 0.721724594806  , -0.232202173843  , 1.685050682888  , 0.448659073093  , -0.992463454093  , 0.161184434159  , 1.965325308653  , -0.777283617825  , -1.640596551584  , 0.381779793566  , 1.64917550271  , -0.482875443051  , 0.36770253322  , -0.080502119048  , -0.414159707963  , -0.80990747623  , -0.087253003133  , -1.898562781879  , 0.715902301411  , 0.348291634636  , -2.337155775131  , 0.657936929555  , 1.358797225901  , -0.90339035081  , 0.561489990063  , -0.065704402459  , 0.770416552964  , 1.447462015873  , -1.071053207072  , 1.389118462811  , 1.768840861235  , -1.138682224827  , 1.443843476169  , 1.086205123168  , -0.659032250073  , 1.243136502367  , 1.563400630658  , 0.126208922486  , 1.187330398039  , 1.357683039059  , -0.418723080626 );
                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 15; i++) {
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
                        va_start(w, 42);
                        float dot = 0.0;

                        for (uint16_t i = 0; i < 42; i++) {
                            const float wi = va_arg(w, double);
                            dot += x[i] * wi;
                        }

                        return dot;
                    }
                };
            }
        }
    }