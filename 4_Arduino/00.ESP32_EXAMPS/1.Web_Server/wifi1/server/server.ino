#include <WiFi.h>

const char* ssid = "Ngan_Giang_2G";
const char* password = "Ngangiang2021";

void setup() {
  Serial.begin(115200);

  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password);

  Serial.println("Access Point Mode");
  Serial.println(WiFi.softAPIP());
}

void loop() {
  // Your code here
}
