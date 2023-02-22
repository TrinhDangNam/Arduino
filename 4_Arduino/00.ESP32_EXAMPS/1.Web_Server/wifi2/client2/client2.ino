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

  Serial.println("Connected ");

  if (client.connect("192.168.100.12", 80)) {  //dia chi mang bat dc tu server NganGiang2021: 192.168.100.1, địa chỉ local phia bên server là 100.12
    Serial.println("Connected to server");
    Serial.println(WiFi.localIP());
    client.print("Hello from the client ESP32");
  } else {
    Serial.println("Connection to server failed");
    Serial.println(WiFi.localIP());
  }
}

void loop() {
  // Your code here
}
