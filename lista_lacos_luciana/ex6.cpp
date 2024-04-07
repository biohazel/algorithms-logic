# include <iostream>
# include <iomanip>

using namespace std;

int main() {
    char codigoCompra;
    float valorTotalCompras = 0, valorTotalVista = 0, valorTotalPrazo = 0, valorCompra, valorPrimeiraPrestacao; 
    int contador = 1;


    while(contador <= 15) {
        cout << "Digite v se sua compra eh a vista e p se sua compra eh a prazo." << endl;
        cin >> codigoCompra;

        cout << "Digite o valor da compra." << endl;
        cin >> valorCompra;

        if(codigoCompra == 'v' || codigoCompra == 'V') {
            valorTotalVista += valorCompra;
        } else if(codigoCompra == 'p' || codigoCompra == 'P') {
            valorTotalPrazo += valorCompra;
        }

        contador++;
    }
    valorTotalCompras = valorTotalVista + valorTotalPrazo;
    valorPrimeiraPrestacao = valorTotalPrazo / 3;

    cout << fixed << setprecision(2);

    cout << "Valor total das compras a vista: " << valorTotalVista << endl;
    cout << "Valor total das compras a prazo: " << valorTotalPrazo << endl;
    cout << "Valor total das compras: " << valorTotalCompras << endl;
    cout << "Valor da primeira prestacao das compras a prazo: " << valorPrimeiraPrestacao << endl;

    return 0;

}








