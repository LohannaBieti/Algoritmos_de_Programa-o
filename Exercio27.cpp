#include <iostream>
using namespace std;

int main() {
    int idadeAnos, idadeMeses, idadeDias;

    cout << "Digite sua idade em anos: ";
    cin >> idadeAnos;

    idadeMeses = idadeAnos * 12;
    idadeDias = idadeAnos * 365; // Desconsiderando anos bissextos

    cout << "Idade em meses: " << idadeMeses << endl;
    cout << "Idade em dias: " << idadeDias << endl;

    return 0;
}

