#include <stdio.h>

struct sensores{

    char tipo_sensor;            // 1 byte
    int valor_sensor;            // 4 byte
    unsigned long tiempo_sensor; // 8 byte

}z;

int main()  {

    int x; 

    x = sizeof(z);

    printf("%d", x);             // 16

}