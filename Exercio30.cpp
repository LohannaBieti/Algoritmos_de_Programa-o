#include <iostream>
using namespace std;

int main() {
    float preco, desconto1, desconto2, precoFinal;

    cout << "Digite o pre�o do produto: ";
    cin >> preco;
    cout << "Digite o primeiro desconto (%): ";
    cin >> desconto1;
    cout << "Digite o segundo desconto (%): ";
    cin >> desconto2;

    preco = preco - (preco * desconto1 / 100);
    precoFinal = preco - (preco * desconto2 / 100);

    cout << "Pre�o final ap�s os dois descontos: R$ " << precoFinal << endl;

    return 0;
}

