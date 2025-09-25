#include <Servo.h>

// Create five servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int pos = 0;    // variable to store the servo position

void setup() {
  servo1.attach(8); // Servo 1 connected to digital pin 8
  servo2.attach(9); // Servo 2 connected to digital pin 9
  servo3.attach(10); // Servo 3 connected to digital pin 10
  servo4.attach(11); // Servo 4 connected to digital pin 11
  servo5.attach(12); // Servo 5 connected to digital pin 12
}

void loop() {
  for (pos = 70; pos <= 110; pos += 1) { 
    // in steps of 1 degree
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    servo5.write(pos);
    delay(50);                       
  }
  for (pos = 110; pos >= 70; pos -= 1) { 
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    servo5.write(pos);           
    delay(50);                       
  }
}