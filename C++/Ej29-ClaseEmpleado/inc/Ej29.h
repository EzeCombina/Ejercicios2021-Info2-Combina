#include <iostream>
#include <string>

using namespace std;

#ifndef EJ29_H
#define EJ29_H

class Empleado {
    private:
        string Nombre;
        int Edad;
        float Salario;
        int Plus;
    public:
        Empleado(string n_, int e_, float s_);
        string get_nombre();
        int get_salario();
        int get_edad();
        void plus(int p_);
};

class Repartidor : public Empleado {
    private:
        int Zona;
    public:
        Repartidor(int Zona, string n_, int e_, float s_) : Empleado(n_, e_, s_) {
            this->Zona = Zona;
            if((e_ < 25) && (Zona == 3))
            {
                plus(5000);
            }else plus(0);
        }
        int get_zona();
};

class Comercial : public Empleado {
    private:
        double Comision;
    public:
        Comercial(int Comision, string n_, int e_, float s_) : Empleado(n_, e_, s_) {
            this->Comision = Comision;
            if((e_ > 30) && (Comision >= 3))
            {
                plus(5000);
            }else plus(0);
        }
        int get_comision();    
};

#endif