#include <iostream>
#include <map>
using namespace std;

map<string, int> list;

void inserir() {
    string name;
    int number;
    cin >> name >> number;
    list.insert({name, number});
}

void exibir() {
    for (const auto& [key, number] : list) {
        cout << key << "=>" << number << endl;
    }
}

int main() {
    cout << "Bem vindo ao registro de idade" << endl << "Aqui vai as seguintes instruções: 1 para inserir dados e 2 para ver os dados" << endl;
    int input;
    cin >> input;
    for(;;) {
        if (input == 1) {
            cout << "insira a quantidade de pares que deseja inserir" << endl;
            int quantidade;
            cin >> quantidade;
            for (int i = 0; i < quantidade; i++) {
                inserir();
            }
            exibir();
            break;

        }
    }

}