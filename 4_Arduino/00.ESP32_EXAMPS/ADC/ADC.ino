const int potPin 13
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
potValue = analogRead(potPin);
Serial.println(potValue);
delay(500);
}
