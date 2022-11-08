#include <LiquidCrystal.h>
#include "DHT.h"

// Khởi tạo LCD
LiquidCrystal lcd(5, 6, 7, 8, 9, 10, 11);

// Khởi tạo DHT
DHT dht(2, DHT11);

// Hàm khởi tạo
void setup() {
  // LCD 16 ký tự, 2 dòng
  lcd.begin(16, 2);
  // Khởi tạo DHT
  dht.begin();
}

// Hàm lặp vô hạn
void loop() {
  // Hiển thị ký tự T và H
  lcd.setCursor(0, 0);
  lcd.print("T=");
  lcd.setCursor(0, 1);
  lcd.print("H=");

  // Đọc nhiệt độ và độ ẩm từ DHT
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  // Hiển thị nhiệt độ
  lcd.setCursor(2, 0);
  lcd.print(t);
  lcd.write(0xDF); // In Ký tự độ
  lcd.print("     "); // Xóa ký tự thừa

  // Hiển thị độ ẩm
  lcd.setCursor(2, 1);
  lcd.print(h);
  lcd.print("%");
  lcd.print("     ");

  delay(2000);
}