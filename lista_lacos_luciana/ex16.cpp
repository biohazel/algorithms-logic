#include <iostream>

using namespace std;

int main() {
    int idade = 0, somaIdades = 0, contadorIdades = 0;

    while (true) {
        cout << "Digite sua idade (ou digite 0 para encerrar): ";
        cin >> idade;
        if (idade == 0) {
            break;
        }
        //Lembrar de separar o acumulador a variável que recebe a entrada. 
        somaIdades += idade;
        contadorIdades++; 
    }
    if (contadorIdades > 0) {
        cout << "A média das idades é de " << static_cast<double>(somaIdades) / contadorIdades << endl;
    } else {
        cout << "Nenhuma idade foi digitada." << endl;
    }

    return 0;
}
