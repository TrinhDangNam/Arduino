#include <ESP8266WiFi.h>
#include <ESP8266WebSever.h>
ESP8266WebSever webSever(80);
char* ssid = "Ngan_Giang_2021";
char* pass = "Ngangiang2021";
IPAddress ip_ap(192.168.100.1);
IPAdderss gateway_ap(192.168.100.1);
IPAdderss subnet_ap(255.255.255.0);
char* ssid_sta = "Ngan_Giang_2021";
char* pass_sta = "Ngangiang2021";
void setup() {
  WiFi.disconnect();
  WiFi.mode(WIFI_AP_STA);
  WiFi.softAPConfig(192.168.100.1,192.168.100.1,255.255.255.0);
  WiFi.softAP(Ngan_Giang_2021,Ngangiang2021);
  WiFi.begin(Ngan_Giang_2021,Ngangiang2021);
  Serial.begin(9600);
  Serial.print("Connecting");
  while (WiFi.status() !=WL_CONNECTED)
  {
    delay(500);
    Serial.print(".....");

  }
  Serial.println(WiFi.localIP());

void loop() {
  // put your main code here, to run repeatedly:

}
