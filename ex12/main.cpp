#include <iostream>
#include <vector>
using namespace std;

void mostrarPosicao(vector<int>& map) {
    for (auto m : map) {
        cout << m << endl;
    }
}

int main() {
    vector<int> map = {1, 1};
    char input;
    while(true) {
        cin >> input;
        if (input == 'M' || input == 'm') {
            mostrarPosicao(map);
        }
        if (input == 'A' || input == 'a') {
            map[0] += 1;
        }
        if (input == 'D' || input == 'd') {
            map[0] -= 1;
        }
        if (input == 'W' || input == 'w') {
            map[1] += 1;
        }
        if (input == 'S' || input == 's') {
            map[1] -= 1;
        }
        if (map[0] > 10 || map[0] < 0 || map[1] > 10 || map[1] < 0) {
            cout << "Você ultrapassou o limite" << endl;
            break;
        }
        if (input == 'X' || input == 'x') {
            break;
        }
    }
    return 0;
}