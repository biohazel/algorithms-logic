#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float valorCarro, precoFinalVista;
    int parcelas[] = {6, 12, 18, 24, 30, 36, 42, 48, 54, 60};
    float acrescimos[] = {1.03, 1.06, 1.09, 1.12, 1.15, 1.18, 1.21, 1.24, 1.27, 1.30};

    cout << "Digite o valor do carro: ";
    cin >> valorCarro;

    precoFinalVista = valorCarro * 0.8;

    cout << fixed << setprecision(2);
    cout << "|\tQtde P\t|\tPreco Final\t|\tValor Parcela\t|" << endl;

    for (int i = 0; i < 10; ++i) {
        float precoTotal = valorCarro * (acrescimos[i]);
        float valorParcela = precoTotal / parcelas[i];
        cout << "|\t" << parcelas[i] << "\t|\t" << precoTotal << "\t|\t" << valorParcela << "\t|" << endl;
    }

    cout << "O preco final a vista eh de: " << precoFinalVista << endl;

    return 0;
}
