#include <iostream>
#include <fstream>
using namespace std;


int main() {
    ofstream arquivo("dados.txt");
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    arquivo << "olá mundo\n";
    arquivo << "estou aprendendo c++\n";
}