#include <iostream>
using namespace std;

int main() {
    float valorReais, taxaCambio, valorDolares;
    cout << "Digite o valor em reais: ";
    cin >> valorReais;
    cout << "Digite a taxa de cambio (valor de 1 dolar em reais): ";
    cin >> taxaCambio;
    valorDolares = valorReais / taxaCambio;
    cout << "O valor em dolares eh: " << valorDolares << endl;
    return 0;
}

