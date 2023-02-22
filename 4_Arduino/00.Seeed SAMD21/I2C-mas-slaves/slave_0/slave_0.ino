#include <Wire.h>

const int SLAVE_0 = 0x20; // Slave address

void setup() {
  Wire.begin(SLAVE_0);
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
    Serial.println("Data received : " + String(data));
  }
}

void sendData() {
  int data = 42;
  Wire.write(data);
  Serial.println("Data sent to master: " + String(data));
}
