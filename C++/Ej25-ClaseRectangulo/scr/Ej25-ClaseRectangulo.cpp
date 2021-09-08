#include <iostream>
#include <cmath>

using namespace std; 

#include "../inc/Ej25.h"

Rectangulo::Rectangulo()  {

    cout << "Valor de x: " << endl;
    cin >> x;

    cout << "Valor de y: " << endl;
    cin >> y;
    
    cout << "Valor de la longitud: " << endl;
    cin >> longitud;

    cout << "Valor del ancho: " << endl;
    cin >> ancho;

}

void Rectangulo::obtener(Rectangulo r1, Rectangulo r2)  {

    cout << "Los valores ingresados son: " << endl;
    cout << "Primer rectangulo: " << endl << "X = " << r1.x << endl << "Y = " << r1.y << endl << "Longitud = " << r1.longitud 
    << endl << "Ancho = " << r1.ancho << endl;
    cout << "Segundo rectangulo: " << endl << "X = " << r2.x << endl << "Y = " << r2.y << endl << "Longitud = " << r2.longitud 
    << endl << "Ancho = " << r2.ancho << endl;

}

void Rectangulo::area(Rectangulo r1, Rectangulo r2)  {

    int area1, area2, perimetro1, perimetro2;

    area1 = r1.longitud * r1.ancho;
    area2 = r2.longitud * r2.ancho;
    perimetro1 = (2 * r1.longitud) + (2 * r1.ancho);
    perimetro2 = (2 * r2.longitud) + (2 * r2.ancho);

    cout << "Area del primer rectangulo: " << area1 << endl << "Area del segundo rectangulo: " << area2 << endl;
    cout << "Perimetro del primer rectangulo: " << perimetro1 << endl << "Perimetro del segundo rectangulo: " << perimetro2 << endl;
       
}

void Rectangulo::dentro(Rectangulo r1, Rectangulo r2)  {

    if((r2.x > r1.x) && (r2.y > r1.y) && (r2.ancho < r1.ancho) && (r2.longitud < r1.longitud) && ((r2.x - r1.x) >= 0) && ((r2.y - r1.y) >= 0) && (((r2.y - r1.y) + r2.ancho) <= r1.ancho) && (((r2.x - r1.x) + r2.longitud) <= r1.longitud))
    {
        cout << "El segundo rectangulo esta dentro del primero" << endl;   
    }

    else if((r1.x > r2.x) && (r1.y > r2.y) && (r1.ancho < r2.ancho) && (r1.longitud < r2.longitud) && ((r1.x - r2.x) >= 0) && ((r1.y - r2.y) >= 0) && (((r1.y - r2.y) + r1.ancho) <= r2.ancho) && (((r1.x - r2.x) + r1.longitud) <= r2.longitud)) 
    {
        cout << "El primer rectangulo esta dentro del segundo" << endl;
    } 

    else 
    {
        cout << "Ningun rectangulo esta dentro del otro" << endl;
    }

}

void Rectangulo::areai(Rectangulo r1, Rectangulo r2)  {

    int a, l;

    // Solo se pueden obtener resultados correctos si los valores de x e y del primer rectangulo son menores que los del segundo. 

    if(((r2.longitud + r2.y) > (r1.longitud + r1.y)) && ((r2.ancho + r2.x) > (r1.ancho + r1.x)))
    {
        a = (r1.ancho + ((r2.x + r2.ancho) - (r1.x + r1.ancho)) - (r2.x - r1.x)) - ((r2.ancho + r2.x) - (r1.ancho + r1.x));

        l = (r1.longitud + ((r2.y + r2.longitud) - (r1.y + r1.longitud)) - (r2.y - r1.y)) - ((r2.longitud + r2.y) - (r1.longitud + r1.y));
    }

    else if((r2.longitud + r2.y) > (r1.longitud + r1.y))
    {
        a = (r1.ancho + ((r2.x + r2.ancho) - (r1.x + r1.ancho)) - (r2.x - r1.x));

        l = (r1.longitud + ((r2.y + r2.longitud) - (r1.y + r1.longitud)) - (r2.y - r1.y)) - ((r2.longitud + r2.y) - (r1.longitud + r1.y));
    }
    
    else if(((r2.ancho + r2.x) > (r1.ancho + r1.x)))
    {
        a = (r1.ancho + ((r2.x + r2.ancho) - (r1.x + r1.ancho)) - (r2.x - r1.x)) - ((r2.ancho + r2.x) - (r1.ancho + r1.x));

        l = (r1.longitud + ((r2.y + r2.longitud) - (r1.y + r1.longitud)) - (r2.y - r1.y));
    }

    else
    {
        a = (r1.ancho + ((r2.x + r2.ancho) - (r1.x + r1.ancho)) - (r2.x - r1.x));

        l = (r1.longitud + ((r2.y + r2.longitud) - (r1.y + r1.longitud)) - (r2.y - r1.y));
    }

    cout << "a = " << a << endl << "l = " << l << endl;
    cout << "El area encerrada es: " << a * l << endl;

}