#include <Servo.h>
Servo k;  //khai báo biến co servo
void setup() {
  // put your setup code here, to run once:
k.attach(11);  //chan gan 11

}

void loop() {
  // put your main code here, to run repeatedly:
int val=analogRead(A0);  //chân tín hiệu(chân giữa) nối vs pin A0
val =map(val,0,1023,0,180);  //mã giá trị analog chuyển đổi của biến trở từ 0-180độ
k.write(val);
delay(50);
}
