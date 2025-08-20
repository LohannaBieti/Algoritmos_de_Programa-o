#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3, peso1, peso2, peso3, mediaPonderada;
    
    cout << "Digite a nota 1: ";
    cin >> nota1;
    cout << "Digite o peso 1: ";
    cin >> peso1;
    cout << "Digite a nota 2: ";
    cin >> nota2;
    cout << "Digite o peso 2: ";
    cin >> peso2;
    cout << "Digite a nota 3: ";
    cin >> nota3;
    cout << "Digite o peso 3: ";
    cin >> peso3;
    
    mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
    cout << "Média ponderada: " << mediaPonderada << endl;
    
    return 0;
}
