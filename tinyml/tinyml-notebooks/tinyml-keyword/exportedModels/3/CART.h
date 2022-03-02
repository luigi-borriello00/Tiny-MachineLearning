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
                        if (x[16] <= 0.8415582478046417) {
                            if (x[15] <= 0.033451277762651443) {
                                if (x[3] <= -0.4112248718738556) {
                                    if (x[6] <= -0.6538106799125671) {
                                        if (x[14] <= -0.31956589221954346) {
                                            if (x[1] <= -1.1977816224098206) {
                                                return 0;
                                            }

                                            else {
                                                return 1;
                                            }
                                        }

                                        else {
                                            return 0;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 0.3894925210624933) {
                                            if (x[0] <= 1.6498708724975586) {
                                                if (x[16] <= -0.35177093744277954) {
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

                                        else {
                                            return 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 0.31935766339302063) {
                                        if (x[1] <= -0.25635407865047455) {
                                            if (x[17] <= 0.01636866945773363) {
                                                if (x[14] <= -0.3342858552932739) {
                                                    if (x[29] <= -0.3696508854627609) {
                                                        return 1;
                                                    }

                                                    else {
                                                        return 0;
                                                    }
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
                                            return 0;
                                        }
                                    }

                                    else {
                                        if (x[6] <= -0.2076457515358925) {
                                            if (x[10] <= -0.4085303097963333) {
                                                return 0;
                                            }

                                            else {
                                                return 2;
                                            }
                                        }

                                        else {
                                            if (x[17] <= -0.27584943175315857) {
                                                return 0;
                                            }

                                            else {
                                                if (x[2] <= 1.6698159575462341) {
                                                    if (x[26] <= -0.3977305591106415) {
                                                        return 2;
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
                            }

                            else {
                                if (x[30] <= 2.9374524354934692) {
                                    if (x[10] <= 1.6025522947311401) {
                                        if (x[2] <= 2.742100477218628) {
                                            if (x[5] <= -0.6868083477020264) {
                                                return 0;
                                            }

                                            else {
                                                if (x[16] <= -0.03152020985726267) {
                                                    return 0;
                                                }

                                                else {
                                                    if (x[8] <= 0.7744310796260834) {
                                                        return 2;
                                                    }

                                                    else {
                                                        if (x[20] <= 0.40996336936950684) {
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
                                            return 1;
                                        }
                                    }

                                    else {
                                        if (x[27] <= -0.19720172137022018) {
                                            return 2;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }
                                }

                                else {
                                    if (x[14] <= 0.5002695024013519) {
                                        return 1;
                                    }

                                    else {
                                        return 0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[6] <= -0.08795170672237873) {
                                return 1;
                            }

                            else {
                                if (x[24] <= 2.0766162872314453) {
                                    if (x[24] <= 0.7213944867253304) {
                                        return 0;
                                    }

                                    else {
                                        return 2;
                                    }
                                }

                                else {
                                    if (x[29] <= 3.0426434874534607) {
                                        return 1;
                                    }

                                    else {
                                        return 2;
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