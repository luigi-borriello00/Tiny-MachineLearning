#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[7] = { 0 };
                        // tree #1
                        if (x[2] <= 1210.5) {
                            if (x[3] <= 11660.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 10010.0) {
                                if (x[1] <= 10621.5) {
                                    if (x[2] <= 2110.5) {
                                        if (x[0] <= 1065.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                votes[6] += 1;
                            }
                        }

                        // tree #2
                        if (x[3] <= 12207.0) {
                            if (x[0] <= 606.0) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 100670.5) {
                                if (x[1] <= 10157.0) {
                                    if (x[3] <= 20655.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 10621.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                votes[6] += 1;
                            }
                        }

                        // tree #3
                        if (x[3] <= 61201.0) {
                            if (x[2] <= 2001.5) {
                                if (x[3] <= 12207.0) {
                                    if (x[3] <= 11660.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 2110.5) {
                                    if (x[0] <= 1021.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 11110.0) {
                                votes[5] += 1;
                            }

                            else {
                                votes[6] += 1;
                            }
                        }

                        // tree #4
                        if (x[0] <= 2006.5) {
                            if (x[0] <= 1212.0) {
                                if (x[3] <= 12206.0) {
                                    if (x[2] <= 1155.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 10051.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 1156.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            votes[6] += 1;
                        }

                        // tree #5
                        if (x[2] <= 2110.5) {
                            if (x[0] <= 1021.5) {
                                if (x[0] <= 1005.5) {
                                    if (x[0] <= 606.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 10621.5) {
                                votes[4] += 1;
                            }

                            else {
                                if (x[0] <= 2006.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 7; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                };
            }
        }
    }