int rele = 11;

void setup() {
Serial.begin(9600);
delay(1000);
pinMode(rele,OUTPUT);
}

void loop() {
  if (Serial.available()){
  char rec = Serial.read();
  int valor = 0;
  
    if(rec == 'l'){
    valor = analogRead(1);
      if(valor < 10){
      digitalWrite(rele,HIGH);
      Serial.print(" Luminosidade ");
      Serial.print(valor );
      Serial.println(" A lampada esta Ligada ");
      }

        else {
        digitalWrite(rele,LOW);
        Serial.print(" Luminosidade ");
        Serial.print(valor );
        Serial.println(" A lampada esta desligada ");
        }
    }
  }
}
