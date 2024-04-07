#include <iostream>
#include <iomanip>

/*Curva de Laffer*/

using namespace std;

int main() {
    float preco, qtd, fat, lucro; // Declaração de variáveis
    // Inicialização de variáveis
    preco = 5;
    qtd = 120;

    cout << setprecision(2) << fixed;
    cout << "|\tR$\t|\tQtd\t|\tFat\t|\tLucro\t|" << endl;
    // Correção do loop while com as chaves para incluir todo o bloco de execução
    while (preco >= 1) { // Correção da condição para que o loop execute corretamente
        fat = preco * qtd;
        lucro = fat - 200; // Ajuste no cálculo conforme a lógica desejada
        cout << "|\t" << preco << "\t|\t" << qtd << "\t|\t" << fat << "\t|\t" << lucro << "\t|" << endl;
        preco -= 0.5; // Redução no preço
        qtd += 26; // Aumento na quantidade
    }

    return 0;
}


