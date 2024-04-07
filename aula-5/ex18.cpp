<<<<<<< HEAD
#include <iostream>
#include <locale>
=======
# include <iostream>
# include <locale>
>>>>>>> e14f1520d6309c8d6c9c8e5e8a238f265f237b00

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int idade;

    cout << "Escreva sua idade." << endl;
    cin >> idade;

    if (idade < 18) {
        cout << "Você é menor de idade." << endl;
    }
    else {
        cout << "Você é maior de idade." << endl;
    }
  return 0;
}