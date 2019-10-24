#include <iostream>
#include <fstream>
#include <vector>
#define MAXVAL 500
#define MAIORVALOR 1000

using namespace std;

int main(){

    ofstream arquivo;

    arquivo.open("L3Q2.txt");

    srand(time(NULL));

    for(int i = 0; i < MAXVAL; i++){

        arquivo << rand()%MAIORVALOR << endl;
    }

    arquivo.close();

    return 0;
}