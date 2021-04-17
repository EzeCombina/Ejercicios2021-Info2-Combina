#include <Arduino.h>

#define Led 8 //Pin del led
#define Pot 0 //Pin del potenciometro

void setup()
{
  pinMode(Led, OUTPUT);
}

void loop()
{
  analogWrite(Led, analogRead(Pot)/4); //El led se enciende luego de leer el potenciometro y de realizar la conversion
  delay(50); //Pequeña espera
}