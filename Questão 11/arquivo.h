#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include "dadossensor.h"
#include <iomanip>

using namespace std;

void preencherArquivo(){

    int valor = 0;
    int tamValores = 0;

    ofstream arquivoS;

    arquivoS.open("L3Q11.txt");

    /*cout << "Informe os valores (- para parar): " << endl;
    
    while(cin >> valor){

        arquivoS << valor << endl;
        tamValores++;
    }
    *///a função de procura n carrega se essa busca for parada
    srand(time(NULL));

    for(int i = 0; i < 500 - tamValores; i++){

        arquivoS << rand()%1000 << endl;
    }

    arquivoS.close();
}

void preencherVetor(vector <int> &i){

    int ent = 0;

    ifstream arquivoE;

    arquivoE.open("L3Q11.txt");

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

    ofstream arquivoS;

    arquivoS.open("Saida.txt");

    stable_sort(i.begin(), i.end(), comp);
    
    arquivoS.fill(' ');
    arquivoS.width(11);
    arquivoS << left << "Valor" << right << "Frequência" << endl;
  
    for(int j = 0; j < 10; j++){

        arquivoS.width(11);
        arquivoS << left << i[j].getValor() << right << i[j].getFrequencia() << endl;
    }

    arquivoS.close();

    cout << endl;
}

void pesquisarVetor(vector <int> i){

    char resp;
    int valor = 0;
    int ap = 0;

    cout << "Pesquisar valor no vetor (s/n)?" << endl;
    cin >> resp;

    if(resp == 's' or resp == 'S'){

        cout << "Qual o valor a procurar: ";
        cin >> valor;

        ap = count(i.begin(), i.end(), valor);

        if(ap >= 0) cout << "O valor aparece " << ap << " vezes no arquivo!" << endl;
        else cout << "O valor aparece " << ap << " vezes no arquivo!" << endl;
    }
}