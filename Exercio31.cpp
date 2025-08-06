#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    float media;

    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;
    cout << "Digite o segundo número inteiro: ";
    cin >> num2;

    media = (num1 + num2) / 2.0;

    cout << "Média aritmética: " << media << endl;

    return 0;
}

