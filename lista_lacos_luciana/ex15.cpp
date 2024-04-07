#include <iostream>

using namespace std;

int main() {
    int numSim = 0, numNao = 0, mulherSim = 0, numHomem = 0, respC = 0;
    char sexo[] = {'F', 'M', 'F', 'M', 'F', 'F', 'M', 'F', 'M', 'F'};
    char resp[] = {'S', 'N', 'S', 'N', 'S', 'S', 'N', 'S', 'N', 'S'};

    for (int i = 0; i < 10; i++) {
        if (resp[i] == 'S') {
            numSim++;
        }

        if (resp[i] == 'N') {
             numNao++;
        }
        if (sexo[i] == 'F' && resp[i] == 'S') {
            mulherSim++;
        }

        if (sexo[i] == 'M') {
            numHomem++;
            if (resp[i] == 'N') {
                respC++;
            }
        }
    }

    cout << "O número de pessoas que responderam sim é de " << numSim << endl;
    cout << "O número de pessoas que responderam não é de " << numNao << endl;
    cout << "O número de mulheres que responderam sim é de " << mulherSim << endl;
    
    if (numHomem > 0) {
        cout << "A percentagem de homens que responderam não, entre todos os homens analisados é de " << (respC * 100.0) / numHomem << "%" << endl;
    } else {
        cout << "Não há homens na amostra." << endl;
    }

    return 0;
}
