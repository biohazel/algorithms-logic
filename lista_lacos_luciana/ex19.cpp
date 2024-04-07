#include <iostream>
using namespace std;

int main() {
    char tipoAcao;
    double precoCompra, precoVenda, lucroAcao, lucroTotal = 0;
    int qtdLucroMaior1000 = 0, qtdLucroMenor200 = 0;

    while (true) {
        cout << "Digite o tipo da ação (ou 'F' para finalizar): ";
        cin >> tipoAcao;
        
        if (tipoAcao == 'F' || tipoAcao == 'f') {
            break; 
        }

        cout << "Digite o preço de compra da ação: R$";
        cin >> precoCompra;

        cout << "Digite o preço de venda da ação: R$";
        cin >> precoVenda;

        lucroAcao = precoVenda - precoCompra;
        cout << "Lucro da ação comercializada: R$" << lucroAcao << endl;
        
        lucroTotal += lucroAcao; 

       
        if (lucroAcao > 1000) {
            qtdLucroMaior1000++;
        } else if (lucroAcao < 200) {
            qtdLucroMenor200++;
        }
    }

    cout << "Quantidade de ações com lucro superior a R$ 1000,00: " << qtdLucroMaior1000 << endl;
    cout << "Quantidade de ações com lucro inferior a R$ 200,00: " << qtdLucroMenor200 << endl;
    cout << "Lucro total da empresa: R$" << lucroTotal << endl;

    return 0;
}
