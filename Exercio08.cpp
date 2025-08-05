#include <iostream>
using namespace std;

int main() {
    float kmPercorridos, valorTotal;
    int diasAluguel;
    cout << "Digite a quantidade de km percorridos: ";
    cin >> kmPercorridos;
    cout << "Digite a quantidade de dias alugados: ";
    cin >> diasAluguel;
    valorTotal = diasAluguel * 70 + kmPercorridos * 0.15;
    cout << "O valor total a pagar eh: R$ " << valorTotal << endl;
    return 0;
}

