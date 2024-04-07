#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int opcao;
    double salario, novoSalario, valorFerias, decimoTerceiro;
    int numeroMeses;

    while (true) {
        cout << "Menu de opções: \n1. Novo salario \n2. Ferias \n3. Décimo terceiro \n4. Sair \nDigite a opção desejada: ";
        cin >> opcao;
        cout << fixed << setprecision(2);

        if (opcao == 4) {
            cout << "Saindo do programa." << endl;
            break;
        }

        switch(opcao) {
            case 1:
                cout << "Digite seu salário: R$";
                cin >> salario;
                if (salario <= 210.00) {
                    novoSalario = salario + (salario * 0.15);
                } else if (salario > 210.00 && salario <= 600.00) {
                    novoSalario = salario + (salario * 0.10);
                } else {
                    novoSalario = salario + (salario * 0.05);
                }
                cout << "Seu novo salario é de R$" << novoSalario << endl;
                break;

            case 2:
                cout << "Digite seu salário: R$";
                cin >> salario;
                valorFerias = salario + (salario / 3);
                cout << "O valor das suas férias é de R$" << valorFerias << endl;
                break;

            case 3:
                cout << "Digite o seu salário e em seguida o número de meses trabalhados, no máximo 12: ";
                cin >> salario >> numeroMeses;
                if (numeroMeses > 12) {
                    numeroMeses = 12;
                }
                decimoTerceiro = (salario * numeroMeses) / 12;
                cout << "O valor do seu décimo terceiro é de R$" << decimoTerceiro << endl;
                break;

            default:
                cout << "Opção inválida, tente novamente." << endl;
        }
    }

    return 0;
}


