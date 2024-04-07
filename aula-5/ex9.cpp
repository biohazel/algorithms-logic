<<<<<<< HEAD
#include <iostream>
#include <locale>
=======
# include <iostream>
# include <locale>
>>>>>>> e14f1520d6309c8d6c9c8e5e8a238f265f237b00

using namespace std;

int main () {
    setlocale (LC_ALL, "Portuguese");

    float saldo, credito;

    cout << "Escreva seu saldo médio no último ano: ";
    cin >> saldo;

    if (saldo >= 0 && saldo <= 200) {
        credito = saldo * 10/100;
        cout << "O saldo médio é de R$  " << saldo << " e o valor do crédito é de " << credito;
    }
    else if (saldo > 200 && saldo <= 300 ) {
        credito = saldo * 20/100;
        cout << "O saldo médio é de R$  " << saldo << " e o valor do crédito é de " << credito;
    }
    else if  (saldo > 300 && saldo <= 400) {
        credito = saldo * 25/100;
        cout << "O saldo médio é de R$ " << saldo << " e o valor do crédito é de " << credito;

    }
    else {
        credito = saldo * 30/100;
        cout << "O saldo médio é de R$ " << saldo << " e o valor do crédito é de " << credito;
    }
return 0;
}