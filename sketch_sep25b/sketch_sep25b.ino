#include <ESP8266WiFi.h>

const char ssid[]="NodeMCU-ESP8266";
const char password[]="12345678";

//ingresar a 
//192.168.4.1

int PinLED =2;
int estado =LOW;


void setup(){
Serial.begin(115200);

pinMode(PinLED, OUTPUT);
digitalWrite(PinLED,LOW);

server.begin();
WiFi.mode(WIFI_AP);
WiFi.softAP(ssid);

Serial.println();
Serial.print("Direccion IP Access Point - Por defecto: ");
Serial.println(WiFi.softAPIP());
Serial.print("Direccion MAC Access Point");
Serial.println(WiFi.softAPmacAdress());
}

void loop(){
  //comprueba si el cliente haa conectado

  WiFiClient client = server.available();

  if(!client){
    return;
    }

    //espera a que el cliente envia una peticion
    Serial.println("Nuevo Cliente");

      wile(!client.avaible()){
    delay(1);
    }
  }
