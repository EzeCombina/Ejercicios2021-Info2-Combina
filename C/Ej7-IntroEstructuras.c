#include <stdio.h>

struct cliente{

    char apellido[15];
    char nombre[15];
    int  numeroCliente;

    struct {

        char numeroTelefonico[11];
        char direccion[50];
        char ciudad[15];
        char estado[3];
        char codigoPostal[6];

    }personal;

}registroCliente, *ptrCliente;

int main(){

    ptrCliente = &registroCliente;

    printf("Ingresar apellido: ");
    scanf("%s", registroCliente.apellido);
    printf("%s", registroCliente.apellido);
    
    printf("\n%s", ptrCliente->apellido);

    printf("\nIngresar nombre: ");
    scanf("%s", registroCliente.nombre);
    printf("%s", registroCliente.nombre);

    printf("\n%s", ptrCliente->nombre);

    printf("\nIngresar numero del cliente: ");
    scanf("%d", &registroCliente.numeroCliente);
    printf("%d", registroCliente.numeroCliente);

    printf("\n%d", ptrCliente->numeroCliente);

    printf("\nIngresar numero telefonico del cliente: ");
    scanf("%s", registroCliente.personal.numeroTelefonico);
    printf("%s", registroCliente.personal.numeroTelefonico);

    printf("\n%s", ptrCliente->personal.numeroTelefonico);

    printf("\nIngresar direccion del cliente: ");
    scanf("%s", registroCliente.personal.direccion);
    printf("%s", registroCliente.personal.direccion);

    printf("\n%s", ptrCliente->personal.direccion);

    printf("\nIngresar ciudad del cliente: ");
    scanf("%s", registroCliente.personal.ciudad);
    printf("%s", registroCliente.personal.ciudad);

    printf("\n%s", ptrCliente->personal.ciudad);

    printf("\nIngresar estado del cliente: ");
    scanf("%s", registroCliente.personal.estado);
    printf("%s", registroCliente.personal.estado);

    printf("\n%s", ptrCliente->personal.estado);

    printf("\nIngresar codigo postal del cliente: ");
    scanf("%s", registroCliente.personal.codigoPostal);
    printf("%s", registroCliente.personal.codigoPostal);

    printf("\n%s", ptrCliente->personal.codigoPostal);

}