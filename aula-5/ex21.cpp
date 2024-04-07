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
    float preco;
    int origem;
    cout << "Escreva o preço do produto." << endl;
    cin >> preco;

    cout << "Escreva o código de origem do produto" << endl;
    cin >> origem;

    if (origem == 1) {
        cout << "O preço do produto é de R$ " << preco << " e a procedência é Sul." << endl;
    }
    else if (origem == 2) {
        cout << "O preço do produto é de R$ " << preco << " e a procedência é Norte." << endl;
    }
    else if (origem == 3) {
         cout << "O preço do produto é de R$ " << preco << " e a procedência é Leste." << endl;
    }
    else if (origem == 4) {
        cout << "O preço do produto é de R$ " << preco << " e a procedência é Oeste." << endl;
    }
    else if (origem == 5 || origem == 6) {
        cout << "O preço do produto é de R$ " << preco << " e a procedência é Nordeste." << endl;
    }
    else if (origem == 7 || origem == 8 || origem == 9) {
        cout << "O preço do produto é de R$ " << preco << " e a procedência é Sudeste." << endl;
    }
    else if (origem >= 10 && origem <= 20) {
        cout << "O preço do produto é de R$ " << preco << " e a procedência é Centro-oeste." << endl;
    }
    else if (origem >= 21 && origem <= 30) {
        cout << "O preço do produto é de R$ " << preco << " e a procedência é Nordeste." << endl;
    }
    else {
       cout << "Código de origem desconhecido." << endl;
    }
return 0;
}
    
    
