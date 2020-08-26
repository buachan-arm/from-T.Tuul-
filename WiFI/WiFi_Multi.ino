#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>

ESP8266WiFiMulti wifiMulti;

const char* ssid1 = "Your SSID1";
const char* password1 = "Your Password1";
const char* ssid2 = "Your SSID2";
const char* password2 = "Your Password2";
const char* ssid3 = "Your SSID3";
const char* password3 = "Your Password3";

void setup() {
  Serial.begin(115200);
  setup_wifi();
}

void loop() {
    //put your loop code here
}

void setup_wifi(){
    Serial.println();
    WiFi.mode(WIFI_STA);
    wifiMulti.addAP(ssid1, password1);
    wifiMulti.addAP(ssid2, password2);
    wifiMulti.addAP(ssid3, password3);

    Serial.print("Connecting ");
    Serial.println(" ...");

    while (WiFi.status() != WL_CONNECTED){
        delay(1000);
        Serial.print(F("."));
        Serial.print(" ");
    }

    Serial.println();
    Serial.print("Connected, to ");
    Serial.println(WiFi.SSID());
    Serial.print("Your IP address is\t");
    Serial.println(WiFi.localIP());
}