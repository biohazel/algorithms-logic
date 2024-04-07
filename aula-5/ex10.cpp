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

    float custoFabrica, custoFinal;

    cout << "Escreva o custo de fábrica: ";
    cin >> custoFabrica;

    if (custoFabrica <= 12000) {
        custoFinal = custoFabrica + (custoFabrica * 0.05);
        cout << "O custo final é: " << custoFinal;
    }
    else if (custoFabrica > 12000 && custoFabrica <= 25000) {
        custoFinal = custoFabrica + (custoFabrica * 0.10) + (custoFabrica * 0.15);
        cout << "O custo final é " << custoFinal;
    }
    else {
        custoFinal = custoFabrica + (custoFabrica * 0.15) + (custoFabrica * 0.20);
        cout << "O custo final é " << custoFinal;
    }
    return 0;
}