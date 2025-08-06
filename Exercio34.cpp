#include <iostream>
using namespace std;

int main() {
    float salarioAtual, aumento, novoSalario;

    cout << "Digite o salário atual: R$ ";
    cin >> salarioAtual;
    cout << "Digite o valor do aumento: R$ ";
    cin >> aumento;

    novoSalario = salarioAtual + aumento;

    cout << "Novo salário: R$ " << novoSalario << endl;

    return 0;
}

