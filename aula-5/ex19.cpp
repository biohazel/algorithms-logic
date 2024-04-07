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
    float h, pesoIdeal;
    char sexo;

    cout << "Escreva seu sexo, M ou F.";
    cin >> sexo;

    cout << "Escreva sua altura.";
    cin >> h;

    //Aspas simples para 1 char

    if (sexo == 'F') {
        pesoIdeal = (62.1 * h) - 44.7;
    }
    else {
        pesoIdeal = (72.7 * h) - 58;
    }
    cout << "Seu peso ideal é " << pesoIdeal << " kg." << endl;
    return 0;
}