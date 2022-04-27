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
                        if (x[1] <= -0.5555555559694767) {
                            if (x[2] <= -20.0) {
                                if (x[1] <= -1.1666666865348816) {
                                    return 1;
                                }

                                else {
                                    if (x[3] <= -1.000633716583252) {
                                        if (x[0] <= -0.01898734224960208) {
                                            return 1;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }

                                    else {
                                        return 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= -0.9892268776893616) {
                                    if (x[3] <= -1.000633716583252) {
                                        return 0;
                                    }

                                    else {
                                        if (x[3] <= -0.9949302971363068) {
                                            if (x[1] <= -1.0555555820465088) {
                                                return 1;
                                            }

                                            else {
                                                return 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= -1.0555555820465088) {
                                                return 1;
                                            }

                                            else {
                                                return 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= -0.49429657752625644) {
                                        if (x[0] <= -0.006329114083200693) {
                                            if (x[3] <= -0.9879594445228577) {
                                                return 0;
                                            }

                                            else {
                                                if (x[2] <= -0.25) {
                                                    return 1;
                                                }

                                                else {
                                                    return 0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= -0.9879594445228577) {
                                                return 2;
                                            }

                                            else {
                                                return 0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= -0.25) {
                                            return 1;
                                        }

                                        else {
                                            return 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 2.5) {
                                if (x[0] <= 0.49367088079452515) {
                                    if (x[2] <= 0.25) {
                                        if (x[3] <= -0.49429657752625644) {
                                            if (x[2] <= -0.25) {
                                                if (x[3] <= -0.9879594445228577) {
                                                    return 2;
                                                }

                                                else {
                                                    return 2;
                                                }
                                            }

                                            else {
                                                if (x[0] <= -0.006329114083200693) {
                                                    return 0;
                                                }

                                                else {
                                                    return 0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= -0.0555555559694767) {
                                                if (x[3] <= -0.0006337135564535856) {
                                                    return 2;
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

                                    else {
                                        return 0;
                                    }
                                }

                                else {
                                    if (x[3] <= 0.0063371357973665) {
                                        if (x[3] <= 0.0006337135564535856) {
                                            return 2;
                                        }

                                        else {
                                            if (x[2] <= 0.25) {
                                                return 2;
                                            }

                                            else {
                                                return 2;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 0.0555555559694767) {
                                            if (x[3] <= 0.01204055780544877) {
                                                return 2;
                                            }

                                            else {
                                                return 0;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 0.013307984918355942) {
                                                if (x[3] <= 0.01204055780544877) {
                                                    return 2;
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
                            }

                            else {
                                if (x[2] <= 4.75) {
                                    if (x[0] <= 0.9936708807945251) {
                                        return 0;
                                    }

                                    else {
                                        if (x[1] <= 0.5555555559694767) {
                                            if (x[3] <= 0.01901140669360757) {
                                                return 2;
                                            }

                                            else {
                                                return 2;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 0.01901140669360757) {
                                                return 2;
                                            }

                                            else {
                                                return 2;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 7.5) {
                                        if (x[1] <= 1.1666666865348816) {
                                            if (x[0] <= 1.0063291192054749) {
                                                return 0;
                                            }

                                            else {
                                                if (x[2] <= 5.25) {
                                                    return 3;
                                                }

                                                else {
                                                    return 0;
                                                }
                                            }
                                        }

                                        else {
                                            return 3;
                                        }
                                    }

                                    else {
                                        return 0;
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