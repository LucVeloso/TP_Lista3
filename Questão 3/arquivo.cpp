#include "arquivo.h"
#define MAXVAL 500
#define MAIORVALOR 1000
#define START 0

using namespace std;

void preencherArquivo(){

    int valor = START;
    int tamValores = START;

    ofstream arquivoS;

    arquivoS.open("L3Q3.txt");

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

    int ent = 0;

    ifstream arquivoE;

    arquivoE.open("L3Q3.txt");

    while(arquivoE >> ent){

        i.push_back(ent);
    }

    arquivoE.close();
}

void mostrarVetor(vector <int> i){

    cout << "Valores:";

    for(auto elemento : i){

        cout << " " << elemento ;
    }

    cout << endl;
}