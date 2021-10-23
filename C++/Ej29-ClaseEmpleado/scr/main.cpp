#include <iostream>
#include <string>

using namespace std; 

#include "Ej29-ClaseEmpleado.cpp"

int main()  {
    
    Comercial a(30000, "Ezequiel", 38, 40000);
    Comercial b(15000, "Agustin", 25, 20000);
    Repartidor c(3, "Ramiro", 23, 14000);
    Repartidor d(1, "Gustavo", 18, 9000);

    cout << "El salario de "; a.get_nombre(); cout << " es: " << a.get_salario() << endl; 
    cout << "El salario de "; b.get_nombre(); cout << " es: " << b.get_salario() << endl;
    cout << "El salario de "; c.get_nombre(); cout << " es: " << c.get_salario() << endl;
    cout << "El salario de "; d.get_nombre(); cout << " es: " << d.get_salario() << endl;

    return 0;

}