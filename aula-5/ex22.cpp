#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int idade;
    float peso;

    cout << "Escreva sua idade." << endl;
    cin >> idade;

    cout << "Escreva seu peso." << endl;
    cin >> peso;

    if (idade < 20) {
        if (peso <= 60){
            cout << "Você se encaixa no grupo de risco 9." << endl;
        } 
        else if (peso > 60 && peso <= 90) {
            cout << "Você se encaixa no grupo de risco 8." << endl;
        }
        else {
            cout << "Você se encaixa no grupo de risco 7." << endl;
        }
    }
    else if (idade >= 20 && idade <= 50) {
        if (peso <= 60) {
            cout << "Você se encaixa no grupo de risco 6." << endl;
        }
        else if (peso > 60 && peso <= 90){
            cout << "Você se encaixa no grupo de risco 5." << endl;
        }
        else {
            cout << "Você se encaixa no grupo de risco 4." << endl;
        }
    }
    else {
        if (peso <= 60){
            cout << "Você se encaixa no grupo de risco 3." << endl;
        }
        else if (peso > 60 && peso <= 90) {
            cout << "Você se encaixa no grupo de risco 2." << endl;
        }
        else {
            cout << "Você se encaixa no grupo de risco 1." << endl;
        }
  }
  return 0;
}
