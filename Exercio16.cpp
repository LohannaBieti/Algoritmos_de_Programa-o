#include <iostream>
using namespace std;

int main() {
    float reais, cotacaoDolar, dolares;

    cout << "Digite o valor em reais: R$ ";
    cin >> reais;

    cout << "Digite a cota��o atual do dolar (R$): ";
    cin >> cotacaoDolar;

    if (cotacaoDolar != 0) {
        dolares = reais / cotacaoDolar;
        cout << "O valor em dolares �: US$ " << dolares << endl;
    } else {
        cout << "Erro: a cota��o do dolar nao pode ser zero." << endl;
    }

    return 0;
}

