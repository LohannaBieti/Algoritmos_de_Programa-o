#include <iostream>
using namespace std;

int main() {
    float distancia, consumo, litrosNecessarios;

    cout << "Digite a dist�ncia da viagem (km): ";
    cin >> distancia;
    cout << "Digite o consumo do ve�culo (km por litro): ";
    cin >> consumo;

    if (consumo != 0) {
        litrosNecessarios = distancia / consumo;
        cout << "Litros necess�rios para a viagem: " << litrosNecessarios << " L" << endl;
    } else {
        cout << "Erro: consumo n�o pode ser zero." << endl;
    }

    return 0;
}

