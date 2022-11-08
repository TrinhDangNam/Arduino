/*      Đo tốc độ ánh sáng
int quangtro=A0;  // thiết lập chân ânlog đọc giá trị quang trở
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);  //cổng serial =9600
}

void loop() {
  // put your main code here, to run repeatedly:
int x= analogRead(quangtro);  //đọc giá trị quang trở
Serial.println(x);      //xuất giá trị
delay(300);
}
*/

      //Điều khiển bật tắt bàng cảm biến ánh sáng
int quangtro=A0;  // thiết lập chân ânlog đọc giá trị quang trở
int led=8; 
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
int x= analogRead(quangtro);  //đọc giá trị quang trở
if(x > 400) digitalWrite(led,1);  //giá trị ngưỡng của cảm biến đèn sáng( từ 0-772--đã đo đc ở trên)
else digitalWrite(led,0);
delay(200);
}
