// dk tốc độ led nhấp nháy
int led =9;  //khai báo chân ra của led
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x=analogRead(A0); // Đọc giá trị biến trở lưu vào x ở chân A0
  int y= map(x,0,1023,200,2000);  //Ánh xạ giá trị biến trở từ 0-1023 thành 200-3000
  digitalWrite(led,HIGH);   // dk tốc độ led nhấp nháy
  delay(y);
  digitalWrite(led,LOW);
  delay(y);
  
  //digitalWrite(led,y);   // đk độ sáng
}
