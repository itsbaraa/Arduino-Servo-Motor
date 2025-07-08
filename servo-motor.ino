#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int pos = 0;

void setup() {
  Serial.begin(9600); // Start the serial communication
  servo1.attach(13);
  servo2.attach(12);
  servo3.attach(11);
  servo4.attach(10);
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);

    // Print current position of each servo
    Serial.print("Servo1: ");
    Serial.print(pos);
    Serial.print(" | Servo2: ");
    Serial.print(pos);
    Serial.print(" | Servo3: ");
    Serial.print(pos);
    Serial.print(" | Servo4: ");
    Serial.println(pos);

    delay(10);
  }

  for (pos = 180; pos >= 0; pos -= 1) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);

    // Print current position of each servo
    Serial.print("Servo1: ");
    Serial.print(pos);
    Serial.print(" | Servo2: ");
    Serial.print(pos);
    Serial.print(" | Servo3: ");
    Serial.print(pos);
    Serial.print(" | Servo4: ");
    Serial.println(pos);

    delay(10);
  }
}
