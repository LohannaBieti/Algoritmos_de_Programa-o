#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    float media;

    cout << "Digite o primeiro n�mero inteiro: ";
    cin >> num1;
    cout << "Digite o segundo n�mero inteiro: ";
    cin >> num2;

    media = (num1 + num2) / 2.0;

    cout << "M�dia aritm�tica: " << media << endl;

    return 0;
}

