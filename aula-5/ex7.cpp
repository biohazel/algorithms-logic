#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario, desconto, salarioReajustado;

    cout << "Escreva o valor do seu salário.";
    cin >> salario;

    salarioReajustado = salario + (salario * 30/100);

    if (salario <= 500) {
        cout << "O valor do seu salário reajustado é de  " << salarioReajustado << endl;
    } 
    else { 
        cout << "Você não tem direito ao aumento." << endl;

    }
    return 0;
}