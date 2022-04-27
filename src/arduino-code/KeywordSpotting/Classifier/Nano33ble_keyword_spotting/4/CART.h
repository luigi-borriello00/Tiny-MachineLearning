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
                        if (x[16] <= 1.389782726764679) {
                            if (x[1] <= 0.8453578650951385) {
                                if (x[3] <= -0.44701874256134033) {
                                    if (x[6] <= -0.483805313706398) {
                                        if (x[20] <= -0.46018755435943604) {
                                            if (x[1] <= -0.7681538462638855) {
                                                return 3;
                                            }

                                            else {
                                                return 1;
                                            }
                                        }

                                        else {
                                            if (x[30] <= 0.5892802178859711) {
                                                if (x[22] <= -0.48889200389385223) {
                                                    if (x[2] <= -0.3193165361881256) {
                                                        return 3;
                                                    }

                                                    else {
                                                        return 0;
                                                    }
                                                }

                                                else {
                                                    if (x[11] <= -0.5915630161762238) {
                                                        return 0;
                                                    }

                                                    else {
                                                        if (x[4] <= -0.9844937026500702) {
                                                            if (x[15] <= -0.12042476795613766) {
                                                                return 0;
                                                            }

                                                            else {
                                                                return 2;
                                                            }
                                                        }

                                                        else {
                                                            return 2;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[29] <= 0.8223496675491333) {
                                                    if (x[30] <= 0.6506390869617462) {
                                                        return 1;
                                                    }

                                                    else {
                                                        return 0;
                                                    }
                                                }

                                                else {
                                                    if (x[28] <= 1.6596554517745972) {
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
                                        if (x[8] <= 0.7248011827468872) {
                                            if (x[4] <= -0.6705614030361176) {
                                                if (x[26] <= 0.5217697471380234) {
                                                    return 2;
                                                }

                                                else {
                                                    return 1;
                                                }
                                            }

                                            else {
                                                return 3;
                                            }
                                        }

                                        else {
                                            if (x[0] <= -0.39949317276477814) {
                                                return 1;
                                            }

                                            else {
                                                return 2;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[15] <= 0.21827667206525803) {
                                        if (x[0] <= 0.12178660184144974) {
                                            if (x[3] <= 0.7706169486045837) {
                                                if (x[7] <= -0.020170269533991814) {
                                                    if (x[13] <= -0.2767407223582268) {
                                                        return 0;
                                                    }

                                                    else {
                                                        return 3;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= -0.893748551607132) {
                                                        return 1;
                                                    }

                                                    else {
                                                        if (x[6] <= 1.0871604084968567) {
                                                            if (x[20] <= 0.33349451422691345) {
                                                                return 0;
                                                            }

                                                            else {
                                                                if (x[31] <= 0.10890823602676392) {
                                                                    return 2;
                                                                }

                                                                else {
                                                                    return 0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[13] <= 0.12322169542312622) {
                                                                return 0;
                                                            }

                                                            else {
                                                                return 2;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[26] <= 1.001954272389412) {
                                                    return 2;
                                                }

                                                else {
                                                    return 0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[17] <= -0.33801667392253876) {
                                                return 0;
                                            }

                                            else {
                                                if (x[6] <= -0.15325331687927246) {
                                                    if (x[9] <= -0.19361107051372528) {
                                                        if (x[26] <= -0.2855065166950226) {
                                                            if (x[19] <= -0.2876832038164139) {
                                                                return 2;
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
                                                        return 3;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 0.45814885199069977) {
                                                        if (x[10] <= -0.4766751080751419) {
                                                            return 2;
                                                        }

                                                        else {
                                                            return 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[4] <= 0.8796495795249939) {
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

                                    else {
                                        if (x[24] <= 3.540548086166382) {
                                            if (x[9] <= 1.7670505046844482) {
                                                if (x[16] <= 0.13813349604606628) {
                                                    return 0;
                                                }

                                                else {
                                                    return 3;
                                                }
                                            }

                                            else {
                                                return 0;
                                            }
                                        }

                                        else {
                                            if (x[6] <= 0.20791877806186676) {
                                                return 1;
                                            }

                                            else {
                                                if (x[7] <= 0.25882688164711) {
                                                    return 2;
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
                                if (x[13] <= -0.035779548808932304) {
                                    if (x[29] <= -0.3718869090080261) {
                                        if (x[29] <= -0.541725218296051) {
                                            return 2;
                                        }

                                        else {
                                            if (x[4] <= -0.22309250384569168) {
                                                return 0;
                                            }

                                            else {
                                                if (x[11] <= -0.19305764138698578) {
                                                    return 3;
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

                                else {
                                    if (x[8] <= -0.05340701760724187) {
                                        return 1;
                                    }

                                    else {
                                        if (x[8] <= 0.41630919277668) {
                                            return 3;
                                        }

                                        else {
                                            if (x[26] <= 3.0431532859802246) {
                                                if (x[1] <= 2.1689170002937317) {
                                                    return 2;
                                                }

                                                else {
                                                    return 3;
                                                }
                                            }

                                            else {
                                                if (x[30] <= 4.018485188484192) {
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

                        else {
                            if (x[7] <= 0.40989355742931366) {
                                if (x[1] <= -1.0911198258399963) {
                                    return 0;
                                }

                                else {
                                    if (x[5] <= -0.8587259650230408) {
                                        if (x[23] <= 1.7178270518779755) {
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
                                if (x[2] <= -0.37266431748867035) {
                                    return 3;
                                }

                                else {
                                    if (x[13] <= 2.453002691268921) {
                                        if (x[23] <= 1.8456930331885815) {
                                            return 0;
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
                        }
                    }

                protected:
                };
            }
        }
    }