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