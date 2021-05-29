#include <stdio.h>

struct sensores{

    char tipo;
    int16_t valor;
    uint32_t tiempo;

}e, l;   // e = Escritura - l = Lectura

FILE *ptrl;

int main()  {

    printf("Ingrese los valores obtenidos: ");
    printf("\nTipo de sensor(Letra inicial): ");
    scanf("%c", &e.tipo);
    printf("Valor obtenido: ");
    scanf("%d", &e.valor);
    printf("Tiempo: ");
    scanf("%ld", &e.tiempo);

    if((ptrl=fopen("ejercicio11.dat","w"))==NULL)
    {
        printf("\nNo se puede abrir archivo");
        return -1;
    }
    else
    {
        fwrite(&e, sizeof(struct sensores) , 1, ptrl);
        fclose(ptrl);
    }

    if((ptrl=fopen("ejercicio11.dat","r"))==NULL)
    {
        printf("\nNo se puede abrir archivo\n");
        return -1;
    }
    else
    {
        fread(&l, sizeof(struct sensores) , 1, ptrl);
        printf("\nTipo: %c", l.tipo);
        printf("\nValor: %d", l.valor);
        printf("\nTiempo: %ld", l.tiempo);
        fclose(ptrl);
    }

    return 0;

}