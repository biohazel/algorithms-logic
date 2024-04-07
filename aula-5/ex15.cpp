#include <iostream>
#include <locale>

using namespace std;

int main () {
    setlocale(LC_ALL, "Portuguese");
    int investimento;
    float valor;

    cout << "Escreva o valor do investimento." << endl;
    cin >> valor;

    cout << "Qual o tipo de investimento? Existem dois tipos. 1-Poupança e 2-Fundos de Renda Fixa." << endl;
    cin >> investimento;

    if (investimento == 1) {
        valor = valor + (valor * 3/100);
        cout << "O valor corrigido é de R$ " << valor << endl ;  
        }
        else {
            valor = valor + (valor * 4/100);
            cout << "O valor corrigido é de R$ " << valor << endl;
        }
        return 0;
    }