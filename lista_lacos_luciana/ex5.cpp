#include <iostream>
using namespace std;

int main() {
    int tabuada;
    int numero = 1;

    while (numero <= 10) {
        int contador = 0;
        cout << "Tabuada do " << numero << ":" << endl;
        while (contador <= 10) {
             cout << numero << "*" << contador << "=" << numero * contador << endl;
             contador++;
        }
        numero++;
    }
    return 0;
}
