#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distrib(1, 100);

    int secreto = distrib(gen);
    int palpite = 0;
    int tentativas = 5;

    while (true) {
        cin >> palpite;
        if (palpite < secreto) {
            cout << "Muito baixo" << endl;
            tentativas - 1;
        } else if(palpite > secreto) {
            cout << "Muito alto" << endl;
            tentativas -1;
        } else if (palpite == secreto) {
            cout << "Parábens você ganhou" << endl;
            break;
        }
        if (tentativas <= 0) {
            cout << "Acabou os pontos" << endl;
            break;
        }
    }
}