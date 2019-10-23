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

    arquivoS.open("L3Q7.txt");

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

    arquivoE.open("L3Q7.txt");

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

    for(int cont = 0; cont < 1000; cont++){

        freq = count(i.begin(), i.end(), cont++);

        if(freq >= 1){

            d.push_back(DadosSensor(cont, freq));
        }
    }
}

void mostrarVetor(vector <int> i){

    cout << "Valores:";

    for(auto elemento : i){

        cout << " " << elemento ;
    }

    cout << endl;
}
