#include <iostream>
<<<<<<< HEAD
#include <iomanip>
using namespace std;

int main() {
    double salarioMinimo, quantidadeKw;
    double valorPorKw, valorTotal;

    cout << "Informe o valor do salario minimo: R$ ";
    cin >> salarioMinimo;

    cout << "Informe a quantidade de quilowatts consumida: ";
    cin >> quantidadeKw;

    valorPorKw = (salarioMinimo / 7) / 100;
    valorTotal = valorPorKw * quantidadeKw;

    cout << fixed << setprecision(2); // Exibe com 2 casas decimais

    cout << "\nValor de cada quilowatt R$: " << valorPorKw << endl;
    cout << "Valor total a pagar R$: " << valorTotal << endl;
=======
using namespace std;

int main() {
    float nota1, nota2, nota3;
    float peso1, peso2, peso3;
    float mediaPonderada;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite o peso da primeira nota: ";
    cin >> peso1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;
    cout << "Digite o peso da segunda nota: ";
    cin >> peso2;

    cout << "Digite a terceira nota: ";
    cin >> nota3;
    cout << "Digite o peso da terceira nota: ";
    cin >> peso3;

    float somaPesos = peso1 + peso2 + peso3;

    if (somaPesos != 0) {
        mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / somaPesos;
        cout << "A media ponderada eh: " << mediaPonderada << endl;
    } else {
        cout << "Erro: a soma dos pesos não pode ser zero." << endl;
    }
>>>>>>> 4d74872 (adicionando atividade de amanha)

    return 0;
}

<<<<<<< HEAD

=======
>>>>>>> 4d74872 (adicionando atividade de amanha)
