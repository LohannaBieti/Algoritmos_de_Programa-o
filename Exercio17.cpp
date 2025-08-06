#include <iostream>
using namespace std;

int main() {
    int anoAtual, mesAtual, diaAtual;
    int anoNasc, mesNasc, diaNasc;

    cout << "Digite o ano atual: ";
    cin >> anoAtual;
    cout << "Digite o mês atual: ";
    cin >> mesAtual;
    cout << "Digite o dia atual: ";
    cin >> diaAtual;

    cout << "Digite o ano de nascimento: ";
    cin >> anoNasc;
    cout << "Digite o mês de nascimento: ";
    cin >> mesNasc;
    cout << "Digite o dia de nascimento: ";
    cin >> diaNasc;

    int anos = anoAtual - anoNasc;
    int meses = mesAtual - mesNasc;
    int dias = diaAtual - diaNasc;

    // Ajustar meses e dias se negativo
    if (dias < 0) {
        dias += 30;
        meses -= 1;
    }
    if (meses < 0) {
        meses += 12;
        anos -= 1;
    }

    int idadeEmDias = anos * 365 + meses * 30 + dias;

    cout << "Idade aproximada em dias: " << idadeEmDias << " dias." << endl;

    return 0;
}

