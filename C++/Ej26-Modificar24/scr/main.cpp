#include <iostream>
#include "Ej26-Modificar24.cpp"

using std::cout;
using std::endl;

int main(){

	const Complejo n1(7,11);
    Complejo n2, n3;

	cout << "El primer numero es: ";
	n1.imprimirComplejo();
    cout << "El segundo numero es: ";
	n2.establecerComplejo(4,5).imprimirComplejo();
	cout << "La suma es: ";
	n3 = n2.sumaComplejo(n1);
	n3.imprimirComplejo();
	n3 = n2.restaComplejo(n1);
	cout << "La resta es: ";
	n3.imprimirComplejo();
}