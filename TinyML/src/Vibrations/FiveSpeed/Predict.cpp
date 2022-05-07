  /*
 * Voice classifier for Arduino Nano 33 BLE Sense by Alan Wang
 */

#include <math.h>
#include <Arduino_LSM9DS1.h>
#include <EloquentTinyML.h>      // https://github.com/eloquentarduino/EloquentTinyML
#include "NNmodel.h"       // TF Lite model file

#define SAMPLE_THRESHOLD   900   // RMS threshold to trigger sampling
#define FEATURE_SIZE       60    // sampling size of one voice instance
#define SAMPLE_DELAY       20    // delay time (ms) between sampling

#define NUMBER_OF_LABELS   5     // number of voice labels
const String words[NUMBER_OF_LABELS] = {"1", "2", "3", "4", "5"};  // array of labels from 1 to 5


#define PREDIC_THRESHOLD   0.6   // prediction probability threshold for labels
#define RAW_OUTPUT         true  // output prediction probability of each label
#define NUMBER_OF_INPUTS   FEATURE_SIZE
#define NUMBER_OF_OUTPUTS  NUMBER_OF_LABELS
#define TENSOR_ARENA_SIZE  4 * 1024



Eloquent::TinyML::TfLite<NUMBER_OF_INPUTS, NUMBER_OF_OUTPUTS, TENSOR_ARENA_SIZE> tf_model;
float feature_data[FEATURE_SIZE];


void setup() {

  Serial.begin(115200);
  while (!Serial);

  pinMode(LED_BUILTIN, OUTPUT);

  // wait 1 second to avoid initial PDM reading
  delay(900);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);

  // start TF Lite model
  tf_model.begin((unsigned char*) model_data);
  
  Serial.println("=== Classifier start ===\n");
}

void loop() {

  float accel_x, accel_y, accel_z;
  float gyro_x, gyro_y, gyro_z;
  float mag_x, mag_y, mag_z;

  // Collect 60 samples of x, y, z acceleration
  for (int i = 0; i < FEATURE_SIZE; i = i + 3) { // loop for 60 samples
    delay(SAMPLE_DELAY);
    if (IMU.accelerationAvailable()) {
      IMU.readAcceleration(accel_x, accel_y, accel_z);
      feature_data[i] = accel_x;
      feature_data[i + 1] = accel_y;
      feature_data[i + 2] = accel_z;
    }
  }
  // predict vibrations and put results (probability) for each label in the array
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
  for (int i = 0; i < NUMBER_OF_LABELS; i++) {
    if (prediction[i] >= PREDIC_THRESHOLD) {
      Serial.print("Label detected: ");
      Serial.println(words[i]);
      Serial.println("");
    }
  }

  // wait for 1 second after one sampling/prediction
  delay(900);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
}
