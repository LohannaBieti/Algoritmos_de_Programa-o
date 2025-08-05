#include <iostream>
using namespace std;

int main() {
    float valorGasto, gorjeta, totalPagar;
    cout << "Digite o valor gasto no restaurante: ";
    cin >> valorGasto;
    gorjeta = valorGasto * 0.10;
    totalPagar = valorGasto + gorjeta;
    cout << "O valor da gorjeta eh: R$ " << gorjeta << endl;
    cout << "O valor total a ser pago eh: R$ " << totalPagar << endl;
    return 0;
}

