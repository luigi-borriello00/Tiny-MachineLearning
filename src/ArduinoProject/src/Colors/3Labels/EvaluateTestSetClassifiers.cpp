#ifdef EVAL_CLASS_COLORS

#include <EloquentTinyML.h> // https://github.com/eloquentarduino/EloquentTinyML
#include "TestSet.h"
/* Uncomment the model that you want to test */
//#include "Models/RF.h" // model file
//#include "Models/CART.h"            // model file
//#include "Models/SVC.h"            // model file
//#include "Models/LR.h"           // model file
#include "Models/GNB.h"            // model file
//#define NUMBER_OF_LABELS   7     // number of voice labels
#define NUMBER_OF_LABELS 3 // number of voice labels
// const String words[NUMBER_OF_LABELS] = {"229658", "30a161", "3dab6b", "49b675", "55c17f", "60cc89", "6bd793"};  // words for each label
const String words[NUMBER_OF_LABELS] = {"229658", "49b675", "6bd793"}; // words for each label
#define FEATURE_SIZE 5
#define TEST_SIZE 120

/* Uncomment the model that you want to test */
// Eloquent::ML::Port::RandomForest model;
// Eloquent::ML::Port::DecisionTree model;
// Eloquent::ML::Port::SVM model;
// Eloquent::ML::Port::LogisticRegression model;
Eloquent::ML::Port::GaussianNB model;

TestSet testSet;
int predicted_labels[TEST_SIZE];

void setup()
{
    Serial.begin(9600);
    // print the header
    Serial.println("Start Evaluate TestSet");
}

void loop()
{

    long start = millis();

    for (int i = 0; i < TEST_SIZE; i++)
    {
        float X_temp[FEATURE_SIZE];
        for (int j = 0; j < FEATURE_SIZE; j++)
        {
            X_temp[j] = testSet.X_test[i][j];
        }
        // predict the label
        predicted_labels[i] = model.predict(X_temp);
    }
    Serial.print("Time to predict the X_test: ");
    long totTime = millis() - start;
    Serial.println(totTime);

    // print out the predicted labels
    Serial.println("Predicted labels: \n [");
    for (int i = 0; i < TEST_SIZE; i++)
    {
        Serial.print(predicted_labels[i]);
        Serial.print(", ");
    }
    Serial.println("]");

    delay(10000);
}

#endif