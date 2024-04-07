#include <iostream>

using namespace std;

int main() {
    int opcao;
    
    while (true) {
        cout << "Menu de opções:" << endl;
        cout << "1. Média aritmética" << endl;
        cout << "2. Média ponderada" << endl;
        cout << "3. Sair" << endl;
        cout << "Digite a opção desejada: ";
        cin >> opcao;

        if (opcao == 1) {
            double nota1, nota2;
            cout << "Digite duas notas: ";
            cin >> nota1 >> nota2;
            double mediaAritmetica = (nota1 + nota2) / 2;
            cout << "Média aritmética: " << mediaAritmetica << endl;
        } else if (opcao == 2) {
            double nota1, nota2, nota3, peso1, peso2, peso3;
            cout << "Digite três notas e seus respectivos pesos: ";
            cin >> nota1 >> peso1 >> nota2 >> peso2 >> nota3 >> peso3;
            double mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
            cout << "Média ponderada: " << mediaPonderada << endl;
        } else if (opcao == 3) {
            cout << "Saindo do programa..." << endl;
            break;
        } else {
            cout << "Opção inválida!" << endl;
        }
    }

    return 0;
}

