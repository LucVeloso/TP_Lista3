#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> valores;
    int valor = 0;

    cout << "Informe os valores (- para parar): " << endl;
    
    while(cin >> valor){

        valores.push_back(valor);
    }

    cout << "Valores:";

    for(auto elemento : valores){

        cout << " " << elemento ;
    }

    cout << endl;

    return 0;
}