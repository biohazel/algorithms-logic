#include <iostream>
using namespace std;

int main() {
    double somaPeso1_10 = 0, somaPeso11_20 = 0, somaPeso21_30 = 0, somaPeso31_ = 0;
    int cont1_10 = 0, cont11_20 = 0, cont21_30 = 0, cont31_ = 0;

   
    int idade;
    double peso;

    
    for (int i = 0; i < 15; i++) {
        cout << "Informe a idade da pessoa " << i + 1 << ": ";
        cin >> idade;
        cout << "Informe o peso da pessoa " << i + 1 << " (em kg): ";
        cin >> peso;

        
        if (idade >= 1 && idade <= 10) {
            somaPeso1_10 += peso;
            cont1_10++;
        } else if (idade >= 11 && idade <= 20) {
            somaPeso11_20 += peso;
            cont11_20++;
        } else if (idade >= 21 && idade <= 30) {
            somaPeso21_30 += peso;
            cont21_30++;
        } else if (idade >= 31) {
            somaPeso31_ += peso;
            cont31_++;
        }
    }

    
    cout << "Médias dos pesos por faixa etária:" << endl;
    if (cont1_10 > 0)
        cout << "De 1 a 10 anos: " << somaPeso1_10 / cont1_10 << " kg" << endl;
    else
        cout << "De 1 a 10 anos: Não houve entradas." << endl;

    if (cont11_20 > 0)
        cout << "De 11 a 20 anos: " << somaPeso11_20 / cont11_20 << " kg" << endl;
    else
        cout << "De 11 a 20 anos: Não houve entradas." << endl;

    if (cont21_30 > 0)
        cout << "De 21 a 30 anos: " << somaPeso21_30 / cont21_30 << " kg" << endl;
    else
        cout << "De 21 a 30 anos: Não houve entradas." << endl;

    if (cont31_ > 0)
        cout << "De 31 anos para cima: " << somaPeso31_ / cont31_ << " kg" << endl;
    else
        cout << "De 31 anos para cima: Não houve entradas." << endl;

    return 0;
}

