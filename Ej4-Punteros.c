#include <stdio.h>

int main()  {

    long valor1 = 200000, valor2;
    long *ptrL;

    ptrL=&valor1;

    printf(" El valor guardado en ptrL es: %ld\n ", *ptrL);

    valor2=*ptrL;

    printf("Valor2 es igual a: %ld\n ", valor2);

    printf("La direccion de valor1 es: %p\n ", &valor1);
                          
    printf("La direccion de ptrL es: %p\n ", ptrL);

    return 0;

}