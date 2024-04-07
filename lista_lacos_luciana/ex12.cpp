#include <iostream>

using namespace std;

int main() {
    int contador = 0; 
    int numero; 
    int quantidadePrimos = 0; 

    cout << "Digite dez números: " << endl;
    while (contador < 10) {
        cin >> numero;
        if (numero > 1) {
            int divisores = 0;
            for (int testDivisor = 1; testDivisor <= numero; testDivisor++) {
                if (numero % testDivisor == 0) {
                    divisores++;
                }
            }
            if (divisores == 2) {
                quantidadePrimos++;
            }
        }
        contador++; 
    }
    cout << "Quantidade de números primos digitados: " << quantidadePrimos << endl;
    return 0;
}
