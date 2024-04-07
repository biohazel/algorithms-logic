/*Sei que tem redundância/non-DRY,mas foi meu processo natural de pensamento e quis deixar assim.*/

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
    float salario, gratificacao, valorReceber, imposto;

    cout << "Escreva seu salário bruto: ";
    cin >> salario;

    imposto = salario * 7/100;

    if (salario <= 350) {
       
        gratificacao = 100;
        valorReceber = salario + gratificacao - imposto;
        cout << "Seu valor a receber é R$ " << valorReceber;
    } 
    else if (salario > 350 && salario < 600) {
        gratificacao = 75;
        valorReceber = salario + gratificacao - imposto;
        cout << "Seu valor a receber é R$ " << valorReceber;
    }
    else if (salario >= 600 && salario <= 900) {
        gratificacao = 50;
        valorReceber = salario + gratificacao - imposto;
        cout << "Seu valor a receber é R$ " << valorReceber;
    } 
    else {
        gratificacao = 35;
        valorReceber = salario + gratificacao - imposto;
        cout << "Seu valor a receber é R$ " << valorReceber;
    }
    return 0;
}

   
