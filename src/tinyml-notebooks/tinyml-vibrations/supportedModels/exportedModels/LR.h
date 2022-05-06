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
                        float votes[5] = { 0.834898980716 ,1.019466980288 ,-2.238513956121 ,0.848026589732 ,-0.463878594616  };
                        votes[0] += dot(x,   0.197483357074  , 0.042643618254  , 0.040358099499  , 0.129977627288  , 0.063702503603  , 0.148138489117  , 0.161201072155  , 0.162766278158  , -0.047842405951  , 0.285885451588  , 0.107405771775  , -0.117851649393  , 0.209633556301  , 0.094978411738  , -0.082184048783  , 0.266529104244  , 0.101192447624  , 0.018482533345  , 0.271176112342  , 0.200455362171  , -0.020238495473  , 0.330193540847  , 0.021720228961  , -0.19674437052  , 0.373443219224  , 0.054486707232  , -0.272145772428  , 0.388718338145  , -0.053068053392  , -0.251313634347  , 0.273114683621  , 0.031423731502  , -0.082629086737  , 0.24342544135  , 0.016557326727  , -0.08505753717  , 0.364577591003  , 0.050648190592  , -0.261557971475  , 0.382483854808  , 0.099617065925  , -0.236638808375  , 0.305210551538  , 0.040977510644  , -0.152643902169  , 0.246185458065  , -0.015794857708  , -0.100768323831  , 0.196934442301  , -0.012358694852  , -0.058853783985  , 0.084731615091  , -0.094591885057  , 0.019266509812  , 0.184940958079  , -0.082370708723  , -0.023470894663  , 0.232409259815  , -0.17727849082  , 0.013873811323 );
                        votes[1] += dot(x,   0.279880279865  , 0.203632996559  , -0.118406299609  , 0.167177406399  , 0.176146387404  , -0.127621808866  , 0.212275311262  , 0.09374763424  , -0.199919418223  , 0.295617575295  , 0.232269299414  , -0.153842128304  , 0.3409142958  , 0.264241335522  , -0.216119032869  , 0.373017000504  , 0.274648829278  , -0.180020379541  , 0.545444976314  , 0.336757856936  , -0.343592062687  , 0.435328141542  , 0.262186210564  , -0.317350751621  , 0.596445299724  , 0.442718933259  , -0.45297561132  , 0.436533154256  , 0.287522824119  , -0.31636405986  , 0.511892847559  , 0.347252374437  , -0.358196459976  , 0.653995625994  , 0.34557722565  , -0.390063966849  , 0.521497377565  , 0.363980232498  , -0.369196294019  , 0.529474907  , 0.2755489781  , -0.405433159569  , 0.488773389807  , 0.28725810016  , -0.250644101503  , 0.397702023473  , 0.300249893645  , -0.201111674954  , 0.325186767504  , 0.172277899481  , -0.177320285002  , 0.214760841165  , 0.062444594508  , -0.0205047117  , 0.253674310289  , 0.174960257234  , -0.152758822972  , 0.184049436182  , 0.076292799963  , -0.033342477394 );
                        votes[2] += dot(x,   0.546539629649  , 1.303353329497  , -0.677555389398  , 0.29480177341  , 0.85706395945  , -0.585256932724  , 0.613599721738  , 0.941735983182  , -0.529623849927  , 0.80426980432  , 1.079281402053  , -0.65804171024  , 0.795769729091  , 1.097609990342  , -0.583296298278  , 1.049611605128  , 1.259599212462  , -0.659502881942  , 1.11641500338  , 1.626468306658  , -0.71010734783  , 1.194946540619  , 1.930476011427  , -0.74799527487  , 1.304418110379  , 2.175755043907  , -0.844066035027  , 1.301894398507  , 1.976862793439  , -0.889341057124  , 1.108747230314  , 1.94707851091  , -0.814535735852  , 1.042436106125  , 2.253943136767  , -0.886082655578  , 1.053476062713  , 1.919999199914  , -0.788192915976  , 1.039734095524  , 1.704691753843  , -1.027736243408  , 0.930974889464  , 1.377186350598  , -0.769654487796  , 0.912577848829  , 1.156766355854  , -0.621667523131  , 0.82325660425  , 1.097677189832  , -0.561036311873  , 0.665996694671  , 1.170542532858  , -0.56004017881  , 0.639258934317  , 0.928544203231  , -0.365853721514  , 0.907865922112  , 1.667162296676  , -0.414502370053 );
                        votes[3] += dot(x,   -0.351799185608  , -0.595299541134  , 0.267400765085  , -0.258491152816  , -0.481750529706  , 0.221984426468  , -0.39037734586  , -0.531309676907  , 0.271221989203  , -0.519856148306  , -0.583667807292  , 0.378904369652  , -0.535504396445  , -0.580374031191  , 0.369265603644  , -0.682855577321  , -0.696326445004  , 0.308305912031  , -0.772723956662  , -0.858503419696  , 0.402971702588  , -0.767169221496  , -0.878496815718  , 0.505045888699  , -0.856296299177  , -1.075913297074  , 0.585536804877  , -0.868470453071  , -0.914953890582  , 0.585635760098  , -0.787297215714  , -0.943528250871  , 0.477919526219  , -0.720962379333  , -1.025077226162  , 0.516064424004  , -0.776777792954  , -0.950498916859  , 0.59102978263  , -0.779715679574  , -0.847476707371  , 0.664968365945  , -0.6718701359  , -0.6817846035  , 0.421450650578  , -0.620353499182  , -0.549686194617  , 0.355069044687  , -0.582806559551  , -0.494282444536  , 0.347080367256  , -0.319878100039  , -0.446093940713  , 0.196696140861  , -0.388384154934  , -0.389892557527  , 0.196382189395  , -0.490606802162  , -0.605713283533  , 0.089084820322 );
                        votes[4] += dot(x,   -0.672104080979  , -0.954330403175  , 0.488202824424  , -0.333465654281  , -0.615162320751  , 0.342755826004  , -0.596698759296  , -0.666940218673  , 0.506163684899  , -0.865916682897  , -0.83528866595  , 0.550831118285  , -0.810813184747  , -0.876455706411  , 0.512333776286  , -1.006302132555  , -0.939114044361  , 0.512734816107  , -1.160312135373  , -1.305178106069  , 0.670966203402  , -1.193299001512  , -1.335885635233  , 0.757044508313  , -1.41801033015  , -1.597047387324  , 0.983650613898  , -1.258675437837  , -1.296363673585  , 0.871382991233  , -1.10645754578  , -1.382226365978  , 0.777441756346  , -1.218894794135  , -1.591000462983  , 0.845139735593  , -1.162773238327  , -1.384128706144  , 0.82791739884  , -1.171977177758  , -1.232381090497  , 1.004839845408  , -1.053088694909  , -1.023637357902  , 0.75149184089  , -0.936111831184  , -0.891535197174  , 0.568478477229  , -0.762571254503  , -0.763313949925  , 0.450130013604  , -0.645611050887  , -0.692301301595  , 0.364582239837  , -0.689490047751  , -0.631241194214  , 0.345701249754  , -0.833717815948  , -0.960463322286  , 0.344886215802 );
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
                        va_start(w, 60);
                        float dot = 0.0;

                        for (uint16_t i = 0; i < 60; i++) {
                            const float wi = va_arg(w, double);
                            dot += x[i] * wi;
                        }

                        return dot;
                    }
                };
            }
        }
    }