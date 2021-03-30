#include <stdio.h>
#include <stdlib.h>

int Apartadoa();
int Apartadob();
int Apartadoc();
int Apartadod();
int Apartadoe();

int main()  {

    char Letra;

    printf("Ingresar la letra del apartado que quiera ver: ");
    scanf("%c", &Letra);

    switch(Letra)
    {
        case 'a':

        Apartadoa();

        break;

        case 'b':
      
        Apartadob();

        break;

        case 'c':

        Apartadoc();

        break;

        case 'd':

        Apartadod();

        break;

        case 'e':

        Apartadoe();

        break;

    }

    return 0;

}

int Apartadoa()  {

    int f[11];

    printf("Ingrese el valor del septimo elemento: ");
    scanf("%d", &f[7]);

    printf("El valor es igual a: %d", f[7]);

    return (0);

}

int Apartadob()  {

    float b[11];

    printf("Ingrese el valor: ");
    scanf("%f", &b[4]);

    printf("El valor que se ingreso es: %.4f", b[4]);

    return (0);

}

int Apartadoc()  {

    int g[5] = { 8, 8, 8, 8, 8}, i;

    for( i = 0; i <= 4; i++ )
    {
        printf("El valor del elemento %d es: %d\n", i, g[i]);
    }

    return (0);

}

int Apartadod()  {

    float c[100], R=0;
    int i;

    for( i = 0; i < 100; i++)
    {
        c[i]= rand() % 500;
        R = R + c[i];
    }

    printf("El valor de i es: %d\n", i);
    printf("La sumatoria da:  %.3f ", R);

    return (0);

}

int Apartadoe()  {

    double a[11], b[34];
    int i;

    printf("Ingrese los valores del primer arreglo (11 valores):\n");

    for( i = 0; i < 11; i++)
    {
        scanf("%lf", &a[i]);
    }

    for( i = 0; i < 11; i++)
    {
        b[i] = a[i];
        printf("El elemento %d del arreglo b es: %.3lf\n", i, b[i]);  
    }

    return (0);

}
