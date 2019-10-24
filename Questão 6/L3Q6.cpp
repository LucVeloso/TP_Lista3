#include <iostream>
#include "dadossensor.h"
#define START 0

using namespace std;

int main(){

    int v = START;
    int f = START;

    cout << "Informe o valor: ";
    cin >> v;

    cout << "Informe a frequência: ";
    cin >> f;

    DadosSensor d1(v, f);

    d1.printDados();

    return 0;
}