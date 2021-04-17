#include <arduino.h>

#define Led 8 //Pin del led
#define Pot 0 //Pin del potenciometro

float Medida = 0;
int Lectura = 0;

void setup()
{
  pinMode(8, OUTPUT);
}

void loop()
{
  Lectura = analogRead(Pot); //Lectura
  Medida = (Lectura * 255)/1023; //Conversion 
  digitalWrite(Led, Medida); //El led se enciende
  delay(50); //Pequeña espera
}
