#include <iostream>
using namespace std;

int main() {
    float distancia, consumo, litrosNecessarios;

    cout << "Digite a distância da viagem (km): ";
    cin >> distancia;
    cout << "Digite o consumo do veículo (km por litro): ";
    cin >> consumo;

    if (consumo != 0) {
        litrosNecessarios = distancia / consumo;
        cout << "Litros necessários para a viagem: " << litrosNecessarios << " L" << endl;
    } else {
        cout << "Erro: consumo não pode ser zero." << endl;
    }

    return 0;
}

