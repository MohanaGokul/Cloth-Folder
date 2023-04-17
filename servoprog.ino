#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;

void setup() {
  servo1.attach(1);
  servo2.attach(2);
  servo3.attach(3);
}

void loop() {
  servo1.write(70);
  delay(500);
  servo1.write(0);
  delay(2000);
  
  servo2.write(70);
  delay(500);
  servo2.write(0);
  delay(2000);
  
  servo3.write(70);
  delay(500);
  servo3.write(0);
  delay(2000);
}



