#include <iostream>
using namespace std;

int main() {
    float num1, num2, media;
    
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    
    media = (num1 + num2) / 2;
    cout << "A média é: " << media << endl;
    
    return 0;
}
