#include <Arduino.h>

void setup() {
  DDRD = DDRD | B11111111;                        
}

byte led;

void loop() {
  for(led = B00000001; led <= B10000000; led = led<<1)
  {
    PORTD = led;
    delay(1000);    
  }
}