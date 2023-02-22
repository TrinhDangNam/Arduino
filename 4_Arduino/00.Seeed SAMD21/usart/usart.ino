int led =3;
void setup() {
  Serial.begin(9600); 
  pinMode(led,OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    String incomingString = Serial.readString();
    Serial.print("Received: " + incomingString);
  }
  /*if(Serial.readString()= 'on')
  {
    digitalWrite(led, 1);
  }
  if(Serial.readString()= 'off')
  {
    digitalWrite(led,0);
  }
  else Serial.println("Linh dau buoi");
  */
}
