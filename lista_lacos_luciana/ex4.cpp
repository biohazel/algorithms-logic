#include <iostream>
using namespace std;

int main() {
    int numero;
    int contador = 0;

    cout << "Digite um numero inteiro: " << endl;
    cin >> numero;

    while (contador <= 10) {
        cout << numero << "*" << contador << "=" << numero * contador << endl;
        contador++;
    }

    return 0;
}