#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    float horasextra, horasfalta, h, premio;

    cout << "Escreva o número de horas-extra. " << endl;
    cin >> horasextra;

    cout << "Escreva o número de horas-falta." << endl;
    cin >> horasfalta;
    
    h = (horasextra * 60) - (2/3 * (horasfalta * 60));

    if (h >= 2400) {
        premio = 500;
    }
    else if (h >= 1800) {
        premio = 400;
    }
    else if (h >= 600) {
        premio = 200;
    }
    else {
        premio = 100;
    }
    cout << "O valor do premio é de R$ " << premio << endl;

    return 0;
}