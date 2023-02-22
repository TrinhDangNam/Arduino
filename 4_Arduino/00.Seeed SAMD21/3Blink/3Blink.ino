void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(PIN_LED2, OUTPUT);
  pinMode(PIN_LED3, OUTPUT);
}
 
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(PIN_LED2, HIGH);
  digitalWrite(PIN_LED3, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(PIN_LED2, LOW);
  digitalWrite(PIN_LED3, LOW);
  delay(1000);
}