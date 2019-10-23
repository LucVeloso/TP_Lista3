#include <iostream>
#include "dadossensor.h"

using namespace std;

int main(){

    int v = 0;
    int f = 0;

    cout << "Informe o valor: ";
    cin >> v;

    cout << "Informe a frequência: ";
    cin >> f;

    DadosSensor d1(v, f);

    d1.printDados();

    return 0;
}