#include <iostream>
using namespace std;

int main() {
<<<<<<< HEAD
    float valorGasto, gorjeta, totalPagar;
    cout << "Digite o valor gasto no restaurante: ";
    cin >> valorGasto;
    gorjeta = valorGasto * 0.10;
    totalPagar = valorGasto + gorjeta;
    cout << "O valor da gorjeta eh: R$ " << gorjeta << endl;
    cout << "O valor total a ser pago eh: R$ " << totalPagar << endl;
=======
    float espaco, tempo, velocidadeMedia;

    cout << "Digite o espaso percorrido (em km): ";
    cin >> espaco;

    cout << "Digite o tempo gasto (em horas): ";
    cin >> tempo;

    if (tempo != 0) {
	velocidadeMedia = espaco / tempo;
    cout << "A velocidade media eh: " << velocidadeMedia << " km/h" << endl;
    } else {
    cout << "Erro: o tempo nao pode ser zero." << endl;
    }

>>>>>>> 4d74872 (adicionando atividade de amanha)
    return 0;
}

