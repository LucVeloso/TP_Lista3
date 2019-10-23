#include <iostream>
#include "arquivo.h"
#include "dadossensor.h"

using namespace std;

int main(){

    vector <int> valores;
    vector <DadosSensor> dados;

    preencherArquivo();

    preencherVetor(valores);

    ordenarVetor(valores);

    extremosVetor(valores);

    contarElementos(valores, dados);

    return 0;
}