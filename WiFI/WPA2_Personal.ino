#include <ESP8266WiFi.h>

const char* ssid = "Your SSID";
const char* password = "Your Password";

void setup() {
  Serial.begin(115200);
  setup_wifi();
}

void loop() {
    //Put your loop code here
}

void setup_wifi(){
    Serial.println();
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, password);
    Serial.print(F("Connecting to "));
    Serial.print(ssid);

    while (WiFi.status() != WL_CONNECTED){
        delay(1000);
        Serial.print(F("."));
        Serial.print(" ");
    }

    Serial.println();
    Serial.print(F("Connected, Your IP is "));
    Serial.println(WiFi.localIP());
}