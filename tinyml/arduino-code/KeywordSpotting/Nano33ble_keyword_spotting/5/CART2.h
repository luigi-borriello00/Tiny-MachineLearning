#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class DecisionTree {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        if (x[16] <= 1.7755258083343506) {
                            if (x[1] <= 0.5886401534080505) {
                                if (x[3] <= -0.43665173649787903) {
                                    if (x[5] <= -0.6276462078094482) {
                                        if (x[12] <= -0.3077995926141739) {
                                            if (x[24] <= -0.31056851148605347) {
                                                if (x[11] <= -0.5002313852310181) {
                                                    return 0;
                                                }

                                                else {
                                                    if (x[2] <= -1.1310617327690125) {
                                                        return 2;
                                                    }

                                                    else {
                                                        return 3;
                                                    }
                                                }
                                            }

                                            else {
                                                return 3;
                                            }
                                        }

                                        else {
                                            if (x[2] <= -1.1278657913208008) {
                                                return 3;
                                            }

                                            else {
                                                if (x[2] <= -0.7167374193668365) {
                                                    if (x[30] <= 0.5357758402824402) {
                                                        if (x[21] <= -0.5607685446739197) {
                                                            return 1;
                                                        }

                                                        else {
                                                            return 2;
                                                        }
                                                    }

                                                    else {
                                                        if (x[12] <= -0.2167881652712822) {
                                                            if (x[20] <= -0.07488054037094116) {
                                                                return 3;
                                                            }

                                                            else {
                                                                if (x[28] <= 0.6002699732780457) {
                                                                    return 1;
                                                                }

                                                                else {
                                                                    return 4;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            return 0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= -0.5294818878173828) {
                                                        if (x[20] <= 1.33516126871109) {
                                                            return 4;
                                                        }

                                                        else {
                                                            return 1;
                                                        }
                                                    }

                                                    else {
                                                        return 0;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 0.13745436817407608) {
                                            if (x[12] <= 0.8699490427970886) {
                                                if (x[21] <= 0.5424849390983582) {
                                                    if (x[0] <= 0.6945933103561401) {
                                                        if (x[1] <= 0.04957985505461693) {
                                                            if (x[16] <= -0.43824994564056396) {
                                                                return 1;
                                                            }

                                                            else {
                                                                if (x[27] <= 1.9606620073318481) {
                                                                    return 4;
                                                                }

                                                                else {
                                                                    return 3;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            return 0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= -0.44632056169211864) {
                                                            return 1;
                                                        }

                                                        else {
                                                            return 2;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[20] <= 1.226758599281311) {
                                                        return 3;
                                                    }

                                                    else {
                                                        return 4;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= -0.776719480752945) {
                                                    return 2;
                                                }

                                                else {
                                                    if (x[31] <= -0.2903493046760559) {
                                                        return 1;
                                                    }

                                                    else {
                                                        if (x[13] <= 1.306572139263153) {
                                                            return 3;
                                                        }

                                                        else {
                                                            return 0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[9] <= -0.0970865897834301) {
                                                return 2;
                                            }

                                            else {
                                                return 3;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[15] <= 0.31864167749881744) {
                                        if (x[2] <= 0.30510929226875305) {
                                            if (x[7] <= 0.17028866708278656) {
                                                if (x[10] <= -0.10863625258207321) {
                                                    if (x[22] <= -0.08543682843446732) {
                                                        if (x[3] <= 0.11252066865563393) {
                                                            if (x[22] <= -0.5267793536186218) {
                                                                return 0;
                                                            }

                                                            else {
                                                                return 2;
                                                            }
                                                        }

                                                        else {
                                                            if (x[4] <= 0.2307385429739952) {
                                                                return 1;
                                                            }

                                                            else {
                                                                return 3;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= -0.34146665036678314) {
                                                            if (x[27] <= 0.012153193354606628) {
                                                                return 2;
                                                            }

                                                            else {
                                                                return 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[7] <= -0.16208045929670334) {
                                                                return 0;
                                                            }

                                                            else {
                                                                if (x[26] <= -0.07035265862941742) {
                                                                    return 0;
                                                                }

                                                                else {
                                                                    if (x[7] <= -0.137396190315485) {
                                                                        return 3;
                                                                    }

                                                                    else {
                                                                        if (x[12] <= -0.18904368579387665) {
                                                                            return 2;
                                                                        }

                                                                        else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[17] <= -0.3264254033565521) {
                                                        if (x[5] <= 0.13251153379678726) {
                                                            return 1;
                                                        }

                                                        else {
                                                            return 0;
                                                        }
                                                    }

                                                    else {
                                                        return 4;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= -0.84477299451828) {
                                                    return 1;
                                                }

                                                else {
                                                    if (x[5] <= 0.6877337992191315) {
                                                        if (x[1] <= 0.3443824350833893) {
                                                            if (x[6] <= 1.0569949746131897) {
                                                                if (x[20] <= 0.40179572999477386) {
                                                                    return 0;
                                                                }

                                                                else {
                                                                    if (x[30] <= 0.4182213097810745) {
                                                                        return 2;
                                                                    }

                                                                    else {
                                                                        return 0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[30] <= 0.8774755746126175) {
                                                                    return 3;
                                                                }

                                                                else {
                                                                    return 0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            return 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[14] <= -0.03258272958919406) {
                                                            if (x[6] <= 1.0646247267723083) {
                                                                return 1;
                                                            }

                                                            else {
                                                                return 3;
                                                            }
                                                        }

                                                        else {
                                                            return 2;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[9] <= 0.5247839987277985) {
                                                if (x[0] <= 0.4545246660709381) {
                                                    if (x[9] <= 0.319191575050354) {
                                                        if (x[18] <= -0.34872792661190033) {
                                                            return 0;
                                                        }

                                                        else {
                                                            return 3;
                                                        }
                                                    }

                                                    else {
                                                        return 2;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 0.7124989330768585) {
                                                        if (x[19] <= -0.34336279332637787) {
                                                            if (x[2] <= 0.6031593829393387) {
                                                                return 4;
                                                            }

                                                            else {
                                                                return 3;
                                                            }
                                                        }

                                                        else {
                                                            return 2;
                                                        }
                                                    }

                                                    else {
                                                        if (x[12] <= -0.09929426573216915) {
                                                            return 1;
                                                        }

                                                        else {
                                                            if (x[27] <= 0.19751223921775818) {
                                                                return 3;
                                                            }

                                                            else {
                                                                return 2;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[27] <= 0.6092816591262817) {
                                                    if (x[9] <= 2.244791269302368) {
                                                        return 0;
                                                    }

                                                    else {
                                                        return 3;
                                                    }
                                                }

                                                else {
                                                    if (x[16] <= 0.29074741899967194) {
                                                        return 2;
                                                    }

                                                    else {
                                                        return 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[11] <= 1.1260208487510681) {
                                            if (x[24] <= 3.784470558166504) {
                                                if (x[16] <= 0.23130810260772705) {
                                                    if (x[23] <= -0.12549207918345928) {
                                                        return 3;
                                                    }

                                                    else {
                                                        if (x[2] <= 0.16277123987674713) {
                                                            return 0;
                                                        }

                                                        else {
                                                            return 2;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[9] <= 0.9175083637237549) {
                                                        return 4;
                                                    }

                                                    else {
                                                        if (x[0] <= -0.2179764211177826) {
                                                            return 0;
                                                        }

                                                        else {
                                                            return 4;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[16] <= 0.7720001041889191) {
                                                    return 2;
                                                }

                                                else {
                                                    return 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 0.4923424571752548) {
                                                if (x[16] <= 1.3849461078643799) {
                                                    if (x[2] <= -0.5802278220653534) {
                                                        return 4;
                                                    }

                                                    else {
                                                        return 0;
                                                    }
                                                }

                                                else {
                                                    if (x[13] <= 2.3010618090629578) {
                                                        return 3;
                                                    }

                                                    else {
                                                        return 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= -0.4481348395347595) {
                                                    return 1;
                                                }

                                                else {
                                                    return 4;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[9] <= -0.17507850378751755) {
                                    if (x[0] <= 0.7439888715744019) {
                                        if (x[7] <= 0.8510743081569672) {
                                            if (x[19] <= -0.4969222992658615) {
                                                return 1;
                                            }

                                            else {
                                                return 3;
                                            }
                                        }

                                        else {
                                            return 2;
                                        }
                                    }

                                    else {
                                        if (x[8] <= -0.38599225878715515) {
                                            return 3;
                                        }

                                        else {
                                            if (x[3] <= 0.6639423966407776) {
                                                if (x[5] <= -0.5472251772880554) {
                                                    return 3;
                                                }

                                                else {
                                                    if (x[10] <= -0.2162064090371132) {
                                                        return 2;
                                                    }

                                                    else {
                                                        return 4;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[27] <= -0.23166455328464508) {
                                                    return 0;
                                                }

                                                else {
                                                    return 3;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[13] <= -0.03416095580905676) {
                                        if (x[24] <= 0.43437783420085907) {
                                            return 2;
                                        }

                                        else {
                                            if (x[8] <= 0.07090529799461365) {
                                                return 3;
                                            }

                                            else {
                                                if (x[7] <= 0.06592288054525852) {
                                                    return 0;
                                                }

                                                else {
                                                    return 2;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[29] <= -0.008773644920438528) {
                                            if (x[6] <= 0.8944754898548126) {
                                                if (x[11] <= 0.025310338474810123) {
                                                    if (x[17] <= 0.1982586458325386) {
                                                        return 1;
                                                    }

                                                    else {
                                                        return 2;
                                                    }
                                                }

                                                else {
                                                    return 4;
                                                }
                                            }

                                            else {
                                                if (x[23] <= -0.08451772481203079) {
                                                    if (x[28] <= -0.1871122010052204) {
                                                        return 0;
                                                    }

                                                    else {
                                                        return 1;
                                                    }
                                                }

                                                else {
                                                    return 2;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[9] <= 0.36480268836021423) {
                                                if (x[0] <= 1.5282026529312134) {
                                                    return 3;
                                                }

                                                else {
                                                    if (x[18] <= 0.784684956073761) {
                                                        return 2;
                                                    }

                                                    else {
                                                        return 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[24] <= 2.440239667892456) {
                                                    if (x[9] <= 1.121127426624298) {
                                                        if (x[22] <= 1.3426854014396667) {
                                                            return 4;
                                                        }

                                                        else {
                                                            return 2;
                                                        }
                                                    }

                                                    else {
                                                        return 2;
                                                    }
                                                }

                                                else {
                                                    if (x[7] <= 1.8003153502941132) {
                                                        return 0;
                                                    }

                                                    else {
                                                        return 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[7] <= 0.5400606989860535) {
                                if (x[28] <= 10.670534610748291) {
                                    if (x[1] <= -0.9627486169338226) {
                                        if (x[26] <= 0.09129683254286647) {
                                            return 0;
                                        }

                                        else {
                                            if (x[11] <= -0.2796115390956402) {
                                                return 1;
                                            }

                                            else {
                                                return 3;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= -0.5826752483844757) {
                                            if (x[21] <= 4.5408689975738525) {
                                                return 1;
                                            }

                                            else {
                                                return 2;
                                            }
                                        }

                                        else {
                                            return 1;
                                        }
                                    }
                                }

                                else {
                                    return 3;
                                }
                            }

                            else {
                                if (x[1] <= 0.7062115967273712) {
                                    if (x[12] <= 0.9945700168609619) {
                                        return 4;
                                    }

                                    else {
                                        if (x[23] <= -0.051176371052861214) {
                                            return 0;
                                        }

                                        else {
                                            if (x[4] <= -0.38205407559871674) {
                                                return 4;
                                            }

                                            else {
                                                return 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    return 2;
                                }
                            }
                        }
                    }

                protected:
                };
            }
        }
    }