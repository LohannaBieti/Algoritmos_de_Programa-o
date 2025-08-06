#include <iostream>
using namespace std;

int main() {
    float altura, largura, comprimento, volume;

    cout << "Digite a altura da caixa: ";
    cin >> altura;
    cout << "Digite a largura da caixa: ";
    cin >> largura;
    cout << "Digite o comprimento da caixa: ";
    cin >> comprimento;

    volume = altura * largura * comprimento;

    cout << "Volume da caixa: " << volume << endl;

    return 0;
}

