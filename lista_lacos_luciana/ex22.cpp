#include <iostream>
using namespace std;

int main() {
    int idade, pessoasMais50 = 0;
    double altura, somaAlturas = 0.0, mediaAlturas;

    while (true) {
        cout << "Digite a idade: ";
        cin >> idade;
        
        if (idade <= 0) break;

        cout << "Digite a altura (em metros): ";
        cin >> altura;

        if (idade > 50) {
            somaAlturas += altura;
            pessoasMais50++; 
        }
    }

    if (pessoasMais50 > 0) { 
        mediaAlturas = somaAlturas / pessoasMais50; 
        cout << "Média das alturas das pessoas com mais de 50 anos: " << mediaAlturas << " metros" << endl;
    } else {
        cout << "Não foram inseridas pessoas com mais de 50 anos." << endl;
    }

    return 0;
}
