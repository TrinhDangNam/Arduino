//i2c Slave Code(UNO)
#include <Wire.h>
void setup()
{
  Wire.begin(6); // Khởi tạo thư viện i2c địa chỉ 6
  Wire.onReceive(receiveEvent); // khởi tạo chế độ nhận tín hiệu từ boad chủ
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
}
void loop()
{
}
 
void receiveEvent() // hàm sự kiện nhận tín hiệu từ boad chủ
{
  while(Wire.available()) // chờ cho đến khi có tín hiệu
  {
    char c = Wire.read(); // biến c để lưu dữ liệu nhận được
    
    if(c == 'H') // nếu boad chủ gửi về tín hiệu là H
    {
      digitalWrite(13,HIGH); // chân 13 ở mức High  
    }
    else if(c == 'L') // nếu tín hiệu boad chủ gửi về là L
    {
      digitalWrite(13,LOW);// chân 13 ở mức Low
    }
  }
}