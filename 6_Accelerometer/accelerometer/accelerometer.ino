// Read acceleration data from an LIS3DH, use to control a servo position

#include <Wire.h>
#include <SPI.h>
#include <Adafruit_LIS3DH.h>
#include <Adafruit_Sensor.h>

// Used for software SPI
#define LIS3DH_CLK 13
#define LIS3DH_MISO 12
#define LIS3DH_MOSI 11
// Used for hardware & software SPI
#define LIS3DH_CS 10

// Use hardware SPI communications interface
Adafruit_LIS3DH lis = Adafruit_LIS3DH(LIS3DH_CS);

void setup(void) {
  // Configure the serial terminal for 115200 baud
  Serial.begin(115200);
  // will pause Zero, Leonardo, etc until serial console opens
  while (!Serial) delay(10);     

  // Check if an LIS3DH is detected
  if (! lis.begin(0x18)) {   
    Serial.println("Couldnt start - check your wiring!!!");
    while (1) yield();
  }
  Serial.println("LIS3DH found!");

  // Sense from +/- 2 Earth's Gravities / maximum sensitivity
  lis.setRange(LIS3DH_RANGE_2_G);    
  // Sample acceleration 50 times per second     
  lis.setDataRate(LIS3DH_DATARATE_50_HZ);
}

void loop() {
  lis.read();      // get X Y and Z data at once
  // Then print out the raw data
  Serial.print("X:  "); Serial.print(lis.x);
  Serial.print("  \tY:  "); Serial.print(lis.y);
  Serial.print("  \tZ:  "); Serial.print(lis.z);

  /* Or....get a new sensor event, normalized */
  sensors_event_t event;
  lis.getEvent(&event);

  /* Display the results (acceleration is measured in m/s^2) */
  Serial.print("\t\tX: "); Serial.print(event.acceleration.x);
  Serial.print(" \tY: "); Serial.print(event.acceleration.y);
  Serial.print(" \tZ: "); Serial.print(event.acceleration.z);
  Serial.println(" m/s^2 ");

  Serial.println();

  // Wait 20 ms / update rate is 50 Hz
  delay(20);
}