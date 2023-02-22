#include <LiquidCrystal.h>
LiquidCrystal lcd (12,11,5,4,3,2);  //khởi tạo chân Lcd (RS,E,D4,D5,D6,D7)

// Tạo ký tự đặc biệt 
//https://maxpromer.github.io/LCD-Character-Creator/
byte customChar[]=
{
 B00000,
  B01010,
  B11111,
  B11111,
  B01110,
  B00100,
  B00000,
  B00000  
};
void setup() {
  // put your setup code here, to run once:
 
lcd.begin(16,2); //thiết lập lcd 16x2
lcd.print("Linh Dau  Buoi");
lcd.clear();
lcd.setCursor(2,1); //Đặt con trỏ ở cột 2dòng 1
                  // cột (0-15) hàng (0-1)
lcd.print("I am from VN");
delay(1000);

/*lcd.begin(16, 2);
lcd.createChar(0, customChar);  //hàm tạo ra ký tỵ đặc biệt
lcd.setCursor(7,0);
lcd.write(byte(0));
*/
}

void loop() {
  // put your main code here, to run repeatedly:
/*lcd.clear();  // xóa mà hình
delay(200);
lcd.print("Trinh Dang Nam");//in chữ
delay(1000); 
lcd.clear();
lcd.print("Linh Dau Buoi");
delay(1000);
*/
/*lcd.home();// đưa con trở lên trên cùng góc trái màn hình , xuất ra xóa từ góc trái
lcd.print("Helo Word");*/

/*lcd.clear();
lcd.setCursor(4,0);
lcd.print(100,HEX);
delay(1000);
lcd.setCursor(4,1);
lcd.print(100,BIN);
delay(1000);
*/

/*lcd.cursor();// nhấp nháy con trỏ kiểu chân
delay(500);
lcd.noCursor();
delay(500);
lcd.blink();//nhấp nháy trỏ kiểu khối
lcd.display();
delay(200);
lcd.noDisplay();
delay(500);
*/

/*lcd.scrollDisplayLeft();
delay(100);
*/
lcd.scrollDisplayRight();
delay(500);


}
