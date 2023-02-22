#include <SPI.h>

const int slaveSelectPin = 3;

void setup() {
  // Start the SPI communication
  SPI.begin();
  // Set the slave select pin as an input
  pinMode(slaveSelectPin, INPUT);
}

void loop() {
  // Check if the slave is selected
  if (digitalRead(slaveSelectPin) == LOW) {
    // Read the incoming data
    int incomingByte = SPI.transfer(0x08);
    // Do something with the incoming data
  }
}
