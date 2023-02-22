//i2c Master Code(UNO)
#include <Wire.h>
void setup()
{
  Serial.begin(9600);
  Wire.begin(); // Khởi tạo thư viện i2c
}
 
void loop()
{
  while(Serial.available()) // đợi cho đến khi serial có tín hiệu
  {
    char c = Serial.read(); // gán biến c đọc dữ liệu trong serial
    
    if(c == 'H') //nếu c= "H"
    {
      Wire.beginTransmission(6); // Bắt đầu truyền dữ liệu về địa chỉ số 6
      Wire.write('H'); // Truyền ký tự H
      Wire.endTransmission(); // kết thúc truyền dữ liệu
    }
    else if(c == 'L') // Nếu c = "L"
    {
      Wire.beginTransmission(6); // Bắt đầu truyền dữ liệu về địa chỉ sô 6
      Wire.write('L'); // Truyền ký tự L
      Wire.endTransmission();// Kết thúc truyền dữ liệu
    }
  }
}