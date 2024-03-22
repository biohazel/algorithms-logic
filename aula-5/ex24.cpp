#include <iostream>
#include <locale> 

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    float preco, aumento, novopreco, imposto;
    int categoria;
    char situacao;
    string classificacao;

    cout << "Qual o preço do produto?" << endl;
    cin >> preco;

    cout << "Qual a categoria do produto? Escolha entre 1—limpeza; 2—alimentação; 3—vestuário" << endl;
    cin >> categoria;

    cout << "Agora digite a situação. R — produtos que necessitam de refrigeração; e N — produtos que não necessitam de refrigeração." << endl;
    cin >> situacao;

    if (preco <= 25 && categoria == 1) {
        aumento = preco * 5 / 100;
    } else if (preco <= 25 && categoria == 2) {
        aumento = preco * 8 / 100;
    } else if (preco <= 25 && categoria == 3) {
        aumento = preco * 10 / 100;
    } else if (preco > 25 && categoria == 1) {
        aumento = preco * 12 / 100;
    } else if (preco > 25 && categoria == 2) {
        aumento = preco * 15 / 100;
    } else if (preco > 25 && categoria == 3) {
        aumento = preco * 18 / 100;
    }

    if (categoria == 2 || situacao == 'R') {
        imposto = preco * 5 / 100;
    } else {
        imposto = preco * 8 / 100;
    }

    novopreco = preco + aumento - imposto;

    if (novopreco <= 50) {
        classificacao = "Barato";
    } else if (novopreco > 50 && novopreco < 120) {
        classificacao = "Normal";
    } else if (novopreco >= 120) {
        classificacao = "Caro";
    }

    cout << "O valor do aumento foi de R$" << aumento << endl;
    cout << "O valor do imposto foi de R$ " << imposto << endl;
    cout << "O novo preço é R$ " << novopreco << endl;
    cout << "A classificação é " << classificacao << endl;

    return 0;
}





