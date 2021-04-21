#include <stdio.h>

struct sensores{

    char tipo_sensor;
    int valor_sensor;
    unsigned long tiempo_sensor;

}z;

int main()  {

    float x; 

    x = sizeof(z.tiempo_sensor);

    printf("%.2lf", x);

}