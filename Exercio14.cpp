#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salarioMinimo, quantidadeKw;
    double valorPorKw, valorTotal;

    cout << "Informe o valor do salario minimo: R$ ";
    cin >> salarioMinimo;

    cout << "Informe a quantidade de quilowatts consumida: ";
    cin >> quantidadeKw;

    valorPorKw = (salarioMinimo / 7) / 100;
    valorTotal = valorPorKw * quantidadeKw;

    cout << fixed << setprecision(2); // Exibe com 2 casas decimais

    cout << "\nValor de cada quilowatt R$: " << valorPorKw << endl;
    cout << "Valor total a pagar R$: " << valorTotal << endl;

    return 0;
}


