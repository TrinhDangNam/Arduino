void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println('a');  // truyền kí tự
}

void loop() {
  // put your main code here, to run repeatedly:
  
  String k = Serial.readString();   //Nhập từ màn hình
   
  Serial.print(k);                  // in ra 
  
}
