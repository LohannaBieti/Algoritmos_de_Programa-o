#include <iostream>
using namespace std;

int main() {
<<<<<<< HEAD
    float alturaPessoa, sombraPessoa, sombraPredio, alturaPredio;
    cout << "Digite a altura da pessoa: ";
    cin >> alturaPessoa;
    cout << "Digite o comprimento da sombra da pessoa: ";
    cin >> sombraPessoa;
    cout << "Digite o comprimento da sombra do predio: ";
    cin >> sombraPredio;
    alturaPredio = (alturaPessoa * sombraPredio) / sombraPessoa;
    cout << "A altura do predio eh: " << alturaPredio << " metros." << endl;
=======
    float numero, tercaParte;

    cout << "Digite um numero real: ";
    cin >> numero;

    tercaParte = numero / 3;

    cout << "A tersa parte do numero eh: " << tercaParte << endl;

>>>>>>> 4d74872 (adicionando atividade de amanha)
    return 0;
}

