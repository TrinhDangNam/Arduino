
void setup() {
  // put your setup code here, to run once:
int i;
for(i=2;i<10;i++) // khai bao chan tu so 2-9
{
  pinMode(i,OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
int j;
for(j=2;j<10;j++)  //lan luot bat tat den
{
  digitalWrite(j,1);
  delay(200);
  digitalWrite(j,0);
  delay(200);
}
}
