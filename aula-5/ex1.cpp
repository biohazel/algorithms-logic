#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3, n4, media;

    cout << "Informe as notas: ";
    cin >> n1 >> n2 >> n3 >> n4;

    media = (n1 + n2 + n3 + n4) / 4;
    cout << "Sua média " << media << endl;
    
    if (media >= 7) 
        cout << "APROVADO!!!!" << endl;
    else
        cout << "REPROVADO!!!!" << endl;

    return 0;
}