#include <iostream>
using namespace std;

int main() {
    float base, altura, area, perimetro;

    cout << "Digite a base do ret�ngulo: ";
    cin >> base;
    cout << "Digite a altura do ret�ngulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);

    cout << "�rea: " << area << endl;
    cout << "Per�metro: " << perimetro << endl;

    return 0;
}

