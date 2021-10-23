#include <iostream>
#include <string>

using namespace std; 

#include "../inc/Ej29.h"

Empleado::Empleado(string n_, int e_, float s_)  {

    this->Nombre = n_;
    this->Edad = e_;
    this->Salario = s_;

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