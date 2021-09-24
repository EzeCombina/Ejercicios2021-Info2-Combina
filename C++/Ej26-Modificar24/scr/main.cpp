#include <iostream>

using namespace std; 

#include "Ej26-Modificar24.cpp"

int main()  {

    const Complejo n1(1, 2);
    Complejo n2, n3;

    n2.suma(n2, n3);
    n2.resta(n2, n3);
    n1.imprimir(n2, n3);

    return 0;

}