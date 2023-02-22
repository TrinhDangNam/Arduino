#include <WiFi.h>

const char *ssid = "Nam";
const char *password = "12345670";

void setup()
{
  Serial.begin(115200);
  Serial.print(" ");
  Serial.print("Connecting to wifi.....");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println(" ");
  Serial.println("WiFi connnected.");
  Serial.print("IP address: ");
  Serial.print(WiFi.localIP() );
}

void loop()
{

}