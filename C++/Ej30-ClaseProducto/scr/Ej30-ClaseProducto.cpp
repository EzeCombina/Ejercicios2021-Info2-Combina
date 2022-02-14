#include <iostream>
#include "../inc/Ej30.h"

using namespace std;

producto::producto(string n_, float p_, int c_)  {

    this->nombre = n_;
    this->precio = p_;
    this->cantidad = c_;

}

string producto::get_nombre()  {

    return nombre;

}

float producto::get_precio()  {

    return precio; 

}

int producto::get_cantidad()  {

    return cantidad; 

}

int per::get_diascad()  {

    return dc;

}

char noper::get_tipo()  {

    cout << t << endl;

}

void producto::calcular(int dato)  {

    if((dato == 1) || (dato == 2) || (dato == 3))
    {
        switch (dato)
        {
            case 1:
                precio = (precio / 4) * cantidad;
                break;

            case 2:
                precio = (precio / 3) * cantidad;
                break;

            case 3:
                precio = (precio / 2) * cantidad;
                break;  

        }
    }

    else 
    {
        precio = precio * cantidad;
    }

}