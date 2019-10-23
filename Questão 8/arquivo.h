#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include "dadossensor.h"

using namespace std;

void preencherArquivo(){

    int valor = 0;
    int tamValores = 0;

    ofstream arquivoS;

    arquivoS.open("L3Q8.txt");

    cout << "Informe os valores (- para parar): " << endl;
    
    while(cin >> valor){

        arquivoS << valor << endl;
        tamValores++;
    }

    srand(time(NULL));

    for(int i = 0; i < 500 - tamValores; i++){

        arquivoS << rand()%1000 << endl;
    }

    arquivoS.close();
}

void preencherVetor(vector <int> &i){

    int ent = 0;

    ifstream arquivoE;

    arquivoE.open("L3Q8.txt");

    while(arquivoE >> ent){

        i.push_back(ent);
    }

    arquivoE.close();
}

void ordenarVetor(vector <int> &i){

    sort(i.begin(), i.end());
}

void extremosVetor(vector <int> i){

    int menor = 0;
    int maior = i.size() - 1;

    cout << "Menor Valor: " << i[menor] << endl;
    cout << "Maior valor: " << i[maior] << endl;
}

void contarElementos(vector <int> i, vector <DadosSensor> &d){

    int freq = 0;

    for(int valor = 0; valor < 1000; valor++){

        freq = count(i.begin(), i.end(),valor);

        if(freq > 0){

            d.push_back(DadosSensor(valor, freq));
        }
    }
}

bool comp(DadosSensor i, DadosSensor j){

    return i.getFrequencia() >= j.getFrequencia();
}

void mostrarVetor(vector <DadosSensor> &i){

    stable_sort(i.begin(), i.end(), comp);

    cout << "\nDados:" << endl;

    for(int j = 0; j < i.size(); j++){

        i[j].printDados();
    }

    cout << endl;
}

