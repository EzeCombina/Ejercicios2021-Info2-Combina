#ifndef EJ24_H
#define EJ24_H

class Complejo {
    private:
        double p;
        double q; 
    public:
        Complejo();
        Complejo(double p_, double q_); 
        void suma(Complejo n1, Complejo n2);
        void resta(Complejo n1, Complejo n2);
        void imprimir(Complejo n1, Complejo n2) const; 
};

#endif