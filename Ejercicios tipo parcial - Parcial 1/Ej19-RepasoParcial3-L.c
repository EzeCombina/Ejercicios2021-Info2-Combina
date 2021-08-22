#include <stdio.h>
#include <stdlib.h>

#define C 3  // Cantidad de vectores que ingresamos en el programa de escritura
int mayor;
float prom, suma = 0.0;

struct Vector {
    int H;         // Humedad
    int V;         // Velocidad del viento
    int T;         // Temperatura 
};

FILE *archivo;

void promedio(struct Vector d[C])  {

    struct Vector datos[C];

    for(int i = 0; i < C; i++){

        suma = suma + d[i].H;
        mayor = mayor > d[i].T ? mayor : d[i].T;

    }

    prom = suma / C;

    printf("\nEl promedio de la humedad es igual a: %.3f", prom);
    printf("\nLa mayor temperatura dada es: %d", mayor);

}

int main() {

    struct Vector datos[C];

    archivo = fopen("Datos2.bin", "rb");

    if(archivo == NULL){
        printf("\nNo se pudo abrir el archivo");
        return -1;
    }

    fread(datos, sizeof(struct Vector), C, archivo);
    fclose(archivo);

    printf("\nEl archivo se abrio y se leyo correctamente\n");
    printf("\nSe mostraran los datos de la siguiente manera: { Humedad , Velocidad del viento , Temperatura }\n");

    for(int i = 0; i < C; i++){

        printf("\nDatos del vector numero %d: ", i+1);
        printf("{ %d , %d , %d }", datos[i].H, datos[i].V, datos[i].T);
        printf("\n");

    }

    promedio(datos);
    
    printf("\n\nEl programa termino.");
    return 0;

}