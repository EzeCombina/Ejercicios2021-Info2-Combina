#include <iostream>
#include "Sensor.cpp"

using namespace std;

int main()  {

    campo s(1023, 4095, 511.0);

    cout << "El valor de la aceleracion es: " << s.get_aceleracion() << "g" << endl << "El valor de la velocidad es: " << 
    s.get_velocidad() << " m/s" << endl << "El valor del campo magnetico es: " << s.get_campo() << " uT" << endl;

    return 0;

}