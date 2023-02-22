#include <WiFi.h>

const char* ssid = "Ngan_Giang_2021";
const char* password = "Ngangiang2021";

WiFiClient client;

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  Serial.println("Connected to WiFi");

  if (client.connect("192.168.100.13", 80)) {  //dia chi mang bat dc tu server NganGiang2021: 192.168.100.1, địa chỉ local phia bên server là 100.12/13
    Serial.println("Connected to server");
    client.print("Hello Linh dau buoi cua toi");
  } else {
    Serial.println("Connection to server failed");
  }
}

void loop() {
  // Your code here
}
