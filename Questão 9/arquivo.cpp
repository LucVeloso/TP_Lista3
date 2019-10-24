#include "arquivo.h"
#define MAXVAL 500
#define MAIORVALOR 1000
#define START 0
#define DIFMODQUANT 1
#define MINFREQ 1
#define LARGDADOS 10
#define LARGTITULO 11


using namespace std;

void preencherArquivo(){

    int valor = START;
    int tamValores = START;

    ofstream arquivoS;

    arquivoS.open("L3Q9.txt");

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

    arquivoE.open("L3Q9.txt");

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
    int maior = i.size() - DIFMODQUANT;

    cout << "Menor Valor: " << i[menor] << endl;
    cout << "Maior valor: " << i[maior] << endl;
}

void contarElementos(vector <int> i, vector <DadosSensor> &d){

    int freq = START;

    for(int valor = START; valor < MAIORVALOR; valor++){

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
    arquivoS.width(LARGTITULO);
    arquivoS << left << "Valor" << right << "Frequência" << endl;
    

    for(int j = START; j < i.size(); j++){

        arquivoS.width(LARGDADOS);
        arquivoS << left << i[j].getValor() << right << i[j].getFrequencia() << endl;
    }

    arquivoS.close();

    cout << endl;
}