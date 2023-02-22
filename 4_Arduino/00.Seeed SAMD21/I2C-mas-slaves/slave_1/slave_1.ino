#include <Wire.h>

const int SLAVE_1 = 0x21; // Slave address

void setup() {
  Wire.begin(SLAVE_1);
  Wire.onReceive(receiveData);
  Wire.onRequest(sendData);
  Serial.begin(9600);
}

void loop() {
  // Nothing to do here
}

void receiveData(int numBytes) {
  while (Wire.available()) {
    int data = Wire.read();
    Serial.println("Data received from master: " + String(data));
  }
}

void sendData() {
  int data = 2;
  Wire.write(data);
  Serial.println("Data sent to master: " + String(data));
}
