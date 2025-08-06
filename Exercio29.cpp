#include <iostream>
using namespace std;

int main() {
    float distancia, velocidade, tempo;

    cout << "Digite a distância da viagem (km): ";
    cin >> distancia;
    cout << "Digite a velocidade média (km/h): ";
    cin >> velocidade;

    if (velocidade != 0) {
        tempo = distancia / velocidade;
        cout << "Tempo de viagem: " << tempo << " horas" << endl;
    } else {
        cout << "Erro: velocidade não pode ser zero." << endl;
    }

    return 0;
}

