#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef EJ30_H
#define EJ30_H

class Productos {
    private:
        string Nombre;
        float Precio;
        int Cantidad;
        //int Plus;
    public:
        Productos(string n_, int p_, int c_);
        string get_nombre();
        int get_precio();
        void calcular(int c_);
};

class Perecedero : public Productos {
    private:
        int Dias_a_Caducar;
    public:
        Perecedero(int Dias_a_Caducar, string n_, int p_, int c_) : Productos(n_, p_, c_) {
            this->Dias_a_Caducar = Dias_a_Caducar;
            calcular(c_);
        }
        int get_dias_a_caducar();
};

class NoPerecedero : public Productos {
    private:
        int Tipo;
    public:
        NoPerecedero(int Tipo, string n_, int p_, int c_) : Productos(n_, p_, c_) {
            this->Tipo = Tipo;
            calcular(c_);
        }
        int get_tipo();    
};

#endif