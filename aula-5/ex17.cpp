<<<<<<< HEAD
#include <iostream>
#include <locale>
=======
# include <iostream>
# include <locale>
>>>>>>> e14f1520d6309c8d6c9c8e5e8a238f265f237b00

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