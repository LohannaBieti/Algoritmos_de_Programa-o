#include <iostream>
using namespace std;

int main() {
    float salarioBase, percentual, salarioFinal;
    
    cout << "Digite o salário base: ";
    cin >> salarioBase;
    cout << "Digite o percentual de aumento (%): ";
    cin >> percentual;
    
    salarioFinal = salarioBase + (salarioBase * percentual / 100);
    cout << "Salário com aumento: " << salarioFinal << endl;
    
    return 0;
}

