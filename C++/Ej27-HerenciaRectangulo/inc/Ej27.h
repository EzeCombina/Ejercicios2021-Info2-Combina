#ifndef EJ27_H
#define EJ27_H

class Rectangulo {
    private:
        int x;
        int y;
        int largo;
        int alto; 
    public:
        Rectangulo(int x_, int y_, int l_, int a_);
        void perimetro(Rectangulo r2);
        void area(Rectangulo r2);
        void dentro(Rectangulo r2);
};

class Cuadrado : public Rectangulo {
    public:
        Cuadrado(int lado) : Rectangulo(0, 0, lado, lado) {}
};

#endif