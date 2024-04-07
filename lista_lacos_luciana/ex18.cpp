#include <iostream>
using namespace std;

int main() {
    int idade, totalPessoas = 0, mulheresSalarioBaixo = 0;
    char sexo;
    double salario, somaSalarios = 0, menorSalario;
    bool primeiroRegistro = true;
    int maiorIdade = -1, menorIdade = -1; //Para maior e menor idade do grupo
    int idadeMenorSalario;
    char sexoMenorSalario;

    while (true) {
        cout << "Digite a idade (negativa para sair): ";
        cin >> idade;
        
        if (idade < 0) {
            break;
        }
        
        cout << "Digite o sexo (M/F): ";
        cin >> sexo;
        
        cout << "Digite o salário: R$";
        cin >> salario;
        
        if (primeiroRegistro) {
            menorIdade = maiorIdade = idade;
            menorSalario = salario;
            idadeMenorSalario = idade;
            sexoMenorSalario = sexo;
            primeiroRegistro = false; // Desativa a flag após o primeiro registro
        } else {
            if (salario < menorSalario) {
                menorSalario = salario;
                idadeMenorSalario = idade;
                sexoMenorSalario = sexo;
            }
            if (idade > maiorIdade) {
                maiorIdade = idade;
            }
            if (idade < menorIdade) {
                menorIdade = idade;
            }
        }
        
        somaSalarios += salario;
        totalPessoas++;
        
        if (sexo == 'F' && salario <= 200) {
            mulheresSalarioBaixo++;
        }
    }
    
    if (totalPessoas > 0) {
        double mediaSalarios = somaSalarios / totalPessoas;
        cout << "Média dos salários do grupo: R$" << mediaSalarios << endl;
        cout << "Maior idade do grupo: " << maiorIdade << endl;
        cout << "Menor idade do grupo: " << menorIdade << endl;
        cout << "Quantidade de mulheres com salário até R$200,00: " << mulheresSalarioBaixo << endl;
        cout << "A pessoa com o menor salário tem " << idadeMenorSalario << " anos e é do sexo " << sexoMenorSalario << "." << endl;
    } else {
        cout << "Nenhum dado foi inserido." << endl;
    }

    return 0;
}

