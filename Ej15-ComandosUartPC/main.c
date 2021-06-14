/**************************************************

file: main.c
purpose: simple demo that receives characters from
the serial port and print them on the screen,
exit the program by pressing Ctrl-C

compile with the command: gcc main.c rs232.c -Wall -Wextra -o2 -o ejercicio15

**************************************************/

#include <stdlib.h>
#include <stdio.h>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include "rs232.h"



int main()
{
  int n, Puerto = 6, Velocidad = 115600;       

  unsigned char buf[4096];

  char modo[]={'8','N','1',0};

  if(RS232_OpenComport(Puerto, Velocidad, modo, 0))
  {
    printf("No se puede abrir\n");
    return(0);
  }

  while(1)
  {

    RS232_SendByte(Puerto, 'E');
    Sleep(1000);

    n = RS232_PollComport(Puerto, buf, 4095);

    if(n > 0)
    {
      buf[n] = 0;   // Null al final del string

      printf("Se recibieron %d bytes: %s\n", n, (char *)buf);
      Sleep(100);
    }

    RS232_SendByte(Puerto, 'A');
    Sleep(1000);

    n = RS232_PollComport(Puerto, buf, 4095);

    if(n > 0)
    {
      buf[n] = 0;   // Null al final del string

      printf("Se recibieron %d bytes: %s\n", n, (char *)buf);
      Sleep(100);
    }
  }

  return(0);
}