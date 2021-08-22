#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define C 5  // Cantidad de personas

struct Persona {
    char Nombre[50];
    int Edad;
    int Dni;
    char Numero[50];
};

FILE *archivo;

int main() {

    struct Persona *datos = malloc(sizeof(struct Persona));

    for(int i = 0; i < C; i++){

        printf("\nIngeresar Datos de la persona %d:\n", i+1);
        printf("\nNombre: ");
        scanf("%s,", datos[i].Nombre);
        printf("Edad: ");
        scanf("%d,", &datos[i].Edad);
        printf("Dni: ");
        scanf("%d,", &datos[i].Dni);
        printf("Numero de telefono: ");
        scanf("%s,", datos[i].Numero);

    }

    archivo = fopen("Datos.bin", "w");

    if(archivo == NULL){
        printf("\nNo se pudo abrir el archivo");
        return -1;
    }

    fwrite(datos, sizeof(struct Persona), C, archivo);
    fclose(archivo);

    printf("\nSe han cargado los datos con exito.");

    free(datos);

    return 0;
}
