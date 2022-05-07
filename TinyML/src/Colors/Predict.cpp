#ifdef PREDICT_COLORS

/*
 * Voice classifier for Arduino Nano 33 BLE Sense by Alan Wang
 */
#include <Arduino_APDS9960.h>
#include <math.h>
#include <EloquentTinyML.h>      // https://github.com/eloquentarduino/EloquentTinyML
#include "Models/NNmodel.h"       // TF Lite model file

#define NUMBER_OF_LABELS   3     // number of voice labels
const String words[NUMBER_OF_LABELS] = {"229658", "49b675", "6bd793"};  // words for each label
#define FEATURE_SIZE 5


#define PREDIC_THRESHOLD   0.6   // prediction probability threshold for labels
#define RAW_OUTPUT         true  // output prediction probability of each label
#define NUMBER_OF_INPUTS   FEATURE_SIZE
#define NUMBER_OF_OUTPUTS  NUMBER_OF_LABELS
#define TENSOR_ARENA_SIZE  4 * 1024

Eloquent::TinyML::TfLite<NUMBER_OF_INPUTS, NUMBER_OF_OUTPUTS, TENSOR_ARENA_SIZE> tf_model;
float feature_data[FEATURE_SIZE];


void setup() {

  Serial.begin(9600);
  while (!Serial) {};

  if (!APDS.begin()) {
    Serial.println("Error initializing APDS9960 sensor.");
  }

  // print the header
  Serial.println("Red,Green,Blue,LightIntensity,Proximity,Prediction");
}

void loop() {

  int r, g, b, c, p;
  //float sum;

  // wait for proximity and color sensor data
  while (!APDS.colorAvailable() || !APDS.proximityAvailable()) {}

  // read the color and proximity data
  APDS.readColor(r, g, b, c);
  p = APDS.readProximity();
  feature_data[0] = (float) r;
  feature_data[1] = (float) g;
  feature_data[2] = (float) b;
  feature_data[3] = (float) c;
  feature_data[4] = (float) p;

  // predict color and put results (probability) for each label in the array
  float prediction[NUMBER_OF_LABELS];
  tf_model.predict(feature_data, prediction);

  // print out prediction results;
  // in theory, you need to find the highest probability in the array,
  // but only one of them would be high enough over 0.5~0.6
  Serial.println("Predicting the word:");
  if (RAW_OUTPUT) {
    for (int i = 0; i < NUMBER_OF_LABELS; i++) {
      Serial.print("Label ");
      Serial.print(i);
      Serial.print(" = ");
      Serial.println(prediction[i]);
    }
  }
  bool word_detected = false;

  
  // find the highest probability
  for (int i = 0; i < NUMBER_OF_LABELS; i++) {
    if (prediction[i] >= PREDIC_THRESHOLD) {
      Serial.print("Word detected: ");
      Serial.println(words[i]);
      Serial.println("");
      word_detected = true;
    }
  }
  if (!word_detected && !RAW_OUTPUT) Serial.println("Word not recognized\n");

  // wait for 1 second after one sampling/prediction
  delay(900);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
}

#endif