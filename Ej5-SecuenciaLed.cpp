#include <arduino.h>

#define pulsador1 9
#define pulsador2 8
unsigned int x=2;

void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,INPUT_PULLUP);
  pinMode(8,INPUT_PULLUP);
}

void loop()
{
  if(digitalRead(pulsador1))
  {
    x=0;
  }
  
  if(x==0)
  {
    derecha();
  }
  
  if(digitalRead(pulsador2))
  {
    x=1;
  }
  
  if(x==1)
  {
    izquierda();
  }
}

int derecha()  {
  
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);    
  delay(500);

  if(digitalRead(pulsador2))
  {
    x=1;
    return (0);
  }
    
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);    
  delay(500);

  if(digitalRead(pulsador2))
  {
    x=1;
    return (0);
  }
    
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);    
  delay(500);

  if(digitalRead(pulsador2))
  {
    x=1;
    return (0);
  }
  
}

int izquierda()  {
  
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);    
  delay(500);

  if(digitalRead(pulsador1))
  {
    x=0;
    return (0);
  }
      
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);    
  delay(500);

  if(digitalRead(pulsador1))
  {
    x=0;
    return (0);
  }
    
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);    
  delay(500); 

  if(digitalRead(pulsador1))
  {
    x=0;
    return (0);
  }
  
}