#include <stdio.h>

struct complejo{

    float real, imaginario;

}x, *px, cx[100];

int main()  {

    x.real=1.3;
    x.imaginario=-2.2;

    px = &x;

    printf("%.2lf  %.2lf", px->real, px->imaginario);

    int i=17;

    cx[i].real=1.6;
    cx[i].imaginario=-2.5;

    printf("\n%.2lf  %.2lf", cx[i].real, cx[i].imaginario);

}