#include <iostream>
#include <string>
#include <vector>

using namespace std; 

#include "../inc/Ej30.h"

Productos::Productos(string n_, int p_)  {

    this->Nombre = n_;
    this->Precio = p_;

}

void Empleado::plus(int p_)  {

    Plus = p_;

}

string Empleado::get_nombre()  {

    return Nombre;  

}

int Empleado::get_edad()  {

    return Edad;

}

int Repartidor::get_zona()  {

    return Zona;

}

int Comercial::get_comision()  {

    return Comision;

}

int Empleado::get_salario()  {

    return (Salario + Plus);

}