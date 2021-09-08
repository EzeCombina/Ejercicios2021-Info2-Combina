#ifndef EJ25_H
#define EJ25_H

class Rectangulo {
    private:
        int x = 1;
        int y = 1;
        int longitud = 1;
        int ancho = 1; 
    public:
        Rectangulo();
        void obtener(Rectangulo r1, Rectangulo r2);
        void area(Rectangulo r1, Rectangulo r2);
        void dentro(Rectangulo r1, Rectangulo r2);
        void areai(Rectangulo r1, Rectangulo r2); 
};

#endif