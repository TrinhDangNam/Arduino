#include <WiFi.h>

const char*ssid = "Nam";
const char *password = "12345670";

void setup()
{
  Serial.begin(115200);
  WiFi.softAP(ssid , password);
}

void loop()
{

}