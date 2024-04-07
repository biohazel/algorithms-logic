#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int codigoCliente, tipoInvestimento;
    double valorInvestido, rendimentoMensal, totalInvestido = 0, totalJuros = 0;

    cout << fixed << setprecision(2);

    while (true) {
        cout << "Digite o código do cliente (ou um número <= 0 para encerrar): ";
        cin >> codigoCliente;

        if (codigoCliente <= 0) break;

        cout << "Digite o tipo do investimento (1-Poupança, 2-Poupança plus, 3-Fundos de renda fixa): ";
        cin >> tipoInvestimento;

        cout << "Digite o valor investido: R$";
        cin >> valorInvestido;

        switch (tipoInvestimento) {
            case 1:
                rendimentoMensal = valorInvestido * 0.015;
                break;
            case 2:
                rendimentoMensal = valorInvestido * 0.02;
                break;
            case 3:
                rendimentoMensal = valorInvestido * 0.04;
                break;
            default:
                cout << "Tipo de investimento inválido." << endl;
                continue; 
        }

        cout << "Rendimento mensal do investimento: R$" << rendimentoMensal << endl;

        totalInvestido += valorInvestido;
        totalJuros += rendimentoMensal;
    }

    cout << "Total investido: R$" << totalInvestido << endl;
    cout << "Total de juros pagos: R$" << totalJuros << endl;

    return 0;
}
