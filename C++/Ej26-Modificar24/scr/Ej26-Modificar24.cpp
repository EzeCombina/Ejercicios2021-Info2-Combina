#include <iostream>
#include <iomanip>
#include "../inc/Ej26_24.h"

using std::cout;
using std::endl;

Complejo::Complejo ()
{
	p = 5;
	q = 6;
}

Complejo::Complejo (double real, double imaginario)
{
	establecerComplejo(real, imaginario);
}

Complejo &Complejo::establecerComplejo (double r, double i)
{
	setp(r); 
    seti(i);
    return *this;
}

Complejo &Complejo::setp(double real_)
{
    p = real_;
    return *this;
}

Complejo &Complejo::seti(double imaginario_)
{
    q = imaginario_;
    return *this;
}

Complejo Complejo::sumaComplejo(Complejo a)
{	
	Complejo c;
	c.p = a.p + p;
	c.q = a.q + q; 
	return (c);
}

Complejo Complejo::restaComplejo(Complejo a)
{	
	Complejo c;
	c.p = a.p - p;
	c.q = a.q - q; 
	return (c);
}

void Complejo::imprimirComplejo() const
{
	cout<< p << " + ("<< q << "i)\n";
}