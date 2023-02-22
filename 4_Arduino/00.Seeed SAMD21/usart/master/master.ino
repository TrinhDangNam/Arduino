#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  Serial.println("Master started");
}

void loop() {
  Serial.println("Sending message from master");
  delay(1000);
}
