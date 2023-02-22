int led=2;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0; i<255; i=i+1)  //dk tang độ sáng của led PWm
{
  analogWrite(led,i);
  delay(10);
}
for(int i=255 ; i>0 ; i=i-1) //dk giảm độ sáng của led
{
  analogWrite(led,i);
  delay(10);
}
delay(1000);
}
