#ifdef EVAL_CLASS_GESTURES_4LABELS

#include <EloquentTinyML.h> // https://github.com/eloquentarduino/EloquentTinyML
#include "TestSet.h"
/* Uncomment the model that yout want to test */
//#include "Models/RF.h" // model file
//#include "Models/CART.h"            // model file
//#include "Models/SVC.h"            // model file
//#include "Models/LR.h"           // model file
#include "Models/GNB.h"            // model file
#define NUMBER_OF_LABELS 4 // number of voice labels
const String words[NUMBER_OF_LABELS] = {"O", "I", "U", "E"}; // words for each label
#define FEATURE_SIZE 42
#define TEST_SIZE 80

/* Uncomment the model that yout want to test */
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