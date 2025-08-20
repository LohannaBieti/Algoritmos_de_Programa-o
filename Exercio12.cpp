#include <iostream>
using namespace std;

int main() {
    float deposito, rendimento, valorTotal;
    
    cout << "Digite o valor do depósito: ";
    cin >> deposito;
    cout << "Digite o rendimento mensal (%): ";
    cin >> rendimento;
    
    valorTotal = deposito + (deposito * rendimento / 100);
    cout << "Valor total após 1 mês: " << valorTotal << endl;
    
    return 0;
}
