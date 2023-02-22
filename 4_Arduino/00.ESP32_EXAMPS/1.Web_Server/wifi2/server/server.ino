#include <WiFi.h>

const char* ssid = "Ngan_Giang_2021";
const char* password = "Ngangiang2021";

WiFiServer server(80);//cổng kết nối

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println(WiFi.localIP());  //in ra địa chỉ local 

  Serial.println("Connected to WiFi");

  server.begin();
  Serial.println("Server started");
}

void loop() {
  WiFiClient client = server.available();
  if (client) {
    Serial.println("New client connected");
    while (client.connected()) {
      if (client.available()) {
        String data = client.readStringUntil('\n');
        Serial.println("Received: " + data);  //bật hercules để truyển nhận nhé
      }
    }
    client.stop();
    Serial.println("Client disconnected");
  }
}
