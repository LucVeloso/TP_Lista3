#include "dadossensor.h"
#define START 0

using namespace std;

DadosSensor::DadosSensor(){

    valor = START;
    frequencia = START;
}

DadosSensor::DadosSensor(int v, int f){

    valor = v;
    frequencia = f;
}

int DadosSensor::getValor(){

    return valor;
}

int DadosSensor::getFrequencia(){

    return frequencia;
}

void DadosSensor::printDados(){

    cout << "Valor = " << getValor() << endl;
    cout << "Frequência = " << getFrequencia() << endl;
}