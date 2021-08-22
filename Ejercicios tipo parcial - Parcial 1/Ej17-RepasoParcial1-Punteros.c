#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int i = 0, C = 0, z, c = 0; 

struct Producto {
    char Desc[100];   // Descripcion del producto 
    int Codigo;       // Codigo del producto
    float Precio;     // Precio del producto (Como maximo dos decimales)
};

FILE *archivo;

int escritura(struct Producto d[i], int *i)  {

    struct Producto *datos = malloc(sizeof(struct Producto));

    archivo = fopen("productos.dat", "w");

    if(archivo == NULL){
        printf("\nNo se pudo abrir el archivo");
        return -1;
    }

    fwrite(d, sizeof(struct Producto), *i, archivo);
    fclose(archivo);

    printf("\nSe escribieron los datos con exito");

    free(datos);

}

int escritura2(struct Producto e[i], int i)  {

    struct Producto *datos = malloc(sizeof(struct Producto));

    archivo = fopen("productos.dat", "a");

    if(archivo == NULL){
        printf("\nNo se pudo abrir el archivo");
        return -1;
    }

    fwrite(e, sizeof(struct Producto), i, archivo);
    fclose(archivo);

    printf("\nSe escribieron los datos con exito");

    free(datos);

}

int muestra(struct Producto m[i], int *i)  {

    struct Producto datos[*i];

    archivo = fopen("productos.dat", "rb");

    if(archivo == NULL){
        printf("\nNo se pudo abrir el archivo");
        return -1;
    }

    fread(m, sizeof(struct Producto), *i, archivo);
    fclose(archivo);

    printf("\nEl archivo se abrio y se leyo correctamente\n");
    printf("\nSe mostraran los datos de los productos a continuacion...\n ");

    for(int j = 0; j < *i; j++){

        printf("\nDatos del producto numero %d", j+1);
        printf("\nDescripcion: %s", m[j].Desc);
        printf(" | Codigo: %d", m[j].Codigo);
        printf(" | Precio: %.2f", m[j].Precio);
        printf("\n");

    }

}

int codigo(struct Producto s[i], int *i, int e)  {

    struct Producto datos[*i];

    archivo = fopen("productos.dat", "rb");

    if(archivo == NULL){
        printf("\nNo se pudo abrir el archivo");
        return -1;
    }

    fread(s, sizeof(struct Producto), *i, archivo);
    fclose(archivo);

    printf("\nEl archivo se abrio y se leyo correctamente\n");

    int Cod;

    printf("\nIgresar el numero del codigo de uno de los productos para ver sus caracteristicas");
    printf("\nIngresar '0' en caso de querer dejar de poner codigos");

    while(1)
    {
        printf("\nCodigo: ");
        scanf("%d", &Cod);

        if(Cod == 0){return 0;}

        for(int k = 0; k < *i; k++){

            if(k == 1)
            {
                s[k].Codigo = e;
            }

            if(Cod == s[k].Codigo)
            {
                printf("\nDatos del producto numero %d: ", k+1);
                printf("\nDescripcion: %s", s[k].Desc);
                printf(" | Codigo: %d", s[k].Codigo);
                printf(" | Precio: %.2f", s[k].Precio);
                printf("\n");
            }
        }
    }
}

int main()  {

    struct Producto *datos = malloc(sizeof(struct Producto));

    printf("\nIngresar cantidad de productos que va a añadir a la lista: ");
    scanf("%d", &C);

    int *pC = &C;

    for(int a = 0; a < C; a++){

        printf("\nIngresar datos del producto %d", a+1);
        printf("\n\nDescripcion: ");
        scanf("%s", datos[a].Desc);
        printf("Codigo: ");
        scanf("%d", &datos[a].Codigo);
        printf("Precio: ");
        scanf("%f", &datos[a].Precio);

    }

    escritura(datos, pC);

    while(1)
    {
        printf("\nIngresar '1' en caso de que quiera escribir mas productos en la lista");
        printf("\nIngresar '2' en caso de que quiera ver la lista de productos");
        printf("\nIngresar '3' en caso de que quiera ver algun producto por su codigo");
        printf("\nIngresar '4' en caso de que quiera terminar el programa");
        printf("\nIngresar aqui -> ");
        scanf("%d", &z);

        if(z == 1)
        {
            printf("\nIngresar cantidad de productos que va a añadir a la lista: ");
            scanf("%d", &c);

            for(int a = 0; a < c; a++){

                printf("\nIngresar datos del producto %d", C+1);
                printf("\n\nDescripcion: ");
                scanf("%s", datos[a].Desc);
                printf("Codigo: ");
                scanf("%d", &datos[a].Codigo);
                printf("Precio: ");
                scanf("%f", &datos[a].Precio);
                C++;
            }
            escritura2(datos, c);
        }

        if(z == 2)
        {
            muestra(datos, pC);
        }

        if(z == 3)
        {
            int e = datos[1].Codigo;
            codigo(datos, pC, e);
        }

        if(z == 4)
        {
            break;
        }

    }

    free(datos);

    printf("\nEl programa a finalizado");
    return 0;

}