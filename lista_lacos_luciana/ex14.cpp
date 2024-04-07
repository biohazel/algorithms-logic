# include <iostream>

# define N 15

using namespace std;

int main () {
    int i, opiniao, idade, n_otimo = 0, n_regular = 0, n_bom = 0;
    float media_idade_otimo = 0, percentual_bom;

    i = 0;
    while (i < N) {
        cout << "Informe sua idade: ";
        cin >> idade;
        cout << "Qual a sua opinião sobre o filme?";
        cout << "\n[3]-Otimo\n[2]-Bom\n[1]-Regular" << endl;
        cin >> opiniao;

        if(opiniao == 3){
            media_idade_otimo += idade;
            n_otimo++;

        } else if (opiniao == 1){
            n_regular++;
        } else if (opiniao == 2) {
            n_bom++;
        }

        i++;
    }

    media_idade_otimo /= N;
    percentual_bom = (float)n_bom / N * 100;
    cout << "Média de idade dos que responderam ótimo: " << media_idade_otimo << endl;
    cout << n_regular << " pessoas responderam regular." << endl;
    cout << percentual_bom << "% de pessoas responderam bom" << endl;

    return 0;
}



