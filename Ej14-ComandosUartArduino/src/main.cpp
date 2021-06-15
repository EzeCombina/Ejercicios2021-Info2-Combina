#include <Arduino.h>

#define LED 13

String datosRecibidos;

void setup()
{
  Serial.begin(9600);   //Inicializa el puerto  serie a 115200 baudios
  pinMode(LED,OUTPUT);
}

void loop()
{
  if(Serial.available()>0)      //Procede a la lectura solo si hay datos disponibles en el buffer
  {
    datosRecibidos = Serial.readString();

    Serial.print("OK");
    Serial.println(datosRecibidos);

    if(datosRecibidos == "E")   //Si el comando recibido es E enciende el led, si es A lo apaga
    {
      digitalWrite(LED, HIGH);
    }
    else if (datosRecibidos == "A")
    {
      digitalWrite(LED, LOW);
    }
  }
}