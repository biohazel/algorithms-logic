#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int contador = 1, idade, pessoasMais50 = 0, pessoas10a20 = 0, pessoasMenos40kg = 0;
    float peso, altura, somaAlturas10a20 = 0;

    while(contador <= 5) {
        cout << "Digite sua idade: ";
        cin >> idade;

        cout << "Digite seu peso: ";
        cin >> peso;

        cout << "Digite sua altura: ";
        cin >> altura;

        if (idade > 50) {
            pessoasMais50++;
        }

        if (idade >= 10 && idade <= 20) {
            pessoas10a20++;
            somaAlturas10a20 += altura;
        }

        if (peso < 40) {
            pessoasMenos40kg++;
        }

        contador++;
    }

    
    float porcentagemMenos40 = (pessoasMenos40kg / 5.0) * 100.0;

    cout << fixed << setprecision(2);

    
    cout << "A quantidade de pessoas com idade superior a 50 anos eh de: " << pessoasMais50 << "." << endl;
    cout << "A media das alturas das pessoas com idade entre 10 e 20 anos eh de: ";
    if (pessoas10a20 > 0) {
        cout << somaAlturas10a20 / pessoas10a20 << " m." << endl;
    } else {
        cout << "N/A (Não há pessoas nesta faixa etária)." << endl;
    }
    cout << "A porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas eh de: " << porcentagemMenos40 << "%." << endl;

    return 0;
}
