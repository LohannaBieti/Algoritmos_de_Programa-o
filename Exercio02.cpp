#include <iostream>
using namespace std;

int main() {
    int horas, minutos, segundos, totalSegundos;
    cout << "Digite as horas: ";
    cin >> horas;
    cout << "Digite os minutos: ";
    cin >> minutos;
    cout << "Digite os segundos: ";
    cin >> segundos;
    totalSegundos = horas * 3600 + minutos * 60 + segundos;
    cout << "O tempo total em segundos eh: " << totalSegundos << endl;
    return 0;
}

