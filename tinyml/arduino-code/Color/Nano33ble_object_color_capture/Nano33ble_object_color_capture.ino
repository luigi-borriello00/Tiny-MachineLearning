#include <Arduino_APDS9960.h>

void setup() {

  Serial.begin(9600);
  while (!Serial) {};

  if (!APDS.begin()) {
    Serial.println("Error initializing APDS9960 sensor.");
  }

  // print the header
  Serial.println("Red,Green,Blue,LightIntensity,Proximity");
}

void loop() {
  int r, g, b, c, p;
  //float sum;

  // wait for proximity and color sensor data
  while (!APDS.colorAvailable() || !APDS.proximityAvailable()) {}

  // read the color and proximity data
  APDS.readColor(r, g, b, c);
  p = APDS.readProximity();

  // print the data in CSV format
  Serial.print(r, 3);
  Serial.print(',');
  Serial.print(g, 3);
  Serial.print(',');
  Serial.print(b, 3);  
  Serial.print(',');
  Serial.print(c, 3);
  Serial.print(',');
  Serial.print(p, 3);
  Serial.println();

  // wait for 1 second after one sampling/prediction
  delay(50);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(10);
  digitalWrite(LED_BUILTIN, LOW);
}
