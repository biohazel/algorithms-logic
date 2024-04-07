#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float n1, n2, result;
    int option;

    cout << "Digite 2 números inteiros: ";
    cin >> n1 >> n2;
    
    cout << "Agora escolha um número de 1 a 4: ";
    cin >> option;

    if (option == 1) { 
        result = (n1 + n2) / 2;
        cout << "O resultado é: " << result;
    }
    else if (option == 2) {
        if (n1 > n2) {
            result = n1 - n2;
        } else {
            result = n2 - n1;
        }
        cout << "O resultado é: " << result;
    }
    else if (option == 3) {
        result = n1 * n2;
        cout << "O resultado é: " << result;
    }
    else if (option == 4) {
        if (n2 != 0) {
            result = n1 / n2;
            cout << "O resultado é: " << result;
        } else {
            cout << "O segundo número precisa ser diferente de zero.";
        }
    }
    else {
        cout << "Opção inválida.";
    }

    return 0;
}




   