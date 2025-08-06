#include <iostream>
using namespace std;

int main() {
<<<<<<< HEAD
    int a, b;
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    swap(a, b);
    cout << "Apos a troca, o valor de a eh " << a << " e o valor de b eh " << b << endl;
=======
    float deposito, rendimentoMensal, valorFinal;

    cout << "Digite o valor do deposito (em R$): ";
    cin >> deposito;

    cout << "Digite o rendimento mensal (%): ";
    cin >> rendimentoMensal;

    valorFinal = deposito * (1 + rendimentoMensal / 100);

    cout << "Valor total apos 1 mes: R$ " << valorFinal << endl;

>>>>>>> 4d74872 (adicionando atividade de amanha)
    return 0;
}

