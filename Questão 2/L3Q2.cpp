#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){

    ofstream arquivo;

    arquivo.open("L3Q2.txt");

    srand(time(NULL));

    for(int i = 0; i < 500; i++){

        arquivo << rand()%1000 << endl;
    }

    arquivo.close();

    return 0;;
}