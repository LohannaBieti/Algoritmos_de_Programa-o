#include <iostream>
using namespace std;

int main() {
    float tempo, velocidadeMedia, distancia;
    
    cout << "Digite o tempo de viagem (em horas): ";
    cin >> tempo;
    cout << "Digite a velocidade média (em km/h): ";
    cin >> velocidadeMedia;
    
    distancia = tempo * velocidadeMedia;
    cout << "Distância percorrida: " << distancia << " km" << endl;
    
    return 0;
}
