// Faça um programa que receba três números e mostre o maior.

# include <iostream> 
# include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3;
        cout << "Escreva três números: ";

    cin >> n1 >> n2 >> n3;

    if (n1 >= n2 && n1 >= n3) {
        cout << "O maior número é: " << n1;
    }
    else if (n2 >= n3 && n2 >= n3) {
        cout << "O maior número é: " << n2;
    }
    else {
        cout << "O maior número é: " << n3;
    }
    return 0;
}

