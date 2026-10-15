#include <iostream>
using namespace std;

//Declaração de enum
enum class status {Ligado, Desligado, Processando};

//Declaração da função que verifica os status da lampada
void verify(status& luz) {
    switch (luz)
    {
    case status::Desligado:
        cout << "A luz está desligada" << endl;
        break;
    case status::Ligado:
        cout << "Luz está ligada" << endl;
        break;
    }
}

//Func principal
int main() {
    //declaração da lampada e input
    status lampada = status::Processando;
    int input;
    cin >> input;
    //Condicional que verifica o input e executa conforme o resultado
    if (input == 0) {
        lampada = status::Desligado;
        verify(lampada);
    } else if(input == 1) {
        lampada = status::Ligado;
        verify(lampada);
    }
}