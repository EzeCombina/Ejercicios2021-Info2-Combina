#include <iostream>

using namespace std; 

#include "Ej27-HerenciaRectangulo.cpp"

int main()  {
    
    Cuadrado r1(4);
    Cuadrado r2(3);

    r1.perimetro(r2);
    r1.area(r2);
    r1.dentro(r2);

    return 0;

}