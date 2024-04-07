#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    //quant5060 eh a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
    // soma150 eh a soma das idades das pessoas com altura inferior a 1,50 m;
    // porcentagemAzuis eh a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; 
    //ruivas eh a quantidade de pessoas ruivas e que não possuem olhos azuis. 

    int idade, quant5060 = 0, ruivas = 0, pessoas150 = 0, azuis = 0; 
    float altura, peso, soma150 = 0, porcentagemAzuis;
    char corOlhos, corCabelos;
    int contador = 1;

    while(contador <= 6) {
        cout << "Digite sua idade: ";
        cin >> idade;

        cout << "Digite seu peso: ";
        cin >> peso;

        cout << "Digite sua altura: ";
        cin >> altura;

        cout << "Digite a cor dos seus olhos. (A — azul; P — preto; V — verde; e C — castanho): ";
        cin >> corOlhos;

        cout << "Digite a cor dos seus cabelos. (P — preto; C — castanho; L— louro; e R — ruivo): ";
        cin >> corCabelos;

        if (idade > 50 && peso < 60) {
            quant5060++;
        }
        if (altura < 1.50) {
            pessoas150++;
            soma150 += idade;
        }
        if (corOlhos == 'A') {
            azuis++;
        }
        if (corCabelos == 'R' && corOlhos != 'A') {
            ruivas++;
        }

        contador++;
    } 

    porcentagemAzuis = (azuis / 6.0) * 100;
    
    cout << fixed << setprecision(2);

    cout << "A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg é de: " << quant5060 << endl;
    
    if (pessoas150 > 0) {
        cout << "A média das idades das pessoas com altura inferior a 1,50 m é de: " << soma150 / pessoas150 << endl;
    } else {
        cout << "Não há pessoas com altura inferior a 1,50 m." << endl;
    }
    cout << "A porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas é de: " << porcentagemAzuis << "%" << endl;
    cout << "A quantidade de pessoas ruivas e que não possuem olhos azuis é de: " << ruivas << endl;

    return 0;
}
