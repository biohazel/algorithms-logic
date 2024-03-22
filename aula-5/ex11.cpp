# include <iostream>
# include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

	float salario, valorAumento;

	cout << "Digite seu salário: ";
	cin >> salario;

	if (salario <= 300) {
		valorAumento = salario * 0.15;
		salario += valorAumento;
		cout << "O valor do aumento foi de " << valorAumento << " e seu novo salário é " << salario;
	}
	else if (salario > 300 && salario < 600) {
		valorAumento = salario * 0.10;
		salario += valorAumento;
		cout << "O valor do aumento foi de " << valorAumento << " e seu novo salário é " << salario;
	}
	else if (salario >= 600 && salario <= 900) {
		valorAumento = salario * 0.05;
		salario += valorAumento;
		cout << "O valor do aumento foi de " << valorAumento << " e seu novo salário é " << salario;
	}
	else {
		cout << "Não houve aumento.";
	}
	return 0;
}