<<<<<<< HEAD
#include <iostream>
#include <locale>
=======
# include <iostream>
# include <locale>
>>>>>>> e14f1520d6309c8d6c9c8e5e8a238f265f237b00

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


