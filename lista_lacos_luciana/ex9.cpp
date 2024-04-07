#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int contador = 1;
    int idade, superior90 = 0, somaIdades = 0, pessoas1030 = 0;
    float peso, altura, porcentagem1030 = 0.0, pessoas190 = 0;

    while (contador <= 10) {
        cout << "Escreva sua idade: " << endl;
        cin >> idade;
        somaIdades += idade;

        cout << "Escreva seu peso: " << endl;
        cin >> peso;

        cout << "Escreva sua altura: " << endl;
        cin >> altura;

        if (peso > 90 && altura < 1.50) {
            superior90++;
        }
        if (altura > 1.90) {
            pessoas190++;
            if (idade >= 10 && idade <= 30) {
                pessoas1030++;
            }
        }
        contador++;
    }

    if (pessoas190 > 0) {
        porcentagem1030 = (pessoas1030 / pessoas190) * 100.0;
    }

    cout << fixed << setprecision(2);
    cout << "A média da idade das dez pessoas é de: " << somaIdades / 10.0 << endl;
    cout << "A quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro é de: " << superior90 << endl;
    cout << "A porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m é de: " << porcentagem1030 << "%" << endl;

    return 0;
}


