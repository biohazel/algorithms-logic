#include <iostream>
#include <locale>

using namespace std;

int main () {
    setlocale (LC_ALL, "Portuguese");
    float preco, novoPreco;

    cout << "Escreva o preço do produto: ";
    cin >> preco;

    if (preco <= 50) {
        novoPreco = preco + ( preco * 5/100);
    } 
    else if (preco > 50 && preco <= 100) {
        novoPreco = preco + preco * 10/100;
    }
    else {
        novoPreco = preco + preco * 15/100;
    }

    cout << "O novo preço é R$ " << novoPreco << endl;;

    if (novoPreco <= 80) {
        cout << "Classificação = Barato";
    } 
    else if (novoPreco > 80 && novoPreco <= 120) {
        cout << "Classificação = Normal";
    }
    else if (novoPreco > 120 && novoPreco <= 200){
        cout << "Classificação = Caro";
    } 
    else {
        cout << "Classificação = Muito Caro";
    }
return 0;
}

