#include <iostream>
using namespace std;

int main() {
    float precoOriginal, percentualImposto, precoFinal;

    cout << "Digite o pre�o original do produto (R$): ";
    cin >> precoOriginal;
    cout << "Digite o percentual de imposto (%): ";
    cin >> percentualImposto;

    precoFinal = precoOriginal + (precoOriginal * percentualImposto / 100);

    cout << "Pre�o final com imposto: R$ " << precoFinal << endl;

    return 0;
}

