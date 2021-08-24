#include <iostream>

using namespace std; 

#include "Ej24.h"

int main()  {

    Complejo f;

    f.escritura(&f);
    f.escritura_defecto(f);
    f.suma(f);
    f.resta(f);
    f.imprimir(f);

    return 0;

}