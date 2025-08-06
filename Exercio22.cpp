#include <iostream>
using namespace std;

int main() {
    float num1, num2, mediaHarmonica;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    if ((num1 + num2) != 0) {
        mediaHarmonica = (2 * num1 * num2) / (num1 + num2);
        cout << "Média harmônica: " << mediaHarmonica << endl;
    } else {
        cout << "Erro: a soma dos números não pode ser zero." << endl;
    }

    return 0;
}

