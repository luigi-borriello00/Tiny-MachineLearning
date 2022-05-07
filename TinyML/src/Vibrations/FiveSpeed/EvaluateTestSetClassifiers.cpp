#ifdef EVAL_CLASS_VIBRATIONS_FIVESPEED
#include <EloquentTinyML.h> // https://github.com/eloquentarduino/EloquentTinyML
#include "../../Functions.h"
#include "TestSet.h"
/* Uncomment the model that yout want to test */
#include "Models/RF.h" // model file
//#include "Models/CART.h"            // model file
//#include "Models/SVC.h"            // model file
//#include "Models/LR.h"           // model file
//#include "Models/GNB.h"            // model file
#define NUMBER_OF_LABELS 5                                        // number of voice labels
const String words[NUMBER_OF_LABELS] = {"1", "2", "3", "4", "5"}; // words for each label
#define FEATURE_SIZE 60
#define TEST_SIZE 780

/* Uncomment the model that yout want to test */
Eloquent::ML::Port::RandomForest model;
// Eloquent::ML::Port::DecisionTree model;
// Eloquent::ML::Port::LogisticRegression model;
// Eloquent::ML::Port::SVM model;
// Eloquent::ML::Port::GaussianNB model;

TestSet testSet;
int prediction[TEST_SIZE];

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
        prediction[i] = model.predict(X_temp);
    }
    Serial.print("Time to predict the X_test: ");
    long totTime = millis() - start;
    Serial.println(totTime);

    // evaluate accuracy, precision, recall, and f1 score
    Serial.print("Accuracy: ");
    Serial.println(evaluate_accuracy(prediction, testSet.y_test, TEST_SIZE));
    Serial.print("Precision: ");
    Serial.println(evaluate_precision(prediction, testSet.y_test, TEST_SIZE));
    Serial.print("Recall: ");
    Serial.println(evaluate_recall(prediction, testSet.y_test, TEST_SIZE));
    Serial.print("F1 score: ");
    Serial.println(evaluate_f1(prediction, testSet.y_test, TEST_SIZE));

    delay(1000);
}

#endif // EVAL_CLASS_VIBRATIONS_FIVESPEED