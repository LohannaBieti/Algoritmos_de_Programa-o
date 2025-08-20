#include <iostream>
using namespace std;

int main() {
    float base, altura, area;
    
    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite a altura: ";
    cin >> altura;
    
    area = (base * altura) / 2;
    cout << "Área do triângulo: " << area << endl;
    
    return 0;
}

