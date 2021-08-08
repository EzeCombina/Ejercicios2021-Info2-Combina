#include <iostream>

using namespace std;

int main()  {

    char nombre[10], domicilio[10], ciudad[10], estado[10];
    int codigop;

    cout << "Igresar nombre: ";
    cin >> nombre;

    cout << "Ingresar domicilio: ";
    cin >> domicilio;

    cout << "Ingresar ciudad: ";
    cin >> ciudad;

    cout << "Ingresar estado: ";
    cin >> estado;

    cout << "Ingresar codigo postal: ";
    cin >> codigop;

    cout << nombre << endl;
    cout << domicilio << endl;
    cout << ciudad << ", " << estado << ", " << codigop;

    return 0;

}