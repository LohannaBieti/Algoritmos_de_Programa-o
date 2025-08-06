#include <iostream>
using namespace std;

int main() {
    float base, altura, area;

    cout << "Digite a base do retângulo: ";
    cin >> base;
    cout << "Digite a altura do retângulo: ";
    cin >> altura;

    area = base * altura;

    cout << "Área do retângulo: " << area << endl;

    return 0;
}

