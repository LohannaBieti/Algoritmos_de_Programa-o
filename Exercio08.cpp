#include <iostream>
#include <cmath> // Para a constante M_PI
using namespace std;

int main() {
    float raio, area;
    
    cout << "Digite o raio do círculo: ";
    cin >> raio;
    
    area = M_PI * pow(raio, 2);
    cout << "Área do círculo: " << area << endl;
    
    return 0;
}
