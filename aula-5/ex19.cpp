#include <iostream>
#include <locale>

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