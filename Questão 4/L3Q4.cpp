#include <iostream>
#include "arquivo.h"

using namespace std;

int main(){

    vector <int> valores;

    preencherArquivo();

    preencherVetor(valores);

    ordenarVetor(valores);

    extremosVetor(valores);

    return 0;
}