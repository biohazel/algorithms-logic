#include <iostream>
#include <locale>

using namespace std;

int main () {
    setlocale(LC_ALL, "Portuguese");
    int codigo;
    float preco, desconto, novoPreco;

    cout << "Escreva o código do produto." << endl;
    cin >> codigo;

    cout << "Escreva o preço atual do produto." << endl;
    cin >> preco;

    if (preco <= 30) {
    desconto = 0;
    novoPreco = preco;
    } 
    else if (preco > 30 && preco <= 100) {
        desconto = preco * 10/100;
        novoPreco = preco - desconto;    
    }
    else {
        desconto = preco * 15/100;
        novoPreco = preco - desconto;
    }

    cout << "O valor do desconto é R$ " << desconto << " e o novo preço é R$ " << novoPreco;
return 0;
}

