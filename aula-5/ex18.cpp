# include <iostream>
# include <locale>

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