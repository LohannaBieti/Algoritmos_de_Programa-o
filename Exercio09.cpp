#include <iostream>
using namespace std;

int main() {
    float distancia, tempo, velocidadeMedia;
    
    cout << "Digite a distância percorrida (em km): ";
    cin >> distancia;
    cout << "Digite o tempo gasto (em horas): ";
    cin >> tempo;
    
    velocidadeMedia = distancia / tempo;
    cout << "Velocidade média: " << velocidadeMedia << " km/h" << endl;
    
    return 0;
}
