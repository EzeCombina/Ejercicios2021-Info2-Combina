#include <arduino.h>

#define Led 8 //Pin del led
#define Luz 0 

void setup()
{
  pinMode(Led, OUTPUT);
}

void loop()
{
  analogWrite(Led, analogRead(Luz)/4);
  delay(50);
}