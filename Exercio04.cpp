#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3, media;
    cout << "Digite a nota da primeira prova: ";
    cin >> nota1;
    cout << "Digite a nota da segunda prova: ";
    cin >> nota2;
    cout << "Digite a nota da terceira prova: ";
    cin >> nota3;
    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;
    cout << "A media final do aluno eh: " << media << endl;
    return 0;
}

