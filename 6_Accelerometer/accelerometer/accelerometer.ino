#include <Servo.h>

// Create five servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

void setup() {
  // Attach each servo object to a digital pin
  // You can choose any available digital pins, but avoid pins 0 and 1 (Serial communication)
  servo1.attach(8); // Servo 1 connected to digital pin 8
  servo2.attach(9); // Servo 2 connected to digital pin 9
  servo3.attach(10); // Servo 3 connected to digital pin 10
  servo4.attach(11); // Servo 4 connected to digital pin 11
  servo5.attach(12); // Servo 5 connected to digital pin 12
}

void loop() {
  // Move all servos to position 0 degrees
  servo1.write(60);
  servo2.write(60);
  servo3.write(60);
  servo4.write(60);
  servo5.write(60);
  delay(2000); // Wait for 2 seconds

  // Move all servos to position 90 degrees
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
  delay(2000); // Wait for 2 seconds

  // Move all servos to position 180 degrees
  servo1.write(120);
  servo2.write(120);
  servo3.write(120);
  servo4.write(120);
  servo5.write(120);
  delay(2000); // Wait for 2 seconds
}