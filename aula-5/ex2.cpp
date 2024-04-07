#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
	int n1, n2, media;

	cout << "Digite sua nota: "; // Operador de inserção.
	cin >> n1 >> n2; // Operador de extração.

	media = (n1 + n2) / 2;

	if (media < 3) {
		cout << "REPROVADO.";
	}
	else if (media < 7) {
		cout << "EXAME.";

	} else {
		cout << "APROVADO!";
	}
}