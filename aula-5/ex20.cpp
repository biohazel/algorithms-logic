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
    int idade;

    cout << "Escreva sua idade." << endl;
    cin >> idade;

    if (idade < 5) {
        cout << "Você ainda não tem idade para participar." << endl;
    }
    else if (idade >= 5 && idade <= 7) {
        cout << "Sua categoria é Infantil." << endl;
    }
    else if (idade >= 8 && idade <= 10) {
        cout << "Sua categoria é Juvenil." << endl;
    }
    else if (idade >= 11 && idade <= 15) {
        cout << "Sua categoria é Adolescente." << endl;
    }
    else if (idade >= 16 && idade <= 30) {
        cout << "Sua categoria é Adulto." << endl;
    }
    else {
        cout << "Sua categotria é Sênior." << endl;
    }
    return 0;
}
