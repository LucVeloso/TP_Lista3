#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include "dadossensor.h"
#include <iomanip>

using namespace std;

void preencherArquivo();

void preencherVetor(vector <int> &i);

void ordenarVetor(vector <int> &i);

void extremosVetor(vector <int> i);

void contarElementos(vector <int> i, vector <DadosSensor> &d);

bool comp(DadosSensor i, DadosSensor j);

void mostrarVetor(vector <DadosSensor> &i);

void pesquisarVetor(vector <int> i);