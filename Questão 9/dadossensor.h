#include <iostream>
#include <vector>
#ifndef DADOSSENSOR_H
#define DADOSSENSOR_H

using namespace std;

class DadosSensor{

    private:

        int valor;
        int frequencia;

    public:

        DadosSensor();
        DadosSensor(int v, int f);

        int getValor();
        int getFrequencia();
        
        void printDados();
};

#endif