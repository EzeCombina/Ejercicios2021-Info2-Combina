#include <iostream>

using namespace std; 

#include "Ej25-ClaseRectangulo.cpp"

int main()  {

    cout << "Igresar valores del primer rectangulo" << endl;

    Rectangulo r1;

    cout << "Ingresar valores del segundo rectangulo" << endl;

    Rectangulo r2;

    r1.obtener(r1, r2);
    r1.area(r1, r2);
    r1.dentro(r1, r2);
    r1.areai(r1, r2);

    return 0;

}