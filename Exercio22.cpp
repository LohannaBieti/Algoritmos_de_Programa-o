#include <iostream>
using namespace std;

int main() {
    float num1, num2, mediaHarmonica;

    cout << "Digite o primeiro n�mero: ";
    cin >> num1;
    cout << "Digite o segundo n�mero: ";
    cin >> num2;

    if ((num1 + num2) != 0) {
        mediaHarmonica = (2 * num1 * num2) / (num1 + num2);
        cout << "M�dia harm�nica: " << mediaHarmonica << endl;
    } else {
        cout << "Erro: a soma dos n�meros n�o pode ser zero." << endl;
    }

    return 0;
}

