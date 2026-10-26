//ponteiros tradicionais
#include <iostream>
using namespace std;


int main() {
    int number = 10;
    int* pointer;

    pointer = &number; //Pode ser simplificado apenas com int* pointer = &number

    cout << "Valor do número: " << number << "\n";
    cout << "Endereço: " << &number << "\n";
    cout << "valor mostrado pelo ponteiro: " << *pointer << "\n";

    return 0;
}