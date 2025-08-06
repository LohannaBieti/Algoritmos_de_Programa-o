#include <iostream>
using namespace std;

int main() {
    float base, altura, area, perimetro;

    cout << "Digite a base do retângulo: ";
    cin >> base;
    cout << "Digite a altura do retângulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);

    cout << "Área: " << area << endl;
    cout << "Perímetro: " << perimetro << endl;

    return 0;
}

