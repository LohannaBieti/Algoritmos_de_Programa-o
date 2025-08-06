#include <iostream>
using namespace std;

int main() {
    float precoOriginal, percentualImposto, precoFinal;

    cout << "Digite o preço original do produto (R$): ";
    cin >> precoOriginal;
    cout << "Digite o percentual de imposto (%): ";
    cin >> percentualImposto;

    precoFinal = precoOriginal + (precoOriginal * percentualImposto / 100);

    cout << "Preço final com imposto: R$ " << precoFinal << endl;

    return 0;
}

