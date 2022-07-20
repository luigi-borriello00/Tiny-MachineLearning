#ifdef PREDICT_VIBRATIONS_ALL
#include <math.h>
#include <PDM.h>
#include <EloquentTinyML.h> // https://github.com/eloquentarduino/EloquentTinyML
#include "Models/NNmodel.h"        // TF Lite model file
#include "TestSet.h"

#define FEATURE_SIZE 60     // sampling size of one voice instance
#define SAMPLE_DELAY 20      // delay time (ms) between sampling

#define NUMBER_OF_LABELS 6                                                                                                  // number of voice labels
const String words[NUMBER_OF_LABELS] = {"0", "1", "2", "3", "4", "5"}; // words for each label

#define PREDIC_THRESHOLD 0.6 // prediction probability threshold for labels
#define RAW_OUTPUT true      // output prediction probability of each label
#define NUMBER_OF_INPUTS FEATURE_SIZE
#define NUMBER_OF_OUTPUTS NUMBER_OF_LABELS
#define TENSOR_ARENA_SIZE 4 * 1024

Eloquent::TinyML::TfLite<NUMBER_OF_INPUTS, NUMBER_OF_OUTPUTS, TENSOR_ARENA_SIZE> tf_model;
float feature_data[FEATURE_SIZE];
volatile float rms;
bool voice_detected;

// callback function for PDM mic
void onPDMdata()
{

  
}

void setup()
{

  Serial.begin(115200);
  while (!Serial)
    ;


  

  pinMode(LED_BUILTIN, OUTPUT);

  // wait 1 second to avoid initial PDM reading
  delay(900);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);

  // start TF Lite model
  tf_model.begin((unsigned char *)model_data);

  Serial.println("=== Classifier start ===\n");
}

void loop()
{

  
  digitalWrite(LED_BUILTIN, HIGH);
  for (int i = 0; i < FEATURE_SIZE; i++)
  { // sampling
    while (rms < 0)
      ;
    feature_data[i] = rms;
    delay(SAMPLE_DELAY);
  }
  digitalWrite(LED_BUILTIN, LOW);

  // predict voice and put results (probability) for each label in the array
  float prediction[NUMBER_OF_LABELS];
  tf_model.predict(feature_data, prediction);

  // print out prediction results;
  // in theory, you need to find the highest probability in the array,
  // but only one of them would be high enough over 0.5~0.6
  Serial.println("Predicting the word:");
  if (RAW_OUTPUT)
  {
    for (int i = 0; i < NUMBER_OF_LABELS; i++)
    {
      Serial.print("Label ");
      Serial.print(i);
      Serial.print(" = ");
      Serial.println(prediction[i]);
    }
  }
  bool word_detected = false;
  for (int i = 0; i < NUMBER_OF_LABELS; i++)
  {
    if (prediction[i] >= PREDIC_THRESHOLD)
    {
      Serial.print("Word detected: ");
      Serial.println(words[i]);
      Serial.println("");
      word_detected = true;
    }
  }
  if (!word_detected && !RAW_OUTPUT)
    Serial.println("Word not recognized\n");

  // wait for 1 second after one sampling/prediction
  delay(900);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
}

#endif