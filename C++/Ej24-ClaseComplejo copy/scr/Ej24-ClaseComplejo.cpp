#include <iostream>

using namespace std; 

#include "../inc/Ej24.h"

Complejo::Complejo(double p_, double q_)  {

    cout << "Valores por defecto: ( " << p_ << " +- i * " << q_ << " )" << endl;

    // Estos valores van a quedar en la funcion ya que estan pasados por valos y no por referencia.

}

Complejo::Complejo()  {

    cout << "Ingresar parte real del numero : " << endl;
    cin >> p;

    cout << "Ingresar parte imaginaria del numero : " << endl;
    cin >> q;

}

void Complejo::suma(Complejo n1, Complejo n2)  {
 
    double sumar, sumai;

    sumar = n1.p + n2.p;
    sumai = n1.q + n2.q;

    cout << "La suma es igual a: ( " << sumar << " +- i * " << sumai << " )" << endl;

}

void Complejo::resta(Complejo n1, Complejo n2)  {

    double restar, restai;

    restar = n1.p - n2.p;
    restai = n1.q - n2.q;

    cout << "La resta es igual a: ( " << restar << " +- i * " << restai << " )" << endl;
       
}

void Complejo::imprimir(Complejo n1, Complejo n2)  {


    cout << "Valores ingresados: ( " << n1.p << " +- i * " << n1.q << " )" << endl;
    cout << "Valores ingresados: ( " << n2.p << " +- i * " << n2.q << " )" << endl;
    

}