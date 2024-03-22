# include <iostream>
# include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese.");

    int senha;

    cout << "Digite sua senha." << endl;
    cin >> senha;

    if (senha == 4531) {
        cout << "Acesso permitido." << endl;
    }
    else {
        cout << "Acesso negado." << endl;
    }
    return 0;
}