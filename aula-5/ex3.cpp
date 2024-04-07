#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;

        cout << "Escreva dois números: ";
        cin >> n1 >> n2;

    if (n1 < n2) {
        cout << "O menor número é: " << n1;

    }
    else {
        cout << "O menor número é: " << n2;
    }
}