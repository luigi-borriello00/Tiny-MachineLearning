/*
 * Voice classifier for Arduino Nano 33 BLE Sense by Alan Wang
 */

#include <math.h>
#include <PDM.h>
#include <EloquentTinyML.h>      // https://github.com/eloquentarduino/EloquentTinyML
#include "s/RF.h"            // RF model file


#define PDM_SOUND_GAIN     255   // sound gain of PDM mic
#define PDM_BUFFER_SIZE    256   // buffer size of PDM mic

#define SAMPLE_THRESHOLD   200   // RMS threshold to trigger sampling
#define FEATURE_SIZE       32    // sampling size of one voice instance
#define SAMPLE_DELAY       20     // delay time (ms) between sampling

#define NUMBER_OF_LABELS   6     // number of voice labels
const String words[NUMBER_OF_LABELS] = {"500", "1000", "1500", "2000", "2500", "3000"};  // words for each label
#define NUMBER_OF_LABELS    11     // number of voice labels


#define NUMBER_OF_INPUTS   FEATURE_SIZE
#define NUMBER_OF_OUTPUTS  NUMBER_OF_LABELS
#define TENSOR_ARENA_SIZE  4 * 1024


Eloquent::ML::Port::RandomForest model;
float feature_data[FEATURE_SIZE];
volatile float rms;
bool voice_detected;

// callback function for PDM mic
void onPDMdata() {

  rms = -1;
  short sample_buffer[PDM_BUFFER_SIZE];
  int bytes_available = PDM.available();
  PDM.read(sample_buffer, bytes_available);

  // calculate RMS (root mean square) from sample_buffer
  unsigned int sum = 0;
  for (unsigned short i = 0; i < (bytes_available / 2); i++) sum += pow(sample_buffer[i], 2);
  rms = sqrt(float(sum) / (float(bytes_available) / 2.0));
}

void setup() {
  
  Serial.begin(115200);
  while (!Serial);
  PDM.onReceive(onPDMdata);
  PDM.setBufferSize(PDM_BUFFER_SIZE);
  PDM.setGain(PDM_SOUND_GAIN);

  if (!PDM.begin(1, 16000)) {  // start PDM mic and sampling at 16 KHz
    Serial.println("Failed to start PDM!");
    while (1);
  }

  pinMode(LED_BUILTIN, OUTPUT);

  // wait 1 second to avoid initial PDM reading
  delay(900);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  
  Serial.println("=== Classifier start ===\n");
}

void loop() {

  // waiting until sampling triggered
  while (rms < SAMPLE_THRESHOLD);

  digitalWrite(LED_BUILTIN, HIGH);
  for (int i = 0; i < FEATURE_SIZE; i++) {  // sampling
    while (rms < 0);
    feature_data[i] = rms;
    delay(SAMPLE_DELAY);
  }
  digitalWrite(LED_BUILTIN, LOW);

  
  Serial.print("[[");
  for (unsigned short i = 0; i < FEATURE_SIZE; i++) {
      Serial.print(feature_data[i]);
      Serial.print(", ");
  }
  Serial.print("],");

  // predict voice and put results (probability) for each label in the array
  int prediction;
  prediction = rf_model.predict(feature_data);

  // print out prediction results;
  // in theory, you need to find the highest probability in the array,
  // but only one of them would be high enough over 0.5~0.6
  Serial.print("Predicting the Frequency: ");
  Serial.println(words[prediction]);
  Serial.println("],");

  // wait for 1 second after one sampling/prediction
  delay(900);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
}
