#include <ESP8266WiFi.h>
#include "FirebaseESP8266.h"

// Credenciales wifi
const char *ssid = "T.Scaletta"; // nombre de la red
const char *password = "1.6860849.1";

// Credenciales Proyecto Firebase
const char *FIREBASE_HOST = "https://teledomofarm-default-rtdb.firebaseio.com";
const char *FIREBASE_AUTH = "fKhm9LvJS7zKVM5YZaCvcMNMaXa3GD2vJvYRlerf";
String path1 = "/Test1";
String path2 = "/Test2";
#define LED1 D0
#define LED2 D1

// Firebase Data object in the global scope
FirebaseData firebaseData;

bool iterar = true;

void setup()
{
  Serial.begin(115200);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
 // pinMode(27,OUTPUT);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(250);
  }
  Serial.print("\nConectado a la red Wi-Fi: ");
  Serial.println(WiFi.localIP());
  Serial.println();

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  Firebase.reconnectWiFi(true);
}

void loop()
{
  String nodo = "teledomofarm";

    // leer datos
    Firebase.getInt(firebaseData, path1 + "/LED1");
     Serial.println("Data= " + String(firebaseData.intData()));
    delay(200);
     if(firebaseData.intData()==1)
     {
      digitalWrite(LED1,HIGH);
    //  digitalWrite(27,LOW);
     }
     else{
     digitalWrite(LED1,LOW);
   //  digitalWrite(27,HIGH);
     }
    Firebase.getInt(firebaseData, path2 + "/LED2");
     if(firebaseData.intData()==1)
     {
      digitalWrite(LED2,HIGH);
    //  digitalWrite(27,LOW);
     }
     else{
     digitalWrite(LED2,LOW);
   //  digitalWrite(27,HIGH);
     }

}
