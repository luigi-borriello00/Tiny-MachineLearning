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
                        float votes[4] = { -0.751491522703 ,-2.221071648419 ,-1.227761228922 ,-1.04964677501  };
                        votes[0] += dot(x,   -1.045031765344  , 0.411994467098  , 0.26649354424  , 0.016403519911  , -0.6497560279  , -0.100341129231  , -0.354605105782  , 0.51842403451  , 0.554295151495  , 0.104286501682  , 0.766169686172  , -0.714101386891  , 0.096747709783  , 0.035799038454  , -0.46576349773  , 0.325874244871  , -0.437282995749  , -0.800110756762  , -0.942592876671  , 0.695326217888  , -0.366118180049  , 0.447480955391  , -0.033574871501  , -0.106694263426  , 0.327349417073  , -0.162881573356  , -0.630025651725  , -0.339456992112  , 0.840997408891  , 0.244837015093  , -0.31171697092  , 0.241047134413 );
                        votes[1] += dot(x,   0.46865491457  , -0.648156628672  , -0.171729487743  , 0.757421923487  , 0.419989806768  , -0.35737355686  , 0.948848412274  , -0.644591471458  , -1.82224726867  , -0.476713716146  , 0.453431796936  , 0.450315818407  , 0.284010424541  , -0.303345681261  , 0.069808166771  , 0.212344764681  , 0.300711147498  , 0.839687502176  , 0.193606941373  , -0.195980955398  , -0.169553237498  , 0.460673115541  , 0.006991935253  , -0.565157433925  , 0.569112569264  , -0.543842376038  , 0.097727771621  , 0.497433270994  , -0.312842675315  , 0.223772412956  , -0.618058574146  , 0.38726593309 );
                        votes[2] += dot(x,   0.445009226482  , 0.262830347454  , 0.126588240248  , -0.240567836318  , -0.110272282136  , 0.479550827823  , -0.139664275304  , 0.110091005511  , 0.007191241932  , -0.155972431682  , -0.897031810071  , 0.491232092436  , 0.636319753244  , -0.001595903965  , -0.47771696892  , -0.209900110094  , -0.167167193257  , -0.015130430794  , -0.182643908192  , -1.297418758009  , 0.988650107431  , -0.234028554705  , -0.091009422675  , 0.622824495821  , -0.744684549632  , 0.069018971735  , 0.92743195785  , -0.876576584719  , 0.162797323653  , -0.05382182741  , 0.410939776964  , -0.262440531582 );
                        votes[3] += dot(x,   0.379295436738  , -0.634086855004  , -0.098866477601  , -0.281401083575  , 0.52013199574  , -0.213948603707  , -0.297488221509  , -0.242358479995  , 0.680256151432  , 0.401423095613  , -0.236932271677  , -0.182903991327  , -1.001189444876  , 0.440578202863  , 0.446674341064  , 0.078408722346  , -0.038567383047  , -0.22022103996  , 0.07691019907  , 0.339517150542  , -0.244246607956  , -0.288576524818  , 0.227130141028  , -0.339977942283  , -0.099010015497  , 0.733547974309  , -0.710840667946  , 0.506487362215  , -0.397825991615  , -0.173867762274  , 0.44139901819  , -0.327458399748 );
                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 4; i++) {
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
                        va_start(w, 32);
                        float dot = 0.0;

                        for (uint16_t i = 0; i < 32; i++) {
                            const float wi = va_arg(w, double);
                            dot += x[i] * wi;
                        }

                        return dot;
                    }
                };
            }
        }
    }