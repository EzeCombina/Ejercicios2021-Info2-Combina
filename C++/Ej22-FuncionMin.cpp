#include <iostream>

using namespace std;

void menor(float numero1, float numero2){

    int min = numero1 <= numero2 ? numero1 : numero2;
    cout << "El menor es(float) = " << min << endl;

}

void menor(int numero1, int numero2){

    int min = numero1 <= numero2 ? numero1 : numero2;
    cout << "El menor es(int) = " << min << endl;

}

int main()  {

    menor(float(5.0), float(3.0));
    menor(int(3), int(5));

    return 0;

}