#include <iostream>
using namespace std;

int main() {
    float baseMaior, baseMenor, altura, area;

    cout << "Digite a base maior: ";
    cin >> baseMaior;
    cout << "Digite a base menor: ";
    cin >> baseMenor;
    cout << "Digite a altura: ";
    cin >> altura;

    area = (baseMaior + baseMenor) * altura / 2;

    cout << "�rea do trap�zio: " << area << endl;

    return 0;
}

