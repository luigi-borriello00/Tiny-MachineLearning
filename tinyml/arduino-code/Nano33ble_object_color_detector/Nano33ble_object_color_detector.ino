#include <Arduino_APDS9960.h>
#include <EloquentTinyML.h>      // https://github.com/eloquentarduino/EloquentTinyML
#include "rf_model_paper.h"            // RF model file

//#define NUMBER_OF_LABELS   7     // number of voice labels
#define NUMBER_OF_LABELS   3     // number of voice labels
//const String words[NUMBER_OF_LABELS] = {"229658", "30a161", "3dab6b", "49b675", "55c17f", "60cc89", "6bd793"};  // words for each label
const String words[NUMBER_OF_LABELS] = {"229658", "49b675", "6bd793"};  // words for each label
#define FEATURE_SIZE 5

Eloquent::ML::Port::RandomForest rf_model;
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
  
  int prediction;
  prediction = rf_model.predict(feature_data);

  // print the data in CSV format
  Serial.print('[');
  Serial.print(r, 3);
  Serial.print(',');
  Serial.print(g, 3);
  Serial.print(',');
  Serial.print(b, 3);  
  Serial.print(',');
  Serial.print(c, 3);
  Serial.print(',');
  Serial.print(p, 3);
  Serial.print(',');
  Serial.print(prediction);
  Serial.print(']');
  Serial.println();

  // wait for 1 second after one sampling/prediction
  delay(1000);
  delay(400);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
}
