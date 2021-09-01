#include <iostream>

using namespace std; 

#include "Ej24-ClaseComplejo.cpp"

int main()  {

    Complejo n1(1, 2);
    Complejo n2, n3;

    n1.suma(n2, n3);
    n1.resta(n2, n3);
    n1.imprimir(n2, n3);

    return 0;

}