#include <iostream>
#include <string>

using namespace std; 

#include "Ej28-ClaseFutbolista.cpp"

int main()  {
    
    Futbolista f1(8, "Ezequiel", "Combina");

    cout << "    DATOS DEL JUGADOR" << endl << "Nombre y apellido: "; 
    f1.get_NombreyApellido();
    cout << "Numero: " << f1.get_Numero() << endl;

    return 0;

}