#include <stdio.h>

int main()  {

    char Letra;
    int f[11];
    float b[11];
    int g[5] = { 8, 8, 8, 8, 8}, i;

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
        scanf("%f", &b[4]);

        printf("El valor que se ingreso es: %.4f", b[4]);

        break;

        case 'c':

        for( i = 0; i <= 4; i++ )
        {
            printf("El valor del elemento %d es: %d\n", i, g[i]);
        }

        break;

        case 'd':
        break;

        case 'e':
        break;

    }

    return 0;

}
