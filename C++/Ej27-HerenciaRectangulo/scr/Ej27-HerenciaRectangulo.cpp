#include <iostream>
#include <cmath>

using namespace std; 

#include "../inc/Ej27.h"

Rectangulo::Rectangulo(int x_, int y_, int l_, int a_)  {

    x = x_;
    y = y_;
    largo = l_;
    alto = a_;

}

void Rectangulo::perimetro(Rectangulo r2)  {

    int p1 = (2 * largo) + (2 * alto);
    int p2 = (2 * r2.largo) + (2 * r2.alto);
    
    cout << "El perimetro del primer rectangulo es: " << p1 << endl;
    cout << "El perimetro del segundo rectangulo es: " << p2 << endl;

}

void Rectangulo::area(Rectangulo r2)  {

    int area1, area2;

    area1 = largo * alto;
    area2 = r2.largo * r2.alto;

    cout << "Area del primer rectangulo: " << area1 << endl << "Area del segundo rectangulo: " << area2 << endl;
       
}

void Rectangulo::dentro(Rectangulo r2)  {

    if((r2.alto < alto) && (r2.largo < largo))
    {
        cout << "El segundo rectangulo esta dentro del primero" << endl;   
    }

    else if((alto < r2.alto) && (largo < r2.largo)) 
    {
        cout << "El primer rectangulo esta dentro del segundo" << endl;
    } 

    else 
    {
        cout << "Ningun rectangulo esta dentro del otro" << endl;
    }

}
