#include <iostream>
using namespace std;

int main() {
<<<<<<< HEAD
    int horas, minutos, segundos, totalSegundos;
    cout << "Digite as horas: ";
    cin >> horas;
    cout << "Digite os minutos: ";
    cin >> minutos;
    cout << "Digite os segundos: ";
    cin >> segundos;
    totalSegundos = horas * 3600 + minutos * 60 + segundos;
    cout << "O tempo total em segundos eh: " << totalSegundos << endl;
=======
    float base, altura, area;

    cout << "Digite a base: ";
    cin >> base;

    cout << "Digite a altura: ";
    cin >> altura;

    area = (base * altura) / 2;

    cout << "Área do triângulo: " << area << endl;

>>>>>>> 4d74872 (adicionando atividade de amanha)
    return 0;
}

