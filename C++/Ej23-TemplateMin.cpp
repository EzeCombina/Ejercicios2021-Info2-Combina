#include <iostream>

using namespace std;

template < class M > 
M menor(M numero1, M numero2){

    M min = numero1 < numero2 ? numero1 : numero2;
    return min;

}

int main()  {

    int entero1 = 2, entero2 = 5;
    float flotante1 = 5.0, flotante2 = 3.0;
    char caracter1 = 3, caracter2 = 5;

    cout << "El menor valor es(float): " << menor(float(5.), float(3.)) << endl;
    cout << "El menor valor es(int): " << menor(int(3), int(5)) << endl;
    cout << "El menor valor es(char): " << menor(char(3), char(5)) << endl;

    return 0;

}
