#include <iostream>
using namespace std;

int main() {
    int voto, totalVotos = 0, votosCandidato[4] = {0}, votosNulos = 0, votosBrancos = 0;

    while (true) {
        cout << "Digite o código do voto (1-4 para candidatos, 5 para nulo, 6 para branco, 0 para finalizar): ";
        cin >> voto;

        if (voto == 0) {
            break; 
        } else if (voto >= 1 && voto <= 4) {
            votosCandidato[voto - 1]++; 
            totalVotos++; 
        } else if (voto == 5) {
            votosNulos++; 
            totalVotos++;
        } else if (voto == 6) {
            votosBrancos++; 
            totalVotos++;
        } else {
            cout << "Código inválido! Por favor, digite um código válido." << endl;
        }
    }

    if (totalVotos > 0) {
        cout << "Total de votos para cada candidato:" << endl;
        for (int i = 0; i < 4; i++) {
            cout << "Candidato " << (i + 1) << ": " << votosCandidato[i] << " votos" << endl;
        }
        cout << "Total de votos nulos: " << votosNulos << endl;
        cout << "Total de votos em branco: " << votosBrancos << endl;
        cout << "Porcentagem de votos nulos sobre o total de votos: " << static_cast<double>(votosNulos) / totalVotos * 100 << "%" << endl;
        cout << "Porcentagem de votos em branco sobre o total de votos: " << static_cast<double>(votosBrancos) / totalVotos * 100 << "%" << endl;
    } else {
        cout << "Nenhum voto foi registrado." << endl;
    }

    return 0;
}
