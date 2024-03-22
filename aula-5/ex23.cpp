# include <iostream>
# include <locale>

using namespace std;

int main () {
    setlocale(LC_ALL, "Portuguese");
    int codigo, quantidade;
    float preco, desconto, precoTotal, precoFinal;

    cout << "Escreva o código do produto comprado." << endl;
    cin >> codigo;

    cout << "Escreva a quantidade comprada do produto." << endl;
    cin >> quantidade;

    if (codigo >= 1 && codigo <= 10) {
        preco = 10;
    }
    else if (codigo >= 11 && codigo <= 20) {
        preco = 15;
    }
    else if (codigo >= 21 && codigo <= 30) {
        preco = 20;
    }
    else if (codigo >= 31 && codigo <= 40) {
        preco = 30;
    } 
    else {
        cout << "Código de produto inválido." << endl;
    }

    precoTotal = preco * quantidade;

    if (precoTotal <= 250) {
        desconto = precoTotal * 5/100;
    }
    else if (precoTotal > 250 && precoTotal <= 500) {
        desconto = precoTotal * 10/100;
    }
    else {
        desconto = precoTotal * 15/100;

    }
    
    precoFinal = precoTotal - desconto;

    cout << "O preço unitário do produto é de R$ " << preco << ". " << endl;
    cout << "O preço total da nota é de R$ " << precoTotal << ". " << endl;
    cout << "O valor do desconto é de R$ " << desconto << ". " << endl;
    cout << "O preço final após o desconto é de R$ " << precoFinal << ". " << endl;

    return 0;
}
