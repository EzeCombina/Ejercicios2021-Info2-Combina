#include <Arduino.h>

//Para display 8x6

void setup() {
  DDRD = DDRD | B11111111;     
  DDRB = DDRB | B00111111;                   
}

byte ledc, ledf;

void loop() {
  for(ledf = B00000001; ledf <= B10000000; ledf = ledf<<1)
  {
    PORTD = ~ledf;

    for(ledc = B00000001; ledc <= B00100000; ledc = ledc<<1)
    {
      PORTB = ledc;
      delay(500); 
    }    
  }
}