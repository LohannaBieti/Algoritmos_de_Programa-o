#include <iostream>
using namespace std;

int main() {
    float alturaPessoa, sombraPessoa, sombraPredio, alturaPredio;
    cout << "Digite a altura da pessoa: ";
    cin >> alturaPessoa;
    cout << "Digite o comprimento da sombra da pessoa: ";
    cin >> sombraPessoa;
    cout << "Digite o comprimento da sombra do predio: ";
    cin >> sombraPredio;
    alturaPredio = (alturaPessoa * sombraPredio) / sombraPessoa;
    cout << "A altura do predio eh: " << alturaPredio << " metros." << endl;
    return 0;
}

