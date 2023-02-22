#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_RESET 4
#define LOGO16_GLCD_HEIGHT 16
#define LOGO16_GLCD_WIDTH 16
#if (SSD1306_LCDHEIGHT != 32)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif
Adafruit_SSD1306 display(OLED_RESET);
int time_run = 0;
void setup()
{
Serial.begin(9600);
display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
display.display();
delay(2000);
display.clearDisplay();
display.setTextSize(1);
display.setTextColor(WHITE);
display.setCursor(0, 0);
display.println("Hello, world!");
display.println("               ");
display.println("Hi, Linh dau buoi");
display.display();
delay(2000);

}
void loop()
{
int hour_run, min_run, sec_run;
delay(100);
time_run ++;
hour_run = time_run / 3600;
min_run = (time_run % 3600) / 60;
sec_run = time_run % 60;
display.clearDisplay();
display.setCursor(0, 0);
display.println(String(hour_run) + ":" + String(min_run) + ":" + String(sec_run));
display.display();
}