
int button = 11;
int leds = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(button,INPUT);
  pinMode(leds,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(digitalRead(button)==0)  //ktra trạng thái nút nhấn
  {
    digitalWrite(leds,1);  
  }
  else 
    digitalWrite(leds,0);
}
