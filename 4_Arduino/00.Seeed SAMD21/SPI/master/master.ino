#include <SPI.h>

const int slaveSelectPin = 3;

void setup() {
  // Set the slave select pin as an output and initialize it to high (deselected)
  pinMode(slaveSelectPin, OUTPUT);
  digitalWrite(slaveSelectPin, HIGH);
  // Start the SPI communication
  SPI.begin();
}

void loop() {
  // Select the slave device
  digitalWrite(slaveSelectPin, LOW);
  // Send a byte of data
  SPI.transfer(0x08);
  // Deselect the slave device
  digitalWrite(slaveSelectPin, HIGH);
}
