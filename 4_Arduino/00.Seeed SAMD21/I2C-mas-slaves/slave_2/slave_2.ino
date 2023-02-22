#include <Wire.h>

const int SLAVE_2 = 0x22; // Slave address

void setup() {
  Wire.begin(SLAVE_2);
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
    Serial.println("Receive to master " + String(data));
  }
}

void sendData() {
  int data = 8;
  Wire.write(data);
  Serial.println("Sent to master: " + String(data));
}
