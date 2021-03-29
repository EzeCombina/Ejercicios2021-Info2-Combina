#include <stdio.h>

int main()  {

    char Letra;
    int f[11];

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
        break;

        case 'c':
        break;

        case 'd':
        break;

        case 'e':
        break;

    }

    return 0;

}
