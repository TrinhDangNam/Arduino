void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println('a');  // truyền kí tự
}
int i;
void loop() {
  // put your main code here, to run repeatedly:
  for(i=0;i<10;i++)
  {
    Serial.println('a');
    delay(500);
  } 
  
  String k = Serial.readString();   //Nhập từ màn hình
  Serial.print(k);                  // in ra 
  
}
