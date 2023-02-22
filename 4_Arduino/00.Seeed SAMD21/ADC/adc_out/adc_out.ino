int LED = 10; 
int Pot = 2; // Potentiometer 
int Pot_Data = 0; 
void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT); 
pinMode(Pot, INPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
Pot_Data = analogRead(Pot); 
Pot_Data = map(Pot_Data, 0, 1023, 200,3000);   
digitalWrite(LED, HIGH); 
delay(Pot_Data); 
digitalWrite(LED, LOW); 
delay(Pot_Data); 
}