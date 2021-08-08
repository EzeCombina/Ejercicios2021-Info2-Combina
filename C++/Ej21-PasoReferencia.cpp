#include <iostream>

using namespace std;

int tripleLlamadaPorValor(int b){

    b = b*3;

    return b;   

}

void tripleLlamadaPorReferencia(int &b){

    b = b*3;          

}



int main()  {

    int a, resultV;

    cout << "Ingresar el valor que queremos triplicar(Entero): ";
    cin >> a;

    resultV = tripleLlamadaPorValor(a);
    tripleLlamadaPorReferencia(a);

    cout << "El valor obtenido por paso de argumentos por valor es: " << resultV;
    cout << endl << "El valor obtenido por paso de argumentos por referencia es: " << a;

    return 0;

}