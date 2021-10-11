#include <iostream>
#include <string>

#ifndef EJ25_H
#define EJ25_H

class Persona {
    protected:
        string Nombre;
        string Apellido;
    public:
        Persona(string n_, string a_);
        void get_NombreyApellido();
};

class Futbolista : public Persona {
    private:
        int Numero;
    public:
        Futbolista(int Numero, string n_, string a_) : Persona(n_, a_) {
            this->Numero = Numero;
        }
        int get_Numero();
};

#endif