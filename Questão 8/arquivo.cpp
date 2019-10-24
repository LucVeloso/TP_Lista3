#include "arquivo.h"
#define MAXVAL 500
#define MAIORVALOR 1000
#define START 0
#define DIFMODQUANT 1
#define MINFREQ 1

using namespace std;

void preencherArquivo(){

    int valor = START;
    int tamValores = START;

    ofstream arquivoS;

    arquivoS.open("L3Q8.txt");

    cout << "Informe os valores (- para parar): " << endl;
    
    while(cin >> valor){

        arquivoS << valor << endl;
        tamValores++;
    }

    srand(time(NULL));

    for(int i = START; i < MAXVAL - tamValores; i++){

        arquivoS << rand()%MAIORVALOR << endl;
    }

    arquivoS.close();
}

void preencherVetor(vector <int> &i){

    int ent = START;

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

    int menor = START;
    int maior = i.size() - 1;

    cout << "Menor Valor: " << i[menor] << endl;
    cout << "Maior valor: " << i[maior] << endl;
}

void contarElementos(vector <int> i, vector <DadosSensor> &d){

    int freq = START;

    for(int valor = START; valor < MAIORVALOR; valor++){

        freq = count(i.begin(), i.end(),valor);

        if(freq > START){

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

    for(int j = START; j < i.size(); j++){

        i[j].printDados();
    }

    cout << endl;
}