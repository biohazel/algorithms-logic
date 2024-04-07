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