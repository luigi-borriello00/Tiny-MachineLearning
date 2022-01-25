#include <Arduino_LSM9DS1.h>

void setup() {

  Serial.begin(9600);
  while (!Serial) {};

  if (!IMU.begin()) {
    Serial.println("Error initializing IMU sensor.");
  }

  // print the header
  Serial.println("x,y,z");
}

void loop() {
  float accel_x, accel_y, accel_z;
  float gyro_x, gyro_y, gyro_z;
  float mag_x, mag_y, mag_z;

 // Accelerometer values 
  if (IMU.accelerationAvailable()) {
    IMU.readAcceleration(accel_x, accel_y, accel_z);
    //Serial.print("Accelerometer = "); 
    Serial.print(accel_x); Serial.print(","); Serial.print(accel_y); Serial.print(","); Serial.println(accel_z);
  }
  
  // wait for 1 second after one sampling/prediction
  delay(25);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(25);
  digitalWrite(LED_BUILTIN, LOW);
}
