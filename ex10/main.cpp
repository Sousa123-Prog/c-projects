#include <iostream>
using namespace std;

void comparar(int& var1, int& var2, int& var3) {
    //condicionais maior e menor
    if (var1 > var2 && var1 > var3) {
        cout << "O maior é o " << var1 << endl;
    } else if (var2 > var1 && var2 > var3) {
        cout << "O maior é o " << var2 << endl;
    } else if(var3 > var2 && var3 > var1) {
        cout << "O maior é o " << var3 << endl;
    }

    if (var1 == var2 || var1 == var3 || var2 == var1 || var2 == var3 || var3 == var1 || var3 == var2) {
        cout << "Há números iguais" << endl;
    }

    if (var1 == var2 && var1 == var3 && var2 == var1 && var2 == var3 && var3 == var1 && var3 == var2) {
        cout << "Todos os números são iguais" << endl;
    }
}

int main() {
    cout << "insira 3 números" << endl;
    int var1;
    int var2;
    int var3;
    cin >> var1 >> var2 >> var3;
    comparar(var1, var2, var3);

}