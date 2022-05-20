#ifdef EVAL_NN_VIBRATIONS_ALL
#include <Arduino_APDS9960.h>
#include <math.h>
#include <EloquentTinyML.h> // https://github.com/eloquentarduino/EloquentTinyML
#include "Models/NNmodel.h" // TF Lite model file
#include "../../Functions.h"
#include "TestSet.h"

#define NUMBER_OF_LABELS 6                                                                                                    // number of voice labels
const String words[NUMBER_OF_LABELS] = {"0", "1", "2", "3", "4", "5"};// words for each label
#define FEATURE_SIZE 60
#define TEST_SIZE 1666

int predicted_labels[TEST_SIZE];

#define PREDIC_THRESHOLD 0.6 // prediction probability threshold for labels
#define RAW_OUTPUT true      // output prediction probability of each label
#define NUMBER_OF_INPUTS FEATURE_SIZE
#define NUMBER_OF_OUTPUTS NUMBER_OF_LABELS
#define TENSOR_ARENA_SIZE 4 * 1024

Eloquent::TinyML::TfLite<NUMBER_OF_INPUTS, NUMBER_OF_OUTPUTS, TENSOR_ARENA_SIZE> tf_model;
float feature_data[FEATURE_SIZE];
TestSet testSet;

void setup()
{
  Serial.begin(9600);
  // print the header
  Serial.println("Start Evaluate TestSet");
  // start TF Lite model
  tf_model.begin((unsigned char *)model_data);
}

void loop()
{
  // for each element in X_test
  for (int i = 0; i < TEST_SIZE; i++)
  {
    for(int j = 0; j < FEATURE_SIZE; j++)
    {
      feature_data[j] = testSet.X_test[i][j];
    }
    // predict color and put results (probability) for each label in the array
    float prediction[NUMBER_OF_LABELS];
    tf_model.predict(feature_data, prediction);
    // print out prediction results;
    // in theory, you need to find the highest probability in the array,
    // but only one of them would be high enough over 0.5~0.6
    
    // find index of max value in prediction array
    int max_index = 0;
    float max_value = prediction[0];
    for (int j = 1; j < NUMBER_OF_LABELS; j++)
    {
      if (prediction[j] > max_value)
      {
        max_index = j;
        max_value = prediction[j];
      }
    }
    // add max_index to the array of predicted labels
    predicted_labels[i] = max_index;
  }
  // print out the predicted labels
  Serial.println("Predicted labels: \n [");
  for (int i = 0; i < TEST_SIZE; i++)
  {
    Serial.print(predicted_labels[i]);
    Serial.print(", ");
  }
  Serial.println("]");

  // wait for 1 second after one sampling/prediction
  delay(900);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
}

#endif