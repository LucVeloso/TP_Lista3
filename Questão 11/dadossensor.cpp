#include "dadossensor.h"
#define START 0

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

    cout << "\nValor = " << getValor() << endl;
    cout << "Frequência = " << getFrequencia() << endl;
}