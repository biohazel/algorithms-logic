#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    float num1, num2;
    char opcao;

    cout << "Digite dois números: ";
    cin >> num1 >> num2;

    cout << "Escolha uma das seguintes operações:" << endl;
    cout << "a) O primeiro número elevado ao segundo número." << endl;
    cout << "b) Raiz quadrada de cada um dos números." << endl;
    cout << "c) Raiz cúbica de cada um dos números." << endl;
    cout << "Sua escolha (a, b, c): ";
    cin >> opcao;

    if (opcao == 'a') {
        cout << "Resultado: " << pow(num1, num2) << endl;
    } else if (opcao == 'b') {
        cout << "Raiz quadrada do primeiro número: " << sqrt(num1) << endl;
        cout << "Raiz quadrada do segundo número: " << sqrt(num2) << endl;
    } else if (opcao == 'c') {
        cout << "Raiz cúbica do primeiro número: " << cbrt(num1) << endl;
        cout << "Raiz cúbica do segundo número: " << cbrt(num2) << endl;
    } else {
        cout << "Opção inválida." << endl;
    }

    return 0;
}

