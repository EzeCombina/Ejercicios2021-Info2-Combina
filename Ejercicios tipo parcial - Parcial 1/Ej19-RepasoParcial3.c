#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define C 3  // Cantidad de vectores de datos que vamos a ingresar

struct Vector {
    int H;         // Humedad
    int V;         // Velocidad del viento
    int T;         // Temperatura 
};

FILE *archivo;

int main() {

    struct Vector *datos = malloc(sizeof(struct Vector));

    for(int i = 0; i < C; i++){

        printf("\nIngeresar Datos del vector numero %d:\n", i+1);
        printf("\nHumedad: ");
        scanf("%d,", &datos[i].H);
        printf("Velocidad del viento: ");
        scanf("%d,", &datos[i].V);
        printf("Temperatura: ");
        scanf("%d,", &datos[i].T);

    }

    archivo = fopen("Datos2.bin", "w");

    if(archivo == NULL){
        printf("\nNo se pudo abrir el archivo");
        return -1;
    }

    fwrite(datos, sizeof(struct Vector), C, archivo);
    fclose(archivo);

    printf("\nSe han cargado los datos con exito.");

    free(datos);

    return 0;
}
