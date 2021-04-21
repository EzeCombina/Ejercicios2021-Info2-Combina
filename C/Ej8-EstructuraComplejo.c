#include <stdio.h>

struct complejo{

    float real, imaginario;

}x, *px, cx[100];

int main()  {

    x.real=1.3;
    x.imaginario=-2.2;

    px = &x;

    printf("%.2lf  %.2lf", px->real, px->imaginario);

    printf("\nNumero real: ");
    scanf("%lf", &cx[18].real);

    printf("\nNumero imaginario: ");
    scanf("%lf", &cx[18].imaginario);

    printf("%.3lf  %.3lf", cx[18], cx[18]);

}