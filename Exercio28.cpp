#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float raio, perimetro;

    cout << "Digite o raio do c�rculo: ";
    cin >> raio;

    perimetro = 2 * M_PI * raio;

    cout << "Per�metro do c�rculo: " << perimetro << endl;

    return 0;
}

