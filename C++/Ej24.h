#define C 2 // Cantidad de numeros

class Complejo {
    private:
        double p[2];
        double q[2]; 
    public:
        void escritura(class Complejo* e);
        void escritura_defecto(class Complejo d); 
        void suma(class Complejo s);
        void resta(class Complejo r);
        void imprimir(class Complejo i); 
};

void Complejo::escritura(Complejo* e)  {

    Complejo f;

    for(int i = 0; i < 2; i++)
    {

        cout << "Ingresar parte real del numero " << i+1 << ": " << endl;
        cin >> e->p[i];

        cout << "Ingresar parte imaginaria del numero " << i+1 << ": " << endl;
        cin >> e->q[i];

    }

}

void Complejo::escritura_defecto(Complejo d)  {

    Complejo f;

    d.p[0] = 5;
    d.p[1] = 6;

    d.q[0] = 7;
    d.q[1] = 8;

    for(int i = 0; i < 2; i++)
    {
        cout << "Valores por defecto: ( " << d.p[i] << " +- i * " << d.q[i] << " )" << endl;
    }

    // Estos valores van a quedar en la funcion ya que estan pasados por valos y no por referencia.

}

void Complejo::suma(Complejo s)  {

    Complejo f; 
    double sumar, sumai;
    int i = 0;

    sumar = s.p[i] + s.p[i+1];
    sumai = s.q[i] + s.q[i+1];

    cout << "La suma es igual a: ( " << sumar << " +- i * " << sumai << " )" << endl;

}

void Complejo::resta(Complejo r)  {

    Complejo f;
    double restar, restai;
    int i = 0;

    restar = r.p[i] - r.p[i+1];
    restai = r.q[i] - r.q[i+1];

    cout << "La suma es igual a: ( " << restar << " +- i * " << restai << " )" << endl;
       
}

void Complejo::imprimir(Complejo i)  {

    Complejo f;

    for(int j = 0; j < 2; j++)
    {
        cout << "Valores ingresados: ( " << i.p[j] << " +- i * " << i.q[j] << " )" << endl;
    }

}