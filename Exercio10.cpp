#include <iostream>
using namespace std;

int main() {
    float vendas, comissaoVendas, comissaoSapatos, salarioTotal;
    int sapatosVendidos;
    cout << "Digite o valor total das vendas do mes: ";
    cin >> vendas;
    cout << "Digite o numero de sapatos vendidos: ";
    cin >> sapatosVendidos;
    comissaoVendas = vendas * 0.20;
    comissaoSapatos = sapatosVendidos * 5;
    salarioTotal = comissaoVendas + comissaoSapatos;
    cout << "O salario do vendedor sera: R$ " << salarioTotal << endl;
    return 0;
}

