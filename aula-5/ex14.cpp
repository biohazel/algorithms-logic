#include <iostream>
#include <locale>

using namespace std;

int main () {
    setlocale(LC_ALL, "Portuguese");

    float salario, novoSalario;
    cout << "Escreva o salário: ";
    cin >> salario;

    if (salario <= 300) {
        novoSalario = salario + (salario * 50/100);
    }
    else if (salario > 300 && salario <= 500) {
        novoSalario = salario + (salario * 40/100);
    }
    else if (salario > 500 && salario <= 700) {
        novoSalario = salario + (salario * 30/100);
    }
    else if (salario > 700 && salario <= 800) {
        novoSalario = salario + (salario * 20/100);
    }
    else if (salario > 800 && salario <= 1000) {
        novoSalario = salario + (salario * 10/100);
    }
    else {
        novoSalario = salario + (salario * 5/100);
    }

    cout << "O novo salário é de R$ " << novoSalario;
    return 0;
}

