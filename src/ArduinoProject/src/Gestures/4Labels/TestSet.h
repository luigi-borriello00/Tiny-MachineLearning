#define TEST_SIZE 80
#define FEATURE_SIZE 42
class TestSet
{
public:
    float X_test[TEST_SIZE][FEATURE_SIZE] = {{ 0.08,  0.01,  0.98,  0.09,  0.02,  0.98,  0.1 ,  0.06,  1.04,
         0.11, -0.19,  1.09,  0.12, -0.12,  0.84,  0.2 ,  0.18,  0.72,
         0.16,  0.21,  0.95,  0.1 ,  0.1 ,  1.09,  0.06, -0.01,  1.  ,
         0.08,  0.04,  0.96,  0.07,  0.04,  0.98,  0.07,  0.02,  0.96,
         0.09,  0.06,  0.98,  0.05,  0.01,  1.  },
       { 0.07, -0.1 ,  0.93,  0.09,  0.06,  1.02,  0.11, -0.04,  1.02,
         0.15, -0.13,  1.03,  0.18, -0.03,  0.91,  0.2 , -0.  ,  0.82,
         0.16, -0.03,  0.83,  0.15,  0.1 ,  1.05,  0.11,  0.08,  0.98,
         0.03, -0.16,  0.96,  0.09,  0.04,  0.97,  0.05, -0.03,  1.  ,
         0.07, -0.01,  0.99,  0.11,  0.08,  0.93},
       { 0.05, -0.07,  0.97,  0.02, -0.14,  1.  ,  0.06,  0.01,  1.07,
         0.07, -0.18,  1.02,  0.11, -0.08,  0.86,  0.15,  0.09,  0.94,
         0.11,  0.08,  1.07,  0.07,  0.01,  1.02,  0.09, -0.  ,  1.02,
         0.08, -0.06,  0.98,  0.09,  0.01,  0.98,  0.09,  0.01,  0.99,
         0.03, -0.04,  0.99,  0.09,  0.01,  0.99},
       { 0.02, -0.02,  0.99,  0.02,  0.08,  0.97, -0.02, -0.  ,  1.15,
        -0.01, -0.27,  1.19,  0.1 , -0.02,  0.71,  0.16,  0.2 ,  0.83,
         0.05,  0.21,  1.11, -0.03,  0.04,  1.01, -0.01, -0.02,  0.96,
         0.02,  0.01,  0.96,  0.02,  0.05,  0.99, -0.  , -0.02,  0.98,
         0.02,  0.03,  0.98, -0.  , -0.01,  0.99},
       { 0.08,  0.03,  0.99,  0.07,  0.07,  0.98,  0.07,  0.14,  1.1 ,
         0.15, -0.05,  1.08,  0.11, -0.17,  0.91,  0.18,  0.05,  0.83,
         0.21,  0.18,  0.83,  0.16,  0.13,  0.96,  0.1 ,  0.16,  1.05,
         0.05,  0.11,  1.  , -0.03, -0.03,  0.99,  0.07,  0.05,  0.98,
         0.03,  0.02,  1.  ,  0.04,  0.04,  0.99},
       { 0.08, -0.07,  1.03,  0.08,  0.02,  0.91,  0.09,  0.08,  1.05,
         0.09, -0.15,  1.01,  0.13, -0.01,  0.77,  0.18,  0.14,  0.88,
         0.08,  0.09,  1.  ,  0.06,  0.05,  1.01,  0.08, -0.  ,  0.98,
         0.09,  0.04,  0.96,  0.05, -0.  ,  1.01,  0.05, -0.01,  0.99,
         0.08,  0.03,  1.02,  0.07,  0.  ,  0.98},
       { 0.08, -0.04,  0.96,  0.07,  0.  ,  0.94,  0.09, -0.06,  1.09,
         0.15, -0.06,  0.88,  0.17, -0.03,  0.79,  0.12,  0.06,  1.05,
         0.09, -0.04,  1.16,  0.14, -0.04,  0.91,  0.17, -0.06,  0.83,
         0.15,  0.05,  0.93,  0.09,  0.06,  1.05,  0.05, -0.06,  0.99,
         0.06, -0.08,  0.97,  0.07, -0.05,  0.99},
       { 0.03, -0.05,  0.99, -0.02, -0.11,  1.02,  0.08,  0.17,  0.92,
         0.09, -0.03,  1.21,  0.06, -0.07,  0.82,  0.17,  0.05,  0.76,
         0.15,  0.14,  0.97,  0.05,  0.15,  1.11, -0.05, -0.12,  0.99,
         0.04,  0.08,  0.97,  0.02,  0.06,  0.98,  0.01,  0.04,  1.  ,
         0.04,  0.07,  0.97, -0.01, -0.02,  0.99},
       {-0.03, -0.09,  1.01,  0.01, -0.  ,  0.92,  0.02, -0.05,  1.18,
        -0.07, -0.3 ,  1.1 ,  0.14, -0.01,  0.75,  0.15,  0.07,  0.76,
         0.09,  0.14,  0.91,  0.05,  0.11,  1.  , -0.03,  0.06,  1.06,
        -0.04, -0.01,  0.96, -0.06, -0.07,  0.96, -0.06, -0.02,  0.98,
        -0.06, -0.05,  0.99, -0.03, -0.02,  0.95},
       { 0.03, -0.12,  0.99,  0.06,  0.03,  0.92,  0.05, -0.07,  1.12,
         0.06, -0.21,  1.  ,  0.11, -0.13,  0.81,  0.19,  0.11,  0.82,
         0.11,  0.22,  1.07,  0.03,  0.1 ,  1.03,  0.  , -0.02,  0.97,
         0.01,  0.  ,  0.98,  0.04,  0.08,  0.99,  0.02,  0.06,  1.01,
         0.02,  0.04,  0.99,  0.02,  0.05,  0.99},
       { 0.01, -0.07,  0.99,  0.06, -0.03,  0.96,  0.03,  0.08,  1.05,
         0.02, -0.13,  1.11,  0.06, -0.01,  0.78,  0.07, -0.03,  0.84,
         0.13,  0.22,  1.02, -0.  ,  0.1 ,  1.08, -0.02,  0.  ,  0.98,
        -0.04,  0.04,  0.99,  0.01,  0.09,  0.97, -0.01,  0.04,  0.98,
        -0.  ,  0.05,  0.97, -0.  ,  0.05,  0.97},
       { 0.12, -0.06,  0.96,  0.1 , -0.04,  0.92,  0.12,  0.06,  1.13,
         0.16, -0.05,  1.08,  0.13, -0.03,  0.78,  0.16,  0.05,  0.9 ,
         0.14,  0.19,  1.06,  0.11,  0.  ,  1.07,  0.15,  0.04,  0.8 ,
         0.14,  0.04,  0.89,  0.14,  0.23,  1.05,  0.08,  0.03,  0.99,
         0.08, -0.06,  0.96,  0.08, -0.01,  0.99},
       { 0.08, -0.04,  0.98,  0.09,  0.04,  0.97,  0.13, -0.05,  1.07,
         0.11, -0.04,  0.96,  0.18,  0.02,  0.83,  0.12,  0.04,  0.87,
         0.1 ,  0.11,  1.12,  0.07, -0.02,  1.12,  0.15, -0.03,  0.85,
         0.17,  0.02,  0.86,  0.1 ,  0.05,  0.98,  0.07,  0.09,  1.  ,
         0.05, -0.03,  0.98,  0.04, -0.11,  0.96},
       {-0.01, -0.05,  0.96,  0.03,  0.11,  0.92, -0.03, -0.14,  1.16,
         0.03, -0.09,  0.93,  0.15,  0.01,  0.76,  0.12,  0.03,  0.91,
         0.07,  0.13,  1.03, -0.01, -0.04,  1.03, -0.02, -0.09,  0.99,
        -0.  , -0.02,  0.99,  0.01, -0.  ,  0.98,  0.03,  0.01,  0.97,
         0.03,  0.03,  0.95,  0.  ,  0.  ,  1.02},
       { 0.08,  0.03,  1.03,  0.05, -0.02,  0.98,  0.13,  0.35,  1.02,
         0.1 , -0.07,  1.15,  0.1 , -0.18,  1.01,  0.15,  0.07,  0.7 ,
         0.26,  0.2 ,  0.73,  0.15,  0.2 ,  0.93,  0.08,  0.21,  1.13,
        -0.  , -0.06,  1.  ,  0.04,  0.02,  1.04,  0.07, -0.03,  0.96,
         0.07,  0.01,  1.01,  0.07, -0.05,  0.91},
       { 0.1 , -0.04,  0.98,  0.09, -0.02,  0.94,  0.1 , -0.02,  1.04,
         0.13, -0.06,  1.06,  0.15,  0.02,  0.83,  0.17,  0.07,  0.9 ,
         0.16,  0.12,  0.97,  0.12,  0.08,  1.09,  0.14, -0.  ,  1.01,
         0.15,  0.04,  0.87,  0.14,  0.04,  0.91,  0.13,  0.11,  1.03,
         0.1 ,  0.05,  0.99,  0.08, -0.03,  1.01},
       { 0.1 , -0.02,  0.98,  0.08, -0.04,  0.97,  0.14,  0.18,  1.03,
         0.11, -0.11,  1.26,  0.21,  0.05,  0.67,  0.18,  0.04,  0.87,
         0.13,  0.25,  1.07,  0.06,  0.03,  1.01,  0.08,  0.06,  0.96,
         0.08,  0.09,  0.96,  0.06,  0.05,  0.96,  0.07,  0.05,  0.98,
         0.06,  0.05,  1.03,  0.06,  0.06,  1.01},
       { 0.04, -0.04,  0.99,  0.06,  0.01,  0.97,  0.07,  0.04,  1.03,
         0.07, -0.2 ,  1.09,  0.16,  0.01,  0.78,  0.12,  0.02,  0.92,
         0.09,  0.07,  1.07,  0.08,  0.04,  1.09,  0.11, -0.06,  1.05,
         0.15, -0.  ,  0.78,  0.14,  0.03,  0.98,  0.12,  0.09,  1.03,
         0.07,  0.02,  1.03,  0.08, -0.1 ,  0.93},
       {-0.02,  0.03,  1.  ,  0.  ,  0.03,  0.91, -0.01,  0.24,  1.07,
         0.01, -0.09,  1.13,  0.03, -0.15,  0.96,  0.18,  0.06,  0.73,
         0.26,  0.19,  0.7 ,  0.17,  0.22,  0.94,  0.03,  0.1 ,  1.06,
        -0.07,  0.02,  1.04, -0.06, -0.04,  1.  , -0.05,  0.02,  1.  ,
        -0.06,  0.02,  0.97, -0.04,  0.04,  0.97},
       { 0.04,  0.04,  0.97,  0.04,  0.14,  1.01,  0.03, -0.06,  1.16,
         0.07, -0.17,  0.93,  0.2 ,  0.12,  0.79,  0.18,  0.27,  0.86,
         0.09,  0.15,  0.99,  0.04,  0.13,  1.07, -0.04, -0.01,  1.05,
         0.01,  0.02,  0.97,  0.02,  0.08,  0.98, -0.02,  0.02,  0.98,
         0.02,  0.06,  0.97,  0.07,  0.13,  0.94},
       { 0.06, -0.05,  0.97,  0.05, -0.  ,  0.97,  0.05, -0.07,  1.21,
         0.07, -0.12,  0.86,  0.12, -0.05,  0.69,  0.13,  0.14,  1.06,
         0.09,  0.01,  1.1 ,  0.11, -0.05,  0.9 ,  0.11, -0.04,  0.73,
         0.11,  0.17,  1.1 ,  0.06, -0.01,  1.04,  0.05, -0.13,  0.98,
         0.06, -0.05,  0.97,  0.07, -0.05,  0.95},
       { 0.04,  0.03,  0.97,  0.04,  0.03,  0.94,  0.02,  0.11,  1.13,
         0.01, -0.15,  1.11,  0.1 , -0.12,  0.85,  0.17,  0.12,  0.79,
         0.12,  0.29,  1.06,  0.02,  0.12,  1.02, -0.01, -0.06,  1.  ,
         0.03, -0.  ,  0.98,  0.  , -0.04,  0.98,  0.06,  0.04,  0.98,
         0.06,  0.04,  0.97,  0.03,  0.01,  1.  },
       { 0.07,  0.01,  0.99,  0.09,  0.01,  0.98,  0.07,  0.17,  1.19,
         0.13, -0.26,  1.11,  0.16, -0.13,  0.84,  0.17,  0.1 ,  0.69,
         0.25,  0.32,  0.99,  0.13,  0.15,  1.02,  0.05, -0.04,  1.07,
         0.05, -0.02,  0.94,  0.07, -0.02,  0.98,  0.09,  0.09,  0.98,
         0.05,  0.  ,  0.99,  0.09,  0.06,  0.98},
       { 0.05, -0.12,  0.95,  0.08, -0.04,  0.91,  0.04, -0.  ,  1.06,
         0.05, -0.09,  0.99,  0.12, -0.  ,  0.76,  0.08, -0.06,  0.88,
         0.07,  0.13,  1.07,  0.01, -0.04,  0.99, -0.  , -0.05,  0.99,
        -0.03, -0.06,  1.  ,  0.  , -0.02,  0.99, -0.  , -0.04,  1.01,
        -0.01, -0.05,  0.97, -0.01, -0.06,  1.  },
       { 0.03, -0.09,  1.02,  0.09, -0.03,  0.96,  0.11,  0.09,  1.02,
         0.11, -0.14,  1.13,  0.14, -0.05,  0.92,  0.14, -0.02,  0.82,
         0.25,  0.2 ,  1.02,  0.11,  0.11,  1.04,  0.06, -0.07,  0.98,
         0.05, -0.03,  1.04,  0.07, -0.  ,  0.96,  0.08,  0.02,  0.97,
         0.1 ,  0.04,  0.99,  0.08,  0.02,  0.95},
       {-0.05, -0.02,  0.99, -0.04,  0.09,  1.02, -0.12, -0.16,  1.03,
        -0.05, -0.25,  1.1 ,  0.04, -0.13,  0.92,  0.08,  0.02,  0.82,
         0.13,  0.1 ,  0.86,  0.04,  0.05,  1.  , -0.06,  0.04,  1.07,
        -0.01,  0.02,  0.97, -0.1 , -0.09,  0.96, -0.05, -0.04,  0.95,
        -0.02, -0.06,  0.86,  0.  , -0.07,  0.97},
       { 0.11,  0.03,  0.96,  0.09,  0.09,  0.94,  0.07,  0.12,  1.05,
         0.05, -0.14,  1.06,  0.14,  0.02,  0.7 ,  0.22,  0.3 ,  0.86,
         0.15,  0.36,  1.02,  0.09,  0.27,  1.01,  0.03,  0.09,  0.99,
         0.06,  0.14,  0.94,  0.06,  0.17,  1.  ,  0.08,  0.19,  0.96,
         0.08,  0.17,  0.95,  0.09,  0.18,  0.94},
       { 0.06, -0.11,  0.99,  0.09, -0.06,  0.96,  0.12,  0.01,  1.08,
         0.12, -0.15,  0.96,  0.17, -0.03,  0.69,  0.18,  0.12,  0.93,
         0.03,  0.03,  1.12,  0.03, -0.1 ,  0.96,  0.06, -0.02,  0.96,
         0.06,  0.02,  0.99,  0.04, -0.03,  1.  ,  0.04, -0.01,  1.01,
         0.06, -0.01,  0.95,  0.03, -0.03,  0.97},
       { 0.07, -0.1 ,  1.  ,  0.12, -0.01,  0.89,  0.1 ,  0.08,  1.06,
         0.08, -0.25,  1.14,  0.19, -0.05,  0.75,  0.21,  0.13,  0.76,
         0.18,  0.19,  1.07,  0.11,  0.05,  0.95,  0.14, -0.03,  0.98,
         0.14, -0.04,  0.93,  0.16,  0.03,  0.97,  0.14, -0.01,  0.94,
         0.15,  0.02,  0.98,  0.14, -0.03,  0.97},
       { 0.02, -0.02,  1.01,  0.06,  0.07,  0.88,  0.06,  0.19,  1.1 ,
         0.08, -0.21,  1.05,  0.14, -0.04,  0.8 ,  0.1 , -0.02,  0.69,
         0.19,  0.32,  1.02,  0.09,  0.15,  1.05, -0.03, -0.01,  1.11,
        -0.02,  0.03,  1.01, -0.05, -0.05,  0.94, -0.  ,  0.03,  1.01,
        -0.01,  0.01,  1.03, -0.  ,  0.  ,  1.  },
       { 0.05,  0.02,  0.99,  0.06,  0.12,  0.93,  0.03, -0.01,  1.18,
         0.1 , -0.13,  0.98,  0.16, -0.02,  0.77,  0.23,  0.25,  0.85,
         0.11,  0.24,  1.09,  0.02,  0.08,  0.97,  0.04,  0.01,  0.99,
         0.06, -0.02,  0.99,  0.08,  0.09,  0.99,  0.05,  0.03,  0.97,
         0.07,  0.06,  0.98,  0.04,  0.01,  0.98},
       { 0.1 , -0.04,  0.99,  0.08, -0.03,  0.99,  0.12,  0.06,  1.02,
         0.1 , -0.06,  1.16,  0.15, -0.02,  0.93,  0.18, -0.  ,  0.77,
         0.17,  0.05,  0.92,  0.11,  0.04,  1.03,  0.07,  0.01,  0.98,
         0.04, -0.11,  0.98,  0.1 ,  0.02,  1.02,  0.11,  0.04,  0.99,
         0.06, -0.01,  0.98,  0.13,  0.05,  0.91},
       { 0.12,  0.06,  0.97,  0.11,  0.07,  0.93,  0.15,  0.15,  1.06,
         0.12,  0.01,  1.  ,  0.17,  0.05,  0.73,  0.15,  0.1 ,  0.94,
         0.12,  0.19,  1.11,  0.11,  0.07,  1.07,  0.12,  0.03,  0.89,
         0.12,  0.07,  0.87,  0.13,  0.18,  0.97,  0.09,  0.16,  1.03,
         0.06,  0.01,  0.99,  0.08,  0.03,  0.96},
       { 0.09, -0.02,  0.97,  0.09,  0.03,  0.99,  0.1 ,  0.05,  1.08,
         0.12, -0.18,  1.09,  0.15, -0.16,  0.9 ,  0.22,  0.11,  0.76,
         0.25,  0.31,  0.92,  0.14,  0.22,  1.02,  0.03, -0.02,  1.05,
         0.05, -0.05,  0.98,  0.07,  0.02,  0.95,  0.04, -0.  ,  0.98,
         0.05,  0.01,  0.99,  0.05, -0.  ,  0.96},
       { 0.09, -0.05,  1.03,  0.07, -0.14,  0.94,  0.09, -0.05,  0.97,
         0.13,  0.19,  1.01,  0.1 , -0.  ,  1.13,  0.11, -0.13,  0.9 ,
         0.15,  0.18,  0.8 ,  0.13,  0.25,  1.09,  0.08,  0.15,  1.01,
         0.06,  0.  ,  0.96,  0.11,  0.18,  1.  ,  0.1 ,  0.14,  0.98,
         0.07,  0.11,  1.  ,  0.08,  0.11,  0.97},
       { 0.13,  0.01,  0.98,  0.09, -0.01,  0.88,  0.05, -0.02,  1.18,
         0.12, -0.02,  0.91,  0.12,  0.02,  0.81,  0.08,  0.15,  0.98,
         0.09,  0.09,  1.11,  0.06, -0.06,  0.99,  0.13,  0.09,  0.8 ,
         0.1 ,  0.18,  1.  ,  0.09,  0.16,  0.98,  0.  , -0.1 ,  0.97,
         0.05, -0.  ,  0.98,  0.03, -0.  ,  0.95},
       { 0.05,  0.01,  0.98,  0.09,  0.26,  1.04, -0.07, -0.04,  1.  ,
        -0.04, -0.16,  1.02,  0.15,  0.15,  0.69,  0.21,  0.27,  0.76,
         0.12,  0.37,  0.99,  0.  ,  0.25,  1.09, -0.05,  0.08,  1.03,
        -0.08, -0.02,  0.96, -0.01,  0.07,  0.99, -0.03, -0.01,  0.91,
        -0.  ,  0.01,  1.  ,  0.04,  0.06,  0.97},
       { 0.01, -0.1 ,  1.01,  0.04, -0.09,  1.  ,  0.1 ,  0.14,  1.05,
         0.1 , -0.14,  1.12,  0.15, -0.07,  0.66,  0.11, -0.15,  0.79,
         0.17,  0.29,  1.04, -0.02, -0.05,  1.05,  0.01, -0.  ,  0.97,
         0.03,  0.07,  0.96,  0.04,  0.05,  0.96, -0.  ,  0.03,  1.  ,
         0.02,  0.04,  1.01,  0.03, -0.01,  0.98},
       { 0.14, -0.06,  0.95,  0.14, -0.07,  0.97,  0.18,  0.06,  1.08,
         0.17, -0.09,  1.07,  0.23, -0.06,  0.86,  0.25, -0.04,  0.75,
         0.17, -0.03,  0.91,  0.2 ,  0.05,  1.09,  0.16, -0.1 ,  1.08,
         0.21, -0.05,  0.88,  0.22, -0.06,  0.84,  0.19, -0.  ,  0.94,
         0.15,  0.02,  1.04,  0.11, -0.01,  1.03},
       { 0.03, -0.06,  1.01,  0.02, -0.06,  0.97,  0.06,  0.3 ,  1.13,
        -0.05, -0.3 ,  1.29,  0.07, -0.23,  0.62,  0.25,  0.27,  0.65,
         0.09,  0.28,  1.04, -0.04,  0.15,  1.08, -0.02,  0.05,  1.03,
         0.  , -0.01,  0.96,  0.03,  0.07,  0.99,  0.03,  0.11,  0.97,
         0.  ,  0.08,  0.99,  0.04,  0.12,  1.01},
       { 0.02,  0.  ,  1.  , -0.03, -0.05,  1.08,  0.04, -0.22,  1.11,
         0.09, -0.18,  0.84,  0.16,  0.09,  0.75,  0.16,  0.27,  1.03,
         0.03,  0.06,  1.04,  0.02, -0.  ,  0.95,  0.03, -0.04,  0.96,
         0.07,  0.04,  0.99,  0.05,  0.  ,  1.01,  0.05,  0.02,  0.98,
         0.04, -0.02,  0.98,  0.05, -0.  ,  0.99},
       { 0.05, -0.04,  0.98,  0.04, -0.04,  0.95,  0.04,  0.08,  1.  ,
         0.04, -0.03,  1.16,  0.04, -0.25,  0.9 ,  0.13,  0.08,  0.78,
         0.09,  0.14,  0.96,  0.07,  0.17,  1.05,  0.05,  0.08,  0.98,
         0.02,  0.02,  1.  ,  0.03,  0.03,  1.  ,  0.05,  0.05,  0.95,
         0.01,  0.01,  1.01,  0.04,  0.06,  0.96},
       { 0.04, -0.11,  0.98,  0.06, -0.02,  0.98,  0.05,  0.04,  1.01,
         0.14, -0.06,  1.02,  0.13, -0.04,  0.88,  0.14, -0.02,  0.84,
         0.12, -0.01,  0.89,  0.09,  0.1 ,  1.09,  0.03, -0.  ,  1.02,
         0.07, -0.  ,  0.95,  0.01, -0.13,  1.  ,  0.09,  0.02,  0.99,
         0.05, -0.03,  1.  ,  0.09,  0.02,  1.01},
       { 0.  ,  0.  ,  0.  ,  0.49, -0.57,  0.67,  0.39, -0.12,  0.9 ,
         0.15, -0.23,  1.25,  0.18, -0.15,  0.88,  0.22,  0.38,  1.15,
         0.14, -0.06,  1.01,  0.21,  0.05,  0.55,  0.14,  0.49,  1.17,
         0.03,  0.01,  1.21,  0.1 ,  0.01,  0.68,  0.08,  0.22,  0.81,
        -0.06,  0.32,  1.08, -0.06,  0.08,  0.98},
       { 0.05, -0.04,  1.01,  0.08,  0.11,  1.  ,  0.07, -0.08,  1.04,
         0.12, -0.15,  1.02,  0.12,  0.01,  0.82,  0.17,  0.13,  0.97,
         0.1 ,  0.04,  1.03,  0.08, -0.  ,  1.02,  0.1 ,  0.01,  0.96,
         0.07, -0.06,  0.99,  0.08, -0.01,  0.98,  0.08, -0.02,  1.  ,
         0.08, -0.02,  0.97,  0.08, -0.02,  0.98},
       { 0.07, -0.03,  0.98,  0.07, -0.  ,  0.96,  0.05, -0.11,  1.02,
         0.09, -0.07,  0.84,  0.11, -0.01,  0.78,  0.15,  0.18,  1.01,
         0.09,  0.  ,  1.18,  0.1 ,  0.01,  0.9 ,  0.12,  0.06,  0.82,
         0.09,  0.12,  0.99,  0.09,  0.1 ,  0.98,  0.06, -0.12,  0.99,
         0.09,  0.01,  0.98,  0.08,  0.01,  0.96},
       { 0.08,  0.  ,  0.97,  0.09,  0.09,  1.  ,  0.09, -0.06,  1.11,
         0.08, -0.07,  0.83,  0.13,  0.01,  0.88,  0.1 ,  0.11,  1.01,
         0.04,  0.02,  1.08,  0.06, -0.08,  0.98,  0.11, -0.01,  0.8 ,
         0.08,  0.1 ,  0.95,  0.06,  0.09,  1.01, -0.  , -0.02,  1.04,
        -0.01, -0.09,  0.97, -0.  , -0.  ,  0.98},
       { 0.08,  0.01,  1.  ,  0.04,  0.  ,  1.  ,  0.09,  0.1 ,  1.  ,
         0.09, -0.11,  1.15,  0.2 , -0.1 ,  0.98,  0.23,  0.06,  0.79,
         0.27,  0.28,  0.83,  0.26,  0.28,  1.01,  0.16,  0.14,  0.96,
         0.11,  0.07,  0.99,  0.1 ,  0.04,  1.01,  0.05, -0.02,  0.98,
         0.07,  0.01,  1.  ,  0.09,  0.05,  0.97},
       { 0.09, -0.05,  0.91,  0.05, -0.04,  1.03,  0.14,  0.09,  1.02,
         0.06, -0.16,  1.08,  0.14, -0.1 ,  0.85,  0.16, -0.07,  0.88,
         0.13, -0.04,  1.  ,  0.12,  0.02,  1.05,  0.05, -0.07,  1.  ,
         0.04, -0.13,  1.  ,  0.07, -0.05,  0.95,  0.04, -0.07,  0.96,
         0.09, -0.04,  0.94,  0.07, -0.06,  1.02},
       { 0.06, -0.02,  0.97,  0.05, -0.04,  0.95,  0.08,  0.06,  1.18,
         0.11, -0.08,  1.02,  0.18,  0.02,  0.71,  0.13,  0.1 ,  0.99,
         0.08,  0.07,  1.14,  0.1 , -0.02,  1.04,  0.13,  0.03,  0.87,
         0.15,  0.04,  0.88,  0.13,  0.18,  1.  ,  0.06,  0.04,  1.04,
         0.06, -0.01,  0.99,  0.07,  0.04,  0.97},
       {-0.04, -0.02,  0.98, -0.01, -0.06,  0.97, -0.03, -0.1 ,  1.27,
         0.04,  0.14,  0.89,  0.19,  0.12,  0.81,  0.24, -0.01,  0.78,
         0.24, -0.04,  0.82, -0.01, -0.16,  0.95, -0.09, -0.12,  1.09,
        -0.05,  0.14,  0.99, -0.04,  0.05,  0.98, -0.04,  0.01,  0.94,
        -0.06, -0.03,  0.97, -0.03, -0.01,  0.99},
       { 0.04, -0.03,  0.99,  0.04, -0.04,  0.93,  0.02,  0.05,  1.01,
         0.04, -0.07,  1.2 ,  0.09,  0.02,  0.71,  0.11,  0.09,  0.93,
         0.01,  0.14,  1.08, -0.  , -0.07,  1.15,  0.05,  0.  ,  0.88,
         0.09,  0.04,  0.84,  0.07,  0.13,  0.97, -0.  ,  0.1 ,  1.08,
        -0.04, -0.04,  1.  , -0.05, -0.01,  0.99},
       { 0.05,  0.  ,  0.95,  0.07,  0.18,  0.97,  0.03, -0.04,  1.04,
         0.03, -0.29,  1.13,  0.13, -0.14,  0.86,  0.18,  0.01,  0.82,
         0.11, -0.02,  0.93,  0.07,  0.12,  1.02,  0.07,  0.08,  0.99,
         0.02, -0.06,  1.05,  0.03, -0.05,  0.99,  0.04, -0.01,  0.97,
         0.05,  0.02,  0.99,  0.04, -0.01,  0.98},
       { 0.03,  0.05,  0.99, -0.  ,  0.03,  0.99, -0.01,  0.15,  0.99,
         0.05, -0.1 ,  1.19,  0.07, -0.24,  0.96,  0.16,  0.06,  0.81,
         0.16,  0.13,  0.78,  0.16,  0.25,  1.06,  0.06,  0.08,  1.03,
        -0.  ,  0.03,  1.05, -0.05, -0.05,  1.03,  0.01, -0.02,  1.  ,
        -0.02, -0.03,  0.99, -0.01,  0.  ,  0.96},
       { 0.06, -0.02,  0.98,  0.06,  0.05,  0.92,  0.07,  0.01,  1.08,
         0.07, -0.07,  1.01,  0.13,  0.01,  0.83,  0.12,  0.05,  0.91,
         0.07,  0.11,  1.09,  0.08,  0.01,  1.04,  0.08, -0.03,  0.96,
         0.12,  0.02,  0.87,  0.12,  0.11,  0.95,  0.04,  0.06,  1.06,
         0.05, -0.  ,  0.98,  0.05, -0.05,  0.98},
       {-0.03, -0.01,  1.  , -0.02, -0.02,  0.99,  0.02, -0.01,  1.04,
         0.07,  0.06,  1.12,  0.07,  0.11,  0.98,  0.19,  0.12,  0.89,
         0.25,  0.1 ,  0.89,  0.17, -0.08,  0.88,  0.08, -0.16,  0.95,
        -0.  , -0.08,  1.04,  0.03,  0.14,  1.03,  0.05,  0.16,  1.02,
         0.02,  0.14,  0.93,  0.03,  0.12,  1.  },
       {-0.04, -0.05,  1.  , -0.04, -0.02,  1.  ,  0.06, -0.15,  1.21,
         0.05,  0.27,  1.1 ,  0.23,  0.3 ,  0.85,  0.2 , -0.  ,  0.71,
         0.18, -0.21,  0.79,  0.01, -0.08,  1.08, -0.03,  0.1 ,  1.1 ,
        -0.09,  0.13,  0.94, -0.09,  0.09,  0.97, -0.04,  0.11,  0.99,
        -0.09,  0.03,  0.92, -0.03,  0.1 ,  0.99},
       { 0.07, -0.04,  0.96,  0.08, -0.02,  0.97,  0.08,  0.03,  0.97,
         0.11, -0.  ,  1.  ,  0.08,  0.02,  0.74,  0.1 ,  0.12,  0.96,
         0.11,  0.12,  1.22,  0.06, -0.07,  0.93,  0.11,  0.03,  0.81,
         0.16,  0.28,  1.02,  0.02,  0.07,  1.05, -0.  , -0.16,  0.99,
         0.05, -0.05,  0.95,  0.05, -0.05,  0.99},
       { 0.  ,  0.  ,  0.  ,  0.19,  0.16,  0.59,  0.29, -0.03,  0.98,
         0.31,  0.02,  0.57,  0.15,  0.08,  1.26, -0.13, -0.6 ,  0.97,
         0.12, -0.17,  0.73,  0.23,  0.05,  0.48,  0.14,  0.38,  0.98,
        -0.05,  0.17,  1.17, -0.11, -0.11,  1.12, -0.07,  0.01,  0.97,
        -0.06, -0.03,  0.98, -0.  ,  0.07,  0.99},
       { 0.06, -0.  ,  0.97,  0.04,  0.  ,  0.92, -0.  , -0.07,  1.1 ,
         0.02, -0.11,  1.14,  0.14,  0.01,  0.71,  0.19,  0.13,  0.87,
         0.09,  0.21,  1.01, -0.02,  0.15,  1.15, -0.04, -0.07,  0.97,
        -0.03, -0.06,  1.01, -0.02,  0.03,  1.03,  0.03,  0.08,  1.01,
         0.03,  0.05,  0.98,  0.01,  0.06,  1.02},
       { 0.03, -0.06,  0.98,  0.05,  0.08,  0.91, -0.01, -0.04,  1.12,
         0.08, -0.08,  1.02,  0.14,  0.02,  0.64,  0.16,  0.04,  1.05,
         0.1 ,  0.19,  1.07,  0.03,  0.01,  1.01,  0.01, -0.11,  0.98,
         0.04,  0.03,  1.01,  0.05,  0.02,  0.97,  0.07,  0.02,  0.94,
         0.03, -0.  ,  1.  ,  0.06,  0.03,  0.99},
       { 0.06, -0.17,  0.99,  0.07, -0.11,  0.95,  0.09, -0.07,  1.  ,
         0.11, -0.01,  1.05,  0.08, -0.26,  1.03,  0.12, -0.07,  0.84,
         0.17,  0.27,  0.84,  0.12,  0.19,  1.05,  0.08,  0.13,  1.02,
         0.07, -0.03,  0.98,  0.08,  0.01,  0.95,  0.1 ,  0.09,  0.99,
         0.08,  0.02,  0.97,  0.07,  0.01,  1.  },
       { 0.1 , -0.01,  0.98,  0.04, -0.03,  0.97,  0.05, -0.  ,  1.05,
         0.05, -0.14,  1.05,  0.14, -0.04,  0.92,  0.2 , -0.  ,  0.83,
         0.17,  0.01,  0.94,  0.16,  0.09,  1.07,  0.07,  0.02,  1.  ,
         0.08, -0.04,  0.93,  0.08, -0.1 ,  0.95,  0.1 , -0.01,  0.99,
         0.07, -0.07,  1.02,  0.07, -0.05,  0.97},
       { 0.04, -0.07,  0.98,  0.03,  0.03,  0.93,  0.09, -0.05,  1.27,
         0.09, -0.08,  0.72,  0.17,  0.05,  0.74,  0.15,  0.23,  1.08,
         0.01,  0.01,  1.12,  0.03, -0.06,  0.95,  0.01,  0.02,  0.98,
        -0.  ,  0.01,  1.03,  0.05,  0.04,  1.  ,  0.02,  0.04,  0.95,
         0.03,  0.02,  0.95,  0.01, -0.01,  0.98},
       { 0.14, -0.05,  0.94,  0.1 ,  0.06,  0.91,  0.09, -0.13,  1.2 ,
         0.07, -0.16,  0.81,  0.2 ,  0.01,  0.81,  0.18,  0.21,  1.05,
         0.09,  0.1 ,  1.  ,  0.06, -0.02,  0.99,  0.1 ,  0.06,  1.01,
         0.07,  0.04,  0.95,  0.07, -0.  ,  1.  ,  0.06,  0.01,  1.  ,
         0.09,  0.06,  0.97,  0.1 ,  0.01,  0.96},
       {-0.01, -0.16,  1.  , -0.01, -0.02,  0.96, -0.03, -0.18,  1.26,
         0.1 , -0.04,  0.88,  0.14, -0.03,  0.67,  0.11,  0.14,  0.99,
         0.01,  0.03,  1.11, -0.  , -0.14,  0.98,  0.01, -0.1 ,  0.98,
         0.02, -0.07,  0.99,  0.03, -0.05,  0.97,  0.01, -0.06,  0.98,
        -0.  , -0.06,  0.99,  0.  , -0.08,  0.98},
       { 0.1 , -0.03,  0.97,  0.09,  0.  ,  0.93,  0.08,  0.02,  1.1 ,
         0.07, -0.12,  1.07,  0.13, -0.05,  0.78,  0.16,  0.05,  0.9 ,
         0.11,  0.1 ,  1.14,  0.08, -0.06,  1.02,  0.13, -0.05,  0.93,
         0.19,  0.03,  0.87,  0.11,  0.07,  1.01,  0.06,  0.05,  1.09,
         0.05, -0.07,  0.98,  0.08, -0.05,  0.97},
       { 0.18, -0.  ,  0.93,  0.13,  0.02,  0.99,  0.19,  0.04,  1.03,
         0.19, -0.13,  1.06,  0.19, -0.02,  0.73,  0.22,  0.11,  0.94,
         0.17,  0.13,  1.12,  0.17, -0.03,  1.04,  0.2 ,  0.02,  0.82,
         0.21,  0.08,  0.87,  0.18,  0.17,  1.03,  0.15, -0.01,  0.99,
         0.14, -0.07,  0.95,  0.16,  0.  ,  0.97},
       { 0.1 , -0.08,  0.95,  0.11,  0.06,  0.94,  0.06,  0.02,  1.04,
         0.1 , -0.09,  1.01,  0.08, -0.11,  0.86,  0.13,  0.1 ,  0.9 ,
         0.07,  0.13,  1.06,  0.06,  0.05,  1.01,  0.05, -0.03,  1.02,
         0.08,  0.01,  0.99,  0.05, -0.01,  0.97,  0.08,  0.07,  0.97,
         0.08,  0.05,  0.98,  0.1 ,  0.07,  0.97},
       { 0.01,  0.03,  0.97, -0.02,  0.01,  0.99,  0.01,  0.37,  0.89,
        -0.05, -0.38,  1.2 ,  0.07, -0.27,  0.83,  0.16,  0.09,  0.78,
         0.2 ,  0.18,  0.9 ,  0.12,  0.22,  1.  ,  0.02,  0.12,  1.  ,
        -0.06,  0.07,  1.06, -0.08, -0.01,  1.  , -0.09, -0.01,  1.  ,
        -0.08, -0.02,  1.  , -0.03,  0.02,  1.03},
       { 0.08,  0.03,  0.93,  0.04,  0.1 ,  0.96,  0.05, -0.  ,  0.97,
         0.1 , -0.16,  1.09,  0.11, -0.15,  0.91,  0.19,  0.09,  0.81,
         0.18,  0.13,  0.89,  0.14,  0.19,  1.02,  0.11,  0.19,  0.99,
         0.03,  0.02,  1.02,  0.03, -0.01,  0.98,  0.02,  0.01,  1.  ,
         0.02,  0.03,  0.97,  0.03, -0.  ,  0.96},
       { 0.04, -0.05,  0.96,  0.06,  0.1 ,  0.95,  0.05,  0.04,  1.13,
         0.04, -0.21,  1.02,  0.12, -0.04,  0.84,  0.14,  0.14,  0.89,
         0.09,  0.19,  1.01,  0.09,  0.2 ,  0.99,  0.04,  0.06,  0.98,
         0.03,  0.05,  0.98,  0.06,  0.12,  0.97,  0.03,  0.1 ,  0.99,
         0.03,  0.08,  0.96,  0.05,  0.1 ,  0.96},
       { 0.03, -0.04,  1.02,  0.03, -0.02,  1.  ,  0.06,  0.08,  1.1 ,
         0.03, -0.14,  1.04,  0.1 , -0.13,  0.92,  0.18,  0.03,  0.84,
         0.18,  0.12,  0.96,  0.1 ,  0.14,  1.03,  0.04,  0.03,  1.03,
         0.04,  0.01,  0.99,  0.03, -0.04,  0.99,  0.05,  0.03,  0.97,
         0.04,  0.02,  0.99,  0.03,  0.  ,  0.99},
       { 0.08, -0.05,  0.96,  0.06, -0.03,  0.99,  0.09,  0.03,  1.03,
         0.11, -0.08,  1.13,  0.15, -0.06,  0.84,  0.2 , -0.04,  0.8 ,
         0.16,  0.01,  0.86,  0.15,  0.16,  1.07,  0.08,  0.02,  1.05,
         0.1 , -0.05,  0.95,  0.03, -0.13,  1.  ,  0.09, -0.01,  1.02,
         0.06, -0.04,  1.02,  0.07, -0.05,  0.96},
       { 0.08, -0.02,  0.98,  0.1 ,  0.05,  0.97,  0.09,  0.04,  1.  ,
         0.11, -0.05,  1.1 ,  0.14, -0.  ,  0.79,  0.14,  0.02,  0.9 ,
         0.15,  0.19,  1.06,  0.08,  0.06,  1.09,  0.11, -0.04,  0.95,
         0.14,  0.08,  0.81,  0.12,  0.16,  0.92,  0.04,  0.07,  1.07,
         0.06, -0.04,  0.98,  0.05, -0.07,  0.97},
       {-0.02, -0.1 ,  1.  ,  0.03,  0.02,  0.97,  0.08, -0.15,  1.15,
         0.07, -0.13,  0.98,  0.13, -0.  ,  0.72,  0.12,  0.07,  0.96,
         0.1 ,  0.15,  1.1 ,  0.01, -0.12,  0.97,  0.05,  0.01,  0.93,
         0.01, -0.02,  0.98,  0.05,  0.02,  0.97,  0.05, -0.04,  1.  ,
         0.06,  0.02,  0.97,  0.04, -0.03,  0.96},
       {-0.01, -0.02,  1.  ,  0.02,  0.04,  0.94,  0.06,  0.22,  1.03,
        -0.  , -0.16,  1.14,  0.07, -0.24,  0.94,  0.22,  0.09,  0.76,
         0.23,  0.25,  0.82,  0.15,  0.17,  0.93,  0.11,  0.21,  1.09,
         0.01,  0.07,  1.04, -0.01, -0.01,  0.98, -0.04, -0.06,  0.98,
         0.02,  0.06,  0.99,  0.01,  0.  ,  0.99},
       { 0.12, -0.05,  1.  ,  0.12, -0.03,  0.99,  0.14,  0.07,  1.05,
         0.07, -0.17,  1.08,  0.16, -0.06,  0.9 ,  0.15,  0.03,  0.81,
         0.12,  0.13,  1.05,  0.08,  0.06,  1.  ,  0.06, -0.  ,  1.01,
         0.14,  0.04,  0.99,  0.1 ,  0.01,  0.98,  0.08, -0.01,  1.  ,
         0.14,  0.07,  0.99,  0.08, -0.02,  1.  },
       { 0.12, -0.07,  0.96,  0.11, -0.05,  0.94,  0.12,  0.07,  1.03,
         0.15, -0.04,  1.02,  0.16, -0.17,  1.06,  0.12, -0.1 ,  0.83,
         0.26,  0.32,  0.84,  0.17,  0.2 ,  1.05,  0.1 , -0.01,  1.05,
         0.07, -0.03,  0.98,  0.08, -0.01,  0.99,  0.11,  0.03,  0.95,
         0.12,  0.06,  0.97,  0.11,  0.04,  1.  },
       { 0.13, -0.05,  0.99,  0.12,  0.06,  1.  ,  0.1 , -0.  ,  1.11,
         0.08, -0.12,  1.01,  0.16,  0.03,  0.76,  0.05,  0.12,  1.02,
        -0.01,  0.21,  1.22, -0.03,  0.04,  1.04,  0.06,  0.14,  0.81,
         0.01,  0.16,  0.92, -0.05,  0.29,  1.04, -0.04,  0.09,  1.02,
        -0.04,  0.05,  0.99, -0.05,  0.06,  1.  }};
    
};