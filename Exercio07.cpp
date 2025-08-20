#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;
    cout << "Digite o segundo número inteiro: ";
    cin >> num2;
    
    cout << "Soma: " << (num1 + num2) << endl;
    cout << "Subtração: " << (num1 - num2) << endl;
    cout << "Multiplicação: " << (num1 * num2) << endl;
    cout << "Divisão: " << (num1 / num2) << endl;
    
    return 0;
}
