#include <iostream>
using namespace std;

int main() {
<<<<<<< HEAD
    int qtdLata350, qtdGarrafa600, qtdGarrafa2L;
    float totalLitros;

    cout << "Informe a quantidade de latas de 350 ml: ";
    cin >> qtdLata350;

    cout << "Informe a quantidade de garrafas de 600 ml: ";
    cin >> qtdGarrafa600;

    cout << "Informe a quantidade de garrafas de 2 litros: ";
    cin >> qtdGarrafa2L;

    // Convertendo tudo para litros
    totalLitros = (qtdLata350 * 0.350) + (qtdGarrafa600 * 0.600) + (qtdGarrafa2L * 2.0);

    cout << "\nTotal de litros comprados: " << totalLitros << " L" << endl;
=======
    float tempo, velocidadeMedia, distancia;

    cout << "Digite o tempo da viagem (em horas): ";
    cin >> tempo;

    cout << "Digite a velocidade media (em km/h): ";
    cin >> velocidadeMedia;

    distancia = velocidadeMedia * tempo;

    cout << "A distância percorrida foi: " << distancia << " km" << endl;
>>>>>>> 4d74872 (adicionando atividade de amanha)

    return 0;
}

