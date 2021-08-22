#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int i = 0, C = 0; 

struct Producto {
    char Desc[100];   // Descripcion del producto 
    int Codigo;       // Codigo del producto
    float Precio;     // Precio del producto (Como maximo dos decimales)
};

FILE *archivo;

int escritura(struct Producto d[i], int i)  {

    struct Producto datos[i];

    archivo = fopen("productos.dat", "w");

    if(archivo == NULL){
        printf("\nNo se pudo abrir el archivo");
        return -1;
    }

    fwrite(d, sizeof(struct Producto), i, archivo);
    fclose(archivo);

    printf("\nSe escribieron los datos con exito");

}

int muestra(struct Producto m[i], int i)  {

    struct Producto datos[i];

    archivo = fopen("productos.dat", "rb");

    if(archivo == NULL){
        printf("\nNo se pudo abrir el archivo");
        return -1;
    }

    fread(m, sizeof(struct Producto), i, archivo);
    fclose(archivo);

    printf("\nEl archivo se abrio y se leyo correctamente\n");
    printf("\nSe mostraran los datos de los productos a continuacion...\n ");

    for(int j = 0; j < i; j++){

        printf("\nDatos del producto numero %d", j+1);
        printf("\nDescripcion: %s", m[j].Desc);
        printf("\nCodigo: %d", m[j].Codigo);
        printf("\nPrecio: %.2f", m[j].Precio);
        printf("\n");

    }

}

int codigo(struct Producto m[i], int i)  {

    struct Producto datos[i];

    int Cod;

    printf("\nIgresar el numero del codigo de uno de los productos para ver sus caracteristicas");
    printf("\nIgresar '0' para finalizar el programa");

    while(1)
    {
        printf("\nCodigo: ");
        scanf("%d", &Cod);

        if(Cod == 0){return 0;}

        for(int k = 0; k < i; k++){

            if(k == m[k].Codigo)
            {
                printf("\nDatos del producto numero %d: ", k+1);
                printf("\nDescripcion: %s", m[k].Desc);
                printf("\nCodigo: %d", m[k].Codigo);
                printf("\nPrecio: %.2f", m[k].Precio);
                printf("\n");
            }
        }
    }
}

int main()  {

    struct Producto *datos = malloc(sizeof(struct Producto));

    printf("\nIngresar cantidad de productos que va a añadir a la lista: ");
    scanf("%d", &C);

    for(int a = 0; a < C; a++){

        printf("\nIngresar datos del producto %d", a+1);
        printf("\n\nDescripcion: ");
        scanf("%s", datos[a].Desc);
        printf("Codigo: ");
        scanf("%d", &datos[a].Codigo);
        printf("Precio: ");
        scanf("%f", &datos[a].Precio);

    }

    escritura(datos, C);
    muestra(datos, C);
    codigo(datos, C);

    free(datos);

    printf("\n\nEl programa a finalizado");

    return 0;
}
