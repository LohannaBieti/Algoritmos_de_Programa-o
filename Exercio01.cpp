#include <iostream>
using namespace std;

int main() {
    float base, altura, area;
    cout << "Digite a base do triangulo: ";
    cin >> base;
    cout << "Digite a altura do triangulo: ";
    cin >> altura;
    area = (base * altura) / 2;
    cout << "A area do triangulo eh: " << area << endl;
    return 0;
}

