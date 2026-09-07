#include <iostream>
#include <string>
using namespace std;

enum class STATUS {
    ERROR404,
    ERROR202,
    ERROR100
};


int main() {
    STATUS STATE;

    switch (STATE)
    {
    case STATUS::ERROR404:
        cout << "ERROR404" << endl;
        break;
    case STATUS::ERROR202:
        cout << "ERROR202" << endl;
    case STATUS::ERROR100:
        cout << "ERROR100" << endl;
    default:
        break;
    }
}