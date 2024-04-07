<<<<<<< HEAD
#include <iostream>
#include <locale>
=======
# include <iostream>
# include <locale>
>>>>>>> e14f1520d6309c8d6c9c8e5e8a238f265f237b00

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