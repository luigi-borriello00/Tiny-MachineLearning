#ifdef PREDICT_GESTURES_2LABELS

#include <math.h>
#include <EloquentTinyML.h> // https://github.com/eloquentarduino/EloquentTinyML
#include "Models/NNmodel.h" // TF Lite model file
#include <Arduino_LSM9DS1.h>
#include "../vector3d.h"

#define NUMBER_OF_LABELS 2                         // number of voice labels
const String words[NUMBER_OF_LABELS] = {"O", "I"}; // words for each label
#define FEATURE_SIZE 42                            // number of features

#define PREDIC_THRESHOLD 0.6 // prediction probability threshold for labels
#define RAW_OUTPUT true      // output prediction probability of each label
#define NUMBER_OF_INPUTS FEATURE_SIZE
#define NUMBER_OF_OUTPUTS NUMBER_OF_LABELS
#define TENSOR_ARENA_SIZE 4 * 1024
#define N_VECTORS 14
#define TIME_BETWEEN_VECTORS 200
#define TIME_BETWEEN_SAMPLES 2000
#define N_DIM 3
#define N_SAMPLES 30

Eloquent::TinyML::TfLite<NUMBER_OF_INPUTS, NUMBER_OF_OUTPUTS, TENSOR_ARENA_SIZE> tf_model;

int cycle = 0;
int countSamples = 0;
float features[FEATURE_SIZE];
vector3d *lastPos = new vector3d();

void setup()
{

    Serial.begin(9600);
    tf_model.begin((unsigned char *)model_data);
    while (!Serial)
    {
    };

    if (!IMU.begin())
    {
        Serial.println("Error initializing IMU sensor.");
    }

    // print the header
    Serial.println("x,y,z");
}

void loop()
{
    // For 30 samples, calculate the vectors and print them to the serial port
    if (countSamples++ < N_SAMPLES)
    {
        float accel_x, accel_y, accel_z;
        // The first time, we need to initialize the vectors
        if (cycle++ > 0)
        {
            digitalWrite(LEDG, HIGH);
            Serial.println("Scanning...");
            for (int j = 0; j < N_VECTORS; j++)
            {
                if (IMU.accelerationAvailable())
                {
                    IMU.readAcceleration(accel_x, accel_y, accel_z);
                }
                vector3d *vector = new vector3d(accel_x, accel_y, accel_z);
                float *distance = new float[N_DIM];
                distance = vector->calculateDistance3d(lastPos);
                // add distance to the features array
                for (int i = 0; i < N_DIM; i++)
                {
                    features[j * N_DIM + i] = distance[i];
                }

                delay(TIME_BETWEEN_VECTORS);
            }
            // predict the label
            float prediction[NUMBER_OF_LABELS];
            tf_model.predict(features, prediction);
            // print out prediction results;
            // in theory, you need to find the highest probability in the array,
            // but only one of them would be high enough over 0.5~0.6

            // find index of max value in prediction array
            float max_value = prediction[0];
            int max_index = 0;
            Serial.println("Prediction:");
            for (int j = 0; j < NUMBER_OF_LABELS; j++)
            {
                Serial.print(words[j]);
                Serial.print(": ");
                Serial.println(prediction[j]);
                if (prediction[j] > max_value)
                {
                    max_value = prediction[j];
                    max_index = j;
                }
            }
            // add max_index to the array of predicted labels
            Serial.print("Predicted label: ");
            Serial.println(words[max_index]);
            digitalWrite(LEDG, LOW);
            cycle = 0;
        }
        else
        {
            if (IMU.accelerationAvailable())
            {
                IMU.readAcceleration(accel_x, accel_y, accel_z);
            }
        }
        vector3d *lastPos = new vector3d(accel_x, accel_y, accel_z);
        digitalWrite(LEDR, HIGH);
        delay(TIME_BETWEEN_SAMPLES);
        digitalWrite(LEDR, LOW);
    }
}

#endif