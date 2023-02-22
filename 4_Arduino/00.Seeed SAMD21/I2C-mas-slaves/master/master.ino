#include <Wire.h>

#define SLAVE_0 0x20
#define SLAVE_1 0x21
#define SLAVE_2 0x22

void setup() {
  Serial.begin(9600);
  Wire.begin();
}

void loop() {
  Wire.beginTransmission(SLAVE_0);
  Wire.write("ok slave_0");
  Wire.endTransmission();
  Serial.print("slave 0----");
  delay(1000);

  Wire.requestFrom(SLAVE_0, 13);
  while (Wire.available()) {
    int data = Wire.read();
    Serial.print(String(data));
  }
  Serial.println();

  Wire.beginTransmission(SLAVE_1);
  Wire.write("ok slave_1");
  Wire.endTransmission();
  Serial.print("slave 1---");
  delay(1000);

  Wire.requestFrom(SLAVE_1, 13);
  while (Wire.available()) {
    char c = Wire.read();
    Serial.print(c);
  }
  Serial.println();

  Wire.beginTransmission(SLAVE_2);
  Wire.write("ok slave_2");
  Wire.endTransmission();
  Serial.print("slave 2----");
  delay(1000);

  Wire.requestFrom(SLAVE_2, 13);
  while (Wire.available()) {
    char c = Wire.read();
    Serial.print(c);
  }
  Serial.println();

  delay(1000);
}
