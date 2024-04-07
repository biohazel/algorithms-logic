#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    float salario, salarioReajustado1, salarioReajustado2;

    cout << "Digite seu salário: ";
    cin >> salario;

    salarioReajustado1 = salario + (salario * 35/100);
    salarioReajustado2 = salario + (salario * 15/100);

    if (salario <= 300) {
        cout << "Seu salário reajustado é de " << salarioReajustado1;
    }
    else {
        cout << "Seu salário reajustado é de " << salarioReajustado2;
    }
    return 0;
}


