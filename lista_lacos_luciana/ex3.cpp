#include <iostream>
using namespace std;

int main(){
    const int numero_pessoas = 8;
    int idade;
    int contador = 0;
    int ate15 = 0;
    int de16a30 = 0;
    int de31a45 = 0;
    int de46a60 = 0;
    int acima60 = 0;

    cout << "Digite a idade de " << numero_pessoas << " pessoas." << endl;

    while (contador < numero_pessoas) {
        cin >> idade;

        if(idade <= 15) {
            ate15++;
        } else if (idade <= 30) {
            de16a30++;
        } else if (idade <= 45) {
            de31a45++;
        } else if (idade <= 60) {
            de46a60++;
        } else {
            acima60++;
        }

        contador++;

    }

    cout << "Quantidade de pessoas por faixa etaria: " << endl;
    cout << "Ate 15 anos: " << ate15 << endl;
    cout << "De 16 a 30 anos: " << de16a30 << endl;
    cout << "De 31 a 45 anos: " << de31a45 << endl;
    cout << "De 46 a 60 anos: " << de46a60 << endl;
    cout << "Acima de 60 anos: " << acima60 << endl;

    int percentualPrimeiraFaixa = ate15 * 100 / numero_pessoas; 
    int percentualUltimaFaixa = acima60 * 100 / numero_pessoas;

    cout << "Porcentagem de pessoas na primeira faixa etária: " << percentualPrimeiraFaixa << "%" << endl;
    cout << "Porcentagem de pessoas na última faixa etária: " << percentualUltimaFaixa << "%" << endl;

    return 0;
             
}

    
