#include <iostream>
#include <vector>
using namespace std;

//Partido dos Professores
//Patido Gilvanismo Social Democrata LGBT
//Partido Comunista do Ebenezer gedial e miguel

struct Candidatos {
    int numero;
    string candidato;
    string vice;
    int votos;
};

Candidatos candidatos[3] = {
    {18, "Abner", "Edjemerson", 0},
    {80, "Gilvan", "Bruna", 0},
    {13, "Gedial", "Miguel", 0}
};

void PP() {
    cout << "Incializando...." << endl;
    cout << candidatos[0].candidato << "   ";
    cout << candidatos[0].numero << "   ";
    cout << candidatos[0].vice << "   ";
    cout << "Partido: Partido dos Professores(PP)" << endl;
}

void PGSDl() {
    cout << candidatos[1].candidato << "   ";
    cout << candidatos[1].numero << "   ";
    cout << candidatos[1].vice << "   ";
    cout << "Partido: Partido Gilvanismo Social Democrata LGBT(PGSDL)" << endl;
}

void PCE() {
    cout << candidatos[2].candidato << "   ";
    cout << candidatos[2].numero << "   ";
    cout << candidatos[2].vice << "   ";
    cout << "Partido: Partido Comunista do Ebenezer (PCE)" << endl;
}

int main() {
    cout << "==========SISTEMA DE VOTAÇÂO PARA OS CANDIDATOS A PRESIDENCIA DE CLASSE 2026==========" << endl;
    cout << "Se quiser ver a lista de candidatos pressione: [1] Caso queira votar pressione [2] e logo em seguida insira o numero do seu partido" << endl;
    int input1;
    cin >> input1;
    for(;;) {
        if (input1 == 1) {
            PP();
            PGSDl();
            PCE();
            break;
        };
        if (input1 == 2) {
            int numero;
            cout << "Insira o numero do seu partido: ";
            cin >> numero;
            if (numero == 18 || numero == 13 || numero == 80) {
                cout << "Obrigado por votar no " << numero << ". Lembre-se de manter seu voto em segredo!" << endl;
                break;
            } else {
                cout << "Obrigado por votar NULO" << endl;
                break;
            }
            break;
        }
    }

}