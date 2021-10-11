#include <iostream>
#include <string>

using namespace std; 

#include "../inc/Ej28.h"

Persona::Persona(string n_, string a_)  {

    this->Nombre = n_;
    this->Apellido = a_;

}

void Persona::get_NombreyApellido()  {

    cout << Nombre << " " << Apellido << endl;  

}

int Futbolista::get_Numero()  {

    return Numero;

}