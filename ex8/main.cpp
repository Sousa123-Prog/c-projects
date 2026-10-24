#include <iostream>
using namespace std;

template <typename T>

void trocar(T &var1, T &var2) {
    T temp = var1;
    var1 = var2;
    var2 = temp;
    cout << var1 << "\n" << var2 << "\n";
}

int main() {
    int a = 10;
    int b = 20;
    trocar(a, b);
    char c = 'a';
    char d = 'b';
    trocar(c, d);
}