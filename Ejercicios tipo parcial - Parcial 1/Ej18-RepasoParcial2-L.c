#include <stdio.h>
#include <stdlib.h>

#define C 5  // Cantidad de personas
int p, m, M;

struct Persona {
    char Nombre[50];
    int Edad;
    int Dni;
    char Numero[50];
};

FILE *archivo;

int mayor(struct Persona d[C])  {

    struct Persona datos[C];

    printf("\n\nPersona numero: ");
    scanf("%d", &m);

    if(m == 0){return (2);}
    
    printf("\nLa edad de la persona es: %d", d[(m-1)].Edad);

    if((d[(m-1)].Edad) <= 18){

        return (0);

    }else {return (1);}

}

int main() {

    struct Persona datos[C];

    archivo = fopen("Datos.bin", "rb");

    if(archivo == NULL){
        printf("\nNo se pudo abrir el archivo");
        return -1;
    }

    fread(datos, sizeof(struct Persona), C, archivo);
    fclose(archivo);

    printf("\nEl archivo se abrio y se leyo correctamente");
    printf("\n\nIngrese el numero de la persona que quiere ver (Del 1 al 5).\n");
    printf("Ingresar '0' para pasar a ver si una persona en especifico es mayor de edad o no.\n");

    while(1) {

        printf("Persona Numero: ");
        scanf("%d", &p);

        if(p == 0){

            break;

        }

        switch (p)
        {
            case 1: 
                printf("\nNombre: %s", datos[(p-1)].Nombre);
                printf("\nEdad: %d", datos[(p-1)].Edad);
                printf("\nDni: %d", datos[(p-1)].Dni);
                printf("\nNumero de telefono: %s", datos[(p-1)].Numero);
                break;

            case 2: 
                printf("\nNombre: %s", datos[(p-1)].Nombre);
                printf("\nEdad: %d", datos[(p-1)].Edad);
                printf("\nDni: %d", datos[(p-1)].Dni);
                printf("\nNumero de telefono: %s", datos[(p-1)].Numero);
                break;

            case 3: 
                printf("\nNombre: %s", datos[(p-1)].Nombre);
                printf("\nEdad: %d", datos[(p-1)].Edad);
                printf("\nDni: %d", datos[(p-1)].Dni);
                printf("\nNumero de telefono: %s", datos[(p-1)].Numero);
                break;

            case 4: 
                printf("\nNombre: %s", datos[(p-1)].Nombre);
                printf("\nEdad: %d", datos[(p-1)].Edad);
                printf("\nDni: %d", datos[(p-1)].Dni);
                printf("\nNumero de telefono: %s", datos[(p-1)].Numero);
                break;

            case 5: 
                printf("\nNombre: %s", datos[(p-1)].Nombre);
                printf("\nEdad: %d", datos[(p-1)].Edad);
                printf("\nDni: %d", datos[(p-1)].Dni);
                printf("\nNumero de telefono: %s", datos[(p-1)].Numero);
                break;
        }

        printf("\n\n");

    }

    printf("\nIngresar el numero de la persona que quiere revisar si es mayor de edad o no (Del 1 al 5).\n");
    printf("Ingresar '0' en caso de que quiera que termine el programa.");

    while(1) {

        M = mayor(datos);

        if(M == 1)
        {
            printf("\nLa persona es mayor de edad");
        }

        else if(M == 0)
        {
            printf("\nLa persona es menor de edad");
        }

        else if(M == 2)
        {
            break;
        }    

    }
    
    printf("\nEl programa termino.");
    return 0;

}