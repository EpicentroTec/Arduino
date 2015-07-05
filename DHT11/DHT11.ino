#include <DHT.h>

#define DHTPIN A1
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
Serial.begin(9600);
dht.begin();
}

void loop() {
int temp = dht.readTemperature();
char recebido;
  recebido = Serial.read();
    if(recebido == 't'){
      Serial.print("Temperatura ");
      Serial.print(temp);
      Serial.println("C°");
      delay(2000);
    }
}


