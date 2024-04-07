#include <iostream>

using namespace std;

int main() {
    int canal, pessoas, totalPessoas = 0;
    int audiencia4 = 0, audiencia5 = 0, audiencia7 = 0, audiencia12 = 0;

    while (true) {
        cout << "Digite o número do canal (ou 0 para encerrar): ";
        cin >> canal;

        if (canal == 0) {
            break;
        }

        cout << "Digite o número de pessoas assistindo: ";
        cin >> pessoas;

        switch (canal) {
            case 4:
                audiencia4 += pessoas;
                break;
            case 5:
                audiencia5 += pessoas;
                break;
            case 7:
                audiencia7 += pessoas;
                break;
            case 12:
                audiencia12 += pessoas;
                break;
            default:
                cout << "Canal desconhecido. Dados não contabilizados." << endl;
                continue;
        }

        totalPessoas += pessoas;
    }

    if (totalPessoas > 0) { 
        cout << "Porcentagem de audiência por canal:" << endl;
        cout << "Canal 4: " << (audiencia4 * 100.0) / totalPessoas << "%" << endl;
        cout << "Canal 5: " << (audiencia5 * 100.0) / totalPessoas << "%" << endl;
        cout << "Canal 7: " << (audiencia7 * 100.0) / totalPessoas << "%" << endl;
        cout << "Canal 12: " << (audiencia12 * 100.0) / totalPessoas << "%" << endl;
    } else {
        cout << "Nenhuma audiência foi registrada." << endl;
    }

    return 0;
}



