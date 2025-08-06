#include <iostream>
using namespace std;

int main() {
    int idadeAnos, idadeDias;

    cout << "Digite a idade em anos: ";
    cin >> idadeAnos;

    idadeDias = idadeAnos * 365;

    cout << "Idade em dias (aproximadamente): " << idadeDias << endl;

    return 0;
}

