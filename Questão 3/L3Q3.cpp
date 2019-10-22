#include <iostream>
#include "arquivo.h"

using namespace std;

int main(){

    vector <int> valores;

    preencherArquivo();

    preencherVetor(valores);

    mostrarVetor(valores);    

    return 0;
}