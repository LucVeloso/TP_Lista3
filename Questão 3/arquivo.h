#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void preencherArquivo(){

    int valor = 0;
    int tamValores = 0;

    ofstream arquivoS;

    arquivoS.open("L3Q3.txt");

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