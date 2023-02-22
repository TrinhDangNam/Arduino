#include <Arduino.h>

// const int RX_PIN = 1;
// const int TX_PIN = 0;
// const long BAUD_RATE = 9600;

void setup() {
  //Serial.begin(BAUD_RATE, SERIAL_8N1, RX_PIN, TX_PIN);
  Serial.begin(9600);
  Serial.println("Slave started");
}

void loop() {
  
  if (Serial.available()) {
    String message = Serial.readStringUntil('\n');
    Serial.println("Message received from master: " + message);
  }
}
