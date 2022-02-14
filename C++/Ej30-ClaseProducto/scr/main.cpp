#include <iostream>
#include "Ej30-ClaseProducto.cpp"

using namespace std;

int main()  {

    per p2("Leche", 50.3, 5, 2);       // Nombre -- Precio -- Cantidad -- Dias de caducidad que le quedan al producto
    noper p3("Nueces", 35.6, 4, 'a');  // Nombre -- Precio -- Cantidad -- Tipo 

    cout << "El precio de | " << p2.get_nombre(); cout << " | es: " << p2.get_precio() << endl;

    cout << "El precio de | " << p3.get_nombre(); cout << " | es: " << p3.get_precio() << endl;

    return 0;

}