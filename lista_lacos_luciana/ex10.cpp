#include <iostream>

using namespace std;

int main() {
    int contador = 0;
    int numero, somaPares = 0, somaPrimos = 0;

    cout << "Digite dez números: " << endl;
    while (contador < 10) {
        cin >> numero;

        if (numero % 2 == 0) {
            somaPares += numero;
        }

        if (numero > 1) { 
            int divisores = 0;
            int testDivisor = 1;
            while (testDivisor <= numero) {
                if (numero % testDivisor == 0) {
                    divisores++;
                }
                testDivisor++;
            }

            // Se o número tem exatamente 2 divisores (1 e ele mesmo), então é primo
            if (divisores == 2) {
                somaPrimos += numero;
            }
        }

        contador++;
    }

    cout << "Soma dos números pares: " << somaPares << endl;
    cout << "Soma dos números primos: " << somaPrimos << endl;

    return 0;
}
