#include <iostream>
using namespace std;

int main() {
<<<<<<< HEAD
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
    
=======
    int num1, num2;
    int soma, subtracao, multiplicacao;
    float divisao;

    cout << "Digite o primeiro numero inteiro: ";
    cin >> num1;

    cout << "Digite o segundo numero inteiro: ";
    cin >> num2;

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    if (num2 != 0) {
        divisao = static_cast<float>(num1) / num2;
        cout << "Divisao: " << divisao << endl;
    } else {
        cout << "Divisao: Erro! Divisao por zero." << endl;
    }

    cout << "Soma: " << soma << endl;
    cout << "Subtração: " << subtracao << endl;
    cout << "Multiplicaçao: " << multiplicacao << endl;

>>>>>>> 4d74872 (adicionando atividade de amanha)
    return 0;
}

