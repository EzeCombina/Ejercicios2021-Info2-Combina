#include <iostream>

using namespace std;

#ifndef EJ30_H
#define EJ30_H

class producto {
    private:
        string nombre;
        float precio;
        int cantidad;
    public:
        producto(string n_, float p_, int c_);
        string get_nombre();
        float get_precio();
        int get_cantidad();
        void calcular(int dato);
};

class per: public producto {
    private:
        int dc;
    public:
        per(string n_, float p_, int c_, int dc_) : producto(n_, p_, c_) {
            this->dc = dc_;
            calcular(dc);
        }
        int get_diascad();
};

class noper : public producto {
    private:
        char t;
    public:
        noper(string n_, float p_, int c_, char t_) : producto(n_, p_, c_) {
            this->t = t_;
            calcular(t);
        }
        char get_tipo();
};

#endif