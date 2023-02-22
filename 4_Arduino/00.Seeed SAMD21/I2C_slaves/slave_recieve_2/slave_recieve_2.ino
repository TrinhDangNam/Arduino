// Wire Slave Receiver
// by Nicholas Zambetti <http://www.zambetti.com>

// Demonstrates use of the Wire library
// Receives data as an I2C/TWI slave device
// Refer to the "Wire Master Writer" example for use with this

// Created 29 March 2006

// This example code is in the public domain.


#include <Wire.h>

void setup()
{
  Wire.begin(4);                // join i2c bus with address #4
  Wire.onReceive(receiveEvent); // register event
  Serial.begin(9600);           // start serial for output
}

void loop()
{
  delay(100);
    while( Wire.available()>0) // loop through all but the last
  {
    char c = Wire.read(); // receive byte as a character
    Serial.print(c);         // print the character
  }
}

// function that executes whenever data is received from master
// this function is registered as an event, see setup()
void receiveEvent(int howMany)
{
  (void)howMany; // avoid compiler warning about unused parameter

  while( Wire.available()>0) // loop through all but the last
  {
    char c = Wire.read(); // receive byte as a character
    Serial.print(c);         // print the character
  }
   int x = Wire.read();    // receive byte as an integer
   Serial.println(x);         // print the integer

  //  // Gửi yêu cầu đến chế độ slave có địa chỉ 0x08
  // Wire.beginTransmission(0x08);
  // // Gửi dữ liệu là giá trị của biến "data"
  // int data = 123;
  // Wire.write(data);
  // // Kết thúc yêu cầu gửi dữ liệu
  // Wire.endTransmission();

  // // Chờ trả lời từ chế độ slave
  // Wire.requestFrom(0x08, 2);
  // // Nếu có trả lời từ chế độ slave
  // if (Wire.available() >= 2) {
  //   // Đọc dữ liệu trả lời
  //   int response1 = Wire.read();
  //   int response2 = Wire.read();
  //   // In ra cổng Serial dữ liệu trả lời
  //   Serial.print("Response 1: ");
  //   Serial.println(response1);
  //   Serial.print("Response 2: ");
  //   Serial.println(response2);
  // }
}
