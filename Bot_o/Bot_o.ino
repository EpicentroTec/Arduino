#define pressionado true
#define solto false

int botao = 2 , led = 13;
boolean estado;

void setup(){
Serial.begin(9600);
pinMode(botao , INPUT);
}

void loop(){
if(digitalRead(botao) == LOW)
{
  
  delay(20);
  
  if(estado == solto)
  {
    estado = pressionado;
    digitalWrite(led,!digitalRead(led));  
  }
  
}

else
{
  estado = solto;
}

}
