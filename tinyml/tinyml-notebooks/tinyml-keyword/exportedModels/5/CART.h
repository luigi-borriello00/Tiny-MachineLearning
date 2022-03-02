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
                            if (x[1] <= 0.33321012556552887) {
                                if (x[1] <= -0.35083892941474915) {
                                    if (x[3] <= -0.8787790834903717) {
                                        if (x[14] <= -0.30099211633205414) {
                                            return 3;
                                        }

                                        else {
                                            if (x[30] <= 0.6453635096549988) {
                                                if (x[0] <= -0.21936701983213425) {
                                                    return 2;
                                                }

                                                else {
                                                    if (x[2] <= -0.9218438565731049) {
                                                        if (x[1] <= -0.9539870321750641) {
                                                            return 0;
                                                        }

                                                        else {
                                                            if (x[5] <= -0.6125805377960205) {
                                                                return 1;
                                                            }

                                                            else {
                                                                if (x[28] <= -0.25259319692850113) {
                                                                    return 3;
                                                                }

                                                                else {
                                                                    return 4;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        return 2;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= -0.32856932282447815) {
                                                    return 3;
                                                }

                                                else {
                                                    if (x[5] <= -0.7000889182090759) {
                                                        return 4;
                                                    }

                                                    else {
                                                        if (x[20] <= 0.40467213094234467) {
                                                            return 0;
                                                        }

                                                        else {
                                                            return 2;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= -0.24784136563539505) {
                                            if (x[3] <= 0.6670128703117371) {
                                                if (x[26] <= 2.985543370246887) {
                                                    if (x[10] <= 1.8853633999824524) {
                                                        return 4;
                                                    }

                                                    else {
                                                        return 1;
                                                    }
                                                }

                                                else {
                                                    if (x[8] <= 0.10251127183437347) {
                                                        return 2;
                                                    }

                                                    else {
                                                        return 1;
                                                    }
                                                }
                                            }

                                            else {
                                                return 2;
                                            }
                                        }

                                        else {
                                            if (x[7] <= 0.49973535537719727) {
                                                if (x[23] <= 0.879442572593689) {
                                                    if (x[0] <= 0.12392434384673834) {
                                                        if (x[2] <= -0.3092408776283264) {
                                                            return 4;
                                                        }

                                                        else {
                                                            if (x[25] <= -0.05352352582849562) {
                                                                return 1;
                                                            }

                                                            else {
                                                                return 3;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        return 2;
                                                    }
                                                }

                                                else {
                                                    return 3;
                                                }
                                            }

                                            else {
                                                if (x[1] <= -0.7210910022258759) {
                                                    if (x[19] <= 0.16063115745782852) {
                                                        return 1;
                                                    }

                                                    else {
                                                        return 2;
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
                                    if (x[15] <= 0.28713229298591614) {
                                        if (x[2] <= 0.30935823917388916) {
                                            if (x[3] <= -0.46712616086006165) {
                                                if (x[9] <= -0.2619582712650299) {
                                                    if (x[3] <= -0.9098734259605408) {
                                                        if (x[29] <= 0.30800625681877136) {
                                                            return 3;
                                                        }

                                                        else {
                                                            return 0;
                                                        }
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
                                                if (x[28] <= -0.5502534210681915) {
                                                    if (x[4] <= 0.33692632615566254) {
                                                        if (x[19] <= -0.20393430744297802) {
                                                            return 0;
                                                        }

                                                        else {
                                                            return 4;
                                                        }
                                                    }

                                                    else {
                                                        return 3;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 0.25072503834962845) {
                                                        if (x[25] <= -0.48209044337272644) {
                                                            return 4;
                                                        }

                                                        else {
                                                            if (x[4] <= -0.29434236884117126) {
                                                                if (x[14] <= -0.23811505734920502) {
                                                                    return 1;
                                                                }

                                                                else {
                                                                    return 0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 0.13400784134864807) {
                                                                    return 0;
                                                                }

                                                                else {
                                                                    if (x[29] <= 0.09406618028879166) {
                                                                        return 2;
                                                                    }

                                                                    else {
                                                                        return 0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[7] <= -0.24352139979600906) {
                                                            return 0;
                                                        }

                                                        else {
                                                            if (x[7] <= 0.48146627843379974) {
                                                                if (x[18] <= 0.3621968924999237) {
                                                                    return 1;
                                                                }

                                                                else {
                                                                    return 2;
                                                                }
                                                            }

                                                            else {
                                                                return 0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[9] <= -0.307630255818367) {
                                                return 3;
                                            }

                                            else {
                                                if (x[0] <= -0.12598096951842308) {
                                                    if (x[4] <= 0.8412503004074097) {
                                                        return 0;
                                                    }

                                                    else {
                                                        if (x[11] <= 0.20182255655527115) {
                                                            return 3;
                                                        }

                                                        else {
                                                            return 2;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[19] <= -0.3371151313185692) {
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
                                        if (x[3] <= 0.13641918078064919) {
                                            if (x[8] <= 0.5150245279073715) {
                                                if (x[28] <= 0.5453748852014542) {
                                                    if (x[30] <= -0.5253115594387054) {
                                                        return 0;
                                                    }

                                                    else {
                                                        return 4;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 0.259021058678627) {
                                                        return 1;
                                                    }

                                                    else {
                                                        if (x[6] <= -0.08901955187320709) {
                                                            return 0;
                                                        }

                                                        else {
                                                            return 2;
                                                        }
                                                    }
                                                }
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
                            }

                            else {
                                if (x[9] <= -0.2255140170454979) {
                                    if (x[2] <= 0.8579855561256409) {
                                        if (x[0] <= 0.5795175731182098) {
                                            return 3;
                                        }

                                        else {
                                            if (x[5] <= -0.5442802011966705) {
                                                if (x[24] <= -0.3759536147117615) {
                                                    return 0;
                                                }

                                                else {
                                                    return 3;
                                                }
                                            }

                                            else {
                                                if (x[7] <= -0.16381379961967468) {
                                                    if (x[17] <= -0.41197414696216583) {
                                                        if (x[17] <= -0.4208015203475952) {
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
                                                    if (x[27] <= -0.18837450444698334) {
                                                        return 4;
                                                    }

                                                    else {
                                                        if (x[9] <= -0.3299209028482437) {
                                                            return 3;
                                                        }

                                                        else {
                                                            return 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        return 3;
                                    }
                                }

                                else {
                                    if (x[13] <= 0.08807851001620293) {
                                        if (x[5] <= 1.1717763543128967) {
                                            if (x[18] <= -0.30683495104312897) {
                                                if (x[8] <= -0.24797099828720093) {
                                                    return 3;
                                                }

                                                else {
                                                    if (x[29] <= 0.6518891453742981) {
                                                        return 1;
                                                    }

                                                    else {
                                                        return 4;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[9] <= 0.7777377665042877) {
                                                    if (x[31] <= 1.2236205339431763) {
                                                        return 2;
                                                    }

                                                    else {
                                                        return 0;
                                                    }
                                                }

                                                else {
                                                    return 0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[7] <= 1.249351441860199) {
                                                if (x[23] <= -0.30021993815898895) {
                                                    return 1;
                                                }

                                                else {
                                                    return 3;
                                                }
                                            }

                                            else {
                                                if (x[4] <= 1.121892273426056) {
                                                    return 0;
                                                }

                                                else {
                                                    return 2;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[28] <= 0.545588031411171) {
                                            if (x[24] <= -0.4868971258401871) {
                                                if (x[2] <= 0.1160663515329361) {
                                                    return 2;
                                                }

                                                else {
                                                    return 3;
                                                }
                                            }

                                            else {
                                                if (x[4] <= 2.282617151737213) {
                                                    if (x[11] <= 0.02066886145621538) {
                                                        return 1;
                                                    }

                                                    else {
                                                        return 4;
                                                    }
                                                }

                                                else {
                                                    return 0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[6] <= 0.0008873455226421356) {
                                                return 3;
                                            }

                                            else {
                                                if (x[24] <= 2.1919960379600525) {
                                                    return 2;
                                                }

                                                else {
                                                    if (x[13] <= 0.7451111376285553) {
                                                        return 1;
                                                    }

                                                    else {
                                                        if (x[24] <= 3.147450566291809) {
                                                            return 4;
                                                        }

                                                        else {
                                                            return 0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[6] <= 0.2525012269616127) {
                                if (x[27] <= 12.558178901672363) {
                                    if (x[8] <= -0.5126923024654388) {
                                        return 3;
                                    }

                                    else {
                                        if (x[1] <= -0.9627486169338226) {
                                            if (x[27] <= 6.25503414683044) {
                                                return 0;
                                            }

                                            else {
                                                return 1;
                                            }
                                        }

                                        else {
                                            if (x[6] <= -0.6515105366706848) {
                                                if (x[8] <= -0.3538382798433304) {
                                                    return 2;
                                                }

                                                else {
                                                    return 1;
                                                }
                                            }

                                            else {
                                                return 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    return 3;
                                }
                            }

                            else {
                                if (x[22] <= 6.30644679069519) {
                                    if (x[24] <= 1.0768285989761353) {
                                        if (x[16] <= 3.5466266870498657) {
                                            return 0;
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
                                    return 1;
                                }
                            }
                        }
                    }

                protected:
                };
            }
        }
    }