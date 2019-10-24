#include "arquivo.h"
#define MAXVAL 500
#define MAIORVALOR 1000
#define START 0
#define DIFMODQUANT 1
#define MINFREQ 1
#define AJUSTE 1
#define REP 10
#define LARGTITULO 11
#define LARGMAX 25

using namespace std;

void preencherArquivo(){

    int valor = START;
    int tamValores = START;

    ofstream arquivoS;

    arquivoS.open("L3Q10.txt");

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

    arquivoE.open("L3Q10.txt");

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
    int maior = i.size() - DIFMODQUANT;

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

    ofstream arquivoS;

    arquivoS.open("Saida.txt");

    stable_sort(i.begin(), i.end(), comp);
    
    arquivoS.fill(' ');
    arquivoS.width(LARGTITULO);
    cout.fill(' ');
    cout.width(LARGMAX);
    cout << left << "\nValor" << right << "Frequência" << endl;
    arquivoS << left << "Valor" << right << "Frequência" << endl;
    
    for(int j = 0; j < i.size(); j++){

        arquivoS.fill(' ');
        arquivoS.width(LARGTITULO);
        arquivoS << left << i[j].getValor() << right << i[j].getFrequencia() << endl;
    }

    for(int j = 0; j < REP; j++){

        cout.fill(' ');
        cout.width(LARGMAX - AJUSTE);
        cout << left << i[j].getValor() << right << i[j].getFrequencia() << endl;
    }

    arquivoS.close();

    cout << endl;
}

void pesquisarVetor(vector <int> i){

    char resp;
    int valor = START;
    int ap = START;

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