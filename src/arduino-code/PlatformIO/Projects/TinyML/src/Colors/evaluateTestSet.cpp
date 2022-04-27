/*
 * Voice classifier for Arduino Nano 33 BLE Sense by Alan Wang
 */
#include <Arduino_APDS9960.h>
#include <math.h>
#include <EloquentTinyML.h> // https://github.com/eloquentarduino/EloquentTinyML
#include "NNmodel.h"        // TF Lite model file

#define NUMBER_OF_LABELS 3                                             // number of voice labels
const String words[NUMBER_OF_LABELS] = {"229658", "49b675", "6bd793"}; // words for each label
#define FEATURE_SIZE 5
#define TEST_SIZE 100

float predicted_labels[TEST_SIZE];

#define PREDIC_THRESHOLD 0.6 // prediction probability threshold for labels
#define RAW_OUTPUT true      // output prediction probability of each label
#define NUMBER_OF_INPUTS FEATURE_SIZE
#define NUMBER_OF_OUTPUTS NUMBER_OF_LABELS
#define TENSOR_ARENA_SIZE 4 * 1024

Eloquent::TinyML::TfLite<NUMBER_OF_INPUTS, NUMBER_OF_OUTPUTS, TENSOR_ARENA_SIZE> tf_model;
float feature_data[FEATURE_SIZE];

int X_test[TEST_SIZE][5] = {{100, 112, 110, 1012, 0},
                            {22, 111, 101, 1001, 0},
                            {21, 102, 100, 220, 0},
                            {22, 111, 102, 1010, 0},
                            {22, 110, 101, 1000, 0},
                            {100, 112, 102, 1011, 0},
                            {100, 110, 101, 1001, 0},
                            {22, 110, 101, 1001, 0},
                            {100, 111, 110, 1011, 0},
                            {100, 111, 102, 1011, 0},
                            {100, 112, 102, 1011, 0},
                            {100, 111, 102, 1010, 0},
                            {101, 120, 112, 1101, 0},
                            {22, 110, 101, 1000, 0},
                            {21, 101, 22, 212, 0},
                            {22, 110, 101, 1000, 0},
                            {20, 100, 21, 202, 0},
                            {101, 112, 110, 1012, 0},
                            {22, 111, 102, 1002, 0},
                            {20, 101, 22, 210, 0},
                            {21, 102, 100, 212, 0},
                            {22, 102, 100, 1000, 0},
                            {21, 102, 100, 220, 0},
                            {101, 112, 110, 1012, 0},
                            {22, 111, 102, 1010, 0},
                            {22, 111, 102, 1010, 0},
                            {22, 110, 100, 221, 0},
                            {100, 111, 101, 1002, 0},
                            {22, 102, 100, 221, 0},
                            {100, 111, 101, 1001, 0},
                            {11, 21, 12, 112, 0},
                            {22, 110, 101, 222, 0},
                            {21, 102, 100, 220, 0},
                            {21, 102, 100, 221, 0},
                            {20, 100, 22, 202, 0},
                            {22, 110, 101, 222, 0},
                            {22, 110, 101, 1001, 0},
                            {22, 111, 102, 1001, 0},
                            {22, 111, 101, 1001, 0},
                            {21, 102, 100, 220, 0},
                            {22, 110, 100, 222, 0},
                            {100, 112, 110, 1011, 0},
                            {100, 111, 101, 1001, 0},
                            {100, 112, 110, 1010, 0},
                            {20, 101, 22, 211, 0},
                            {20, 100, 22, 202, 0},
                            {101, 120, 111, 1020, 0},
                            {22, 110, 101, 222, 0},
                            {100, 112, 110, 1012, 0},
                            {20, 100, 21, 201, 0},
                            {22, 111, 102, 1010, 0},
                            {12, 100, 21, 201, 0},
                            {100, 111, 101, 1001, 0},
                            {100, 111, 102, 1002, 0},
                            {21, 102, 100, 221, 0},
                            {100, 111, 110, 1011, 0},
                            {100, 111, 102, 1002, 0},
                            {100, 111, 102, 1010, 0},
                            {22, 110, 101, 1000, 0},
                            {100, 112, 102, 1011, 0},
                            {21, 102, 101, 222, 0},
                            {12, 100, 21, 201, 0},
                            {12, 22, 21, 200, 0},
                            {100, 111, 102, 1010, 0},
                            {22, 111, 101, 1001, 0},
                            {22, 110, 101, 1000, 0},
                            {100, 111, 102, 1010, 0},
                            {100, 111, 102, 1002, 0},
                            {100, 111, 101, 1002, 0},
                            {100, 111, 102, 1010, 0},
                            {22, 111, 101, 1001, 0},
                            {100, 111, 102, 1010, 0},
                            {22, 111, 101, 1001, 0},
                            {22, 110, 101, 1001, 0},
                            {100, 111, 102, 1002, 0},
                            {21, 101, 100, 212, 0},
                            {20, 100, 21, 201, 0},
                            {20, 101, 22, 211, 0},
                            {22, 112, 110, 1010, 0},
                            {101, 120, 112, 1101, 0},
                            {100, 111, 102, 1010, 0},
                            {21, 101, 22, 211, 0},
                            {100, 111, 101, 1001, 0},
                            {22, 110, 101, 222, 0},
                            {22, 110, 101, 1001, 0},
                            {100, 112, 110, 1020, 0},
                            {100, 111, 102, 1002, 0},
                            {100, 111, 102, 1010, 0},
                            {101, 120, 112, 1101, 0},
                            {110, 122, 120, 1121, 212},
                            {101, 112, 110, 1020, 0},
                            {21, 102, 100, 220, 0},
                            {20, 100, 21, 202, 0},
                            {22, 102, 100, 221, 0},
                            {101, 112, 102, 1012, 0},
                            {22, 110, 101, 222, 0},
                            {100, 111, 102, 1010, 0},
                            {110, 122, 120, 1120, 100},
                            {100, 112, 102, 1011, 0},
                            {101, 120, 111, 1022, 0}};

int y_test[TEST_SIZE] = {0, 4, 1, 0, 0, 4, 4, 1, 0, 0, 4, 4, 0, 4, 1, 5, 1, 5, 0, 1, 1, 1, 0, 4, 0, 0, 4, 4, 5, 5, 1, 4, 1, 0, 1, 0, 4, 0, 4, 4, 4, 0, 4, 0, 1, 1, 0, 5, 0, 1, 0, 1, 4, 5, 0, 0, 4, 4, 4, 4, 0, 1, 1, 4, 5, 0, 4, 4, 4, 4, 4, 4, 4, 5, 4, 1, 1, 1, 0, 0, 4, 0, 4, 4, 4, 0, 4, 5, 0, 0, 4, 1, 4, 5, 4, 4, 4, 0, 4, 0};

void setup()
{
  Serial.begin(9600);
  // print the header
  Serial.println("Start Evaluate TestSet");
}

void loop()
{
  // for each element in X_test
  for (int i = 0; i < TEST_SIZE; i++)
  {
    feature_data[0] = X_test[i][0];
    feature_data[1] = X_test[i][1];
    feature_data[2] = X_test[i][2];
    feature_data[3] = X_test[i][3];
    feature_data[4] = X_test[i][4];
    // predict color and put results (probability) for each label in the array
    float prediction[NUMBER_OF_LABELS];
    tf_model.predict(feature_data, prediction);
    // print out prediction results;
    // in theory, you need to find the highest probability in the array,
    // but only one of them would be high enough over 0.5~0.6
    Serial.println("Predicting the word:");
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
    predicted_labels[i] = prediction[max_index];
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
