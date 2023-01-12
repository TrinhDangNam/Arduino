const int ledPwm=2;
const int ledChannel =0;
const int resolution =8;

void setup()
{
  ledcSetup(ledChannel , 500 , resolution);
  ledcAttachPin(ledPwm, ledChannel);
}
void loop()
{
  for(int dutyCycle =0; dutyCycle <=255; dutyCycle++)
  {
    ledcWrite(ledChannel, dutyCycle);
    delay(15);
  }
  for(int dutyCycle =255; dutyCycle >=0; dutyCycle--)
  {
    ledcWrite(ledChannel, dutyCycle);
    delay(15);
  }
}