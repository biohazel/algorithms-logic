#include <iostream>
using namespace std;

int main() {
    int valor;
    int maiorValor = -1; 
    int menorValor = -1; 

    cout << "Digite um conjunto de valores inteiros e positivos (digite 0 para encerrar): " << endl;

    while (true) {
        cin >> valor;

        if (valor == 0) {
            break; 
        }

        if (valor < 0) {
            cout << "Valor negativo, não será considerado." << endl;
            continue;
        }

        if (maiorValor == -1) {
            maiorValor = menorValor = valor;
        } else {
           
            if (valor > maiorValor) {
                maiorValor = valor;
            }

            if (valor < menorValor) {
                menorValor = valor;
            }
        }
    }

    if (maiorValor == -1) {
        cout << "Nenhum valor positivo foi digitado." << endl;
    } else {
        cout << "O maior valor digitado foi: " << maiorValor << endl;
        cout << "O menor valor digitado foi: " << menorValor << endl;
    }

    return 0;
}
