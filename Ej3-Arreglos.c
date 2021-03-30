#include <stdio.h>
#include <stdlib.h>

int main()  {

    char Letra;
    int f[11];
    float c[100], R=0;
    int g[5] = { 8, 8, 8, 8, 8}, i;
    double a[11], b[34];

    printf("Ingresar la letra del apartado que quiera ver: ");
    scanf("%c", &Letra);

    switch(Letra)
    {
        case 'a':

        printf("Ingrese el valor del septimo elemento: ");
        scanf("%d", &f[7]);

        printf("El valor es igual a: %d", f[7]);

        break;

        case 'b':
      
        printf("Ingrese el valor: ");
        scanf("%lf", &b[4]);

        printf("El valor que se ingreso es: %.4lf", b[4]);

        break;

        case 'c':

        for( i = 0; i <= 4; i++ )
        {
            printf("El valor del elemento %d es: %d\n", i, g[i]);
        }

        break;

        case 'd':

        for( i = 0; i < 100; i++)
        {
            c[i]= rand() % 500;
            R = R + c[i];
        }

        printf("El valor de i es: %d\n", i);
        printf("La sumatoria da:  %.3f ", R);

        break;

        case 'e':

        printf("Ingrese los valores del primer arreglo (11 valores):\n");

        for( i = 0; i < 11; i++)
        {
            scanf("%lf", &a[i]);
        }

        for( i = 0; i < 11; i++)
        {
            b[i] = a[i];
            printf("El valor %d del arreglo b es: %.3lf\n", i, b[i]);  
        }

        break;

    }

    return 0;

}
