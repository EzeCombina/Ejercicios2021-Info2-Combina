#ifndef EJ26_24_H
#define EJ26_24_H

class Complejo{
	public: 
		Complejo();								
		Complejo (double real, double imaginario);
		Complejo sumaComplejo(Complejo a);
		Complejo restaComplejo(Complejo a);
		Complejo &establecerComplejo(double real, double imaginario);
        Complejo &setp(double real);
        Complejo &seti(double imaginario);
		void imprimirComplejo() const;	
	private:
		double p,q; 	
};

#endif