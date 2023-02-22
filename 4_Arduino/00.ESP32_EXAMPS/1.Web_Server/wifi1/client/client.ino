#include <WiFi.h>

const char* ssid = "Ngan_Giang_2G";
const char* password = "Ngangiang2021";

void setup() {
  Serial.begin(115200);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  Serial.println("Connected ");
  Serial.println(WiFi.softAPIP());
  Serial.println(WiFi.localIP());
}

void loop() {
  // Your code here
}
