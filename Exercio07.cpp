#include <iostream>
using namespace std;

int main() {
    float capacidadeTanque, litrosAbastecidos, kmPercorridos, consumoMedio, autonomia;
    cout << "Digite a capacidade do tanque em litros: ";
    cin >> capacidadeTanque;
    cout << "Digite a quantidade de litros abastecidos: ";
    cin >> litrosAbastecidos;
    cout << "Digite a quilometragem percorrida: ";
    cin >> kmPercorridos;
    
    consumoMedio = kmPercorridos / litrosAbastecidos;
    autonomia = (capacidadeTanque - litrosAbastecidos) * consumoMedio;
    
    cout << "Consumo medio: " << consumoMedio << " km/l" << endl;
    cout << "Autonomia restante: " << autonomia << " km" << endl;
    
    return 0;
}

