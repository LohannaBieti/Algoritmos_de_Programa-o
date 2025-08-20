#include <iostream>
using namespace std;

int main() {
    float peso, altura, imc;
    
    cout << "Digite o peso (em kg): ";
    cin >> peso;
    cout << "Digite a altura (em metros): ";
    cin >> altura;
    
    imc = peso / (altura * altura);
    cout << "IMC: " << imc << endl;
    
    return 0;
}
