#include <WiFi.h>
#include <WebServer.h>

const char *ssid ="Ngan_Giang_2G";
const char *pass ="Ngangiang2021";
WebServer myserver(80);

void setup()
{
  Serial.begin(115200);
  pinMode(2, OUTPUT);
  
  WiFi.softAP(ssid,pass);
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());
  myserver.on("/", handle_connect);
  myserver.on("hello ", handle_hello);
  myserver.begin();

}
void loop()
{
  myserver.handleClient();

}
String html ="<p style=\"text-align: center;\">ESP32 WEBSERVER</p> <p style=\"text- align: center;\">AP-MODE</p> <p style=\"text-align: center;\">DEVIOT</p> <p></p>";

void handle_connect()
{
  Serial.println("HTTP Request");
  myserver.send(200, "text/html",html);
}

void handle_hello()
{
  Serial.println("HTTP Request");
  myserver.send(200, "text/plain", "hello Linh tot");

}

