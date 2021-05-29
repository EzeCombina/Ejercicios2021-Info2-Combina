#include <Arduino.h>
#include <SPI.h>
#include <SD.h>

#define sd 4   // Pin de la sd

struct sensores{

  uint32_t tiempo;
  int16_t valor;
  char tipo;

};

File Tsd;
int Cantidad = 0;
  
#define sd    4
#define Loop  1  // Cantidad de datos que se van a tomar (En este caso 1)

struct sensor{

    unsigned long tiempo;   
    float valor;
    char tipo;              // Tipo de sensor

};

void setup() {
    
  Serial.begin(9600);
  Serial.println("Iniciando tarjeta SD");
  if (!SD.begin(sd))
  {
    Serial.println("Error con la tarjeta SD");
    while (1);
  }
  Serial.println("Tarjeta iniciada");

}

void loop() {

  struct sensor resultados;

  resultados.tipo = 'T';
  resultados.valor = 15;	
  resultados.tiempo = 550;

  Tsd = SD.open("ejercicio13.dat");

  if (Tsd)
  {
    Serial.println("Escribiendo");

    Tsd.println(resultados.tipo);
    Tsd.println(resultados.valor);
    Tsd.println(resultados.tiempo);

    Tsd.close();

    Serial.println("Listo");
  }      

  else
  {
    Serial.println("Error abriendo el archivo");
    while(1);
  }

  Cantidad++;

  if(Cantidad >= Loop) 
  {
    Serial.println("Programa finalizado, reinicie para volver a ejectuar");
    exit(0);  
  }
}