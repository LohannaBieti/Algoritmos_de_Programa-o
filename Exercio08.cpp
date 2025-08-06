#include <iostream>
<<<<<<< HEAD
using namespace std;

int main() {
    float kmPercorridos, valorTotal;
    int diasAluguel;
    cout << "Digite a quantidade de km percorridos: ";
    cin >> kmPercorridos;
    cout << "Digite a quantidade de dias alugados: ";
    cin >> diasAluguel;
    valorTotal = diasAluguel * 70 + kmPercorridos * 0.15;
    cout << "O valor total a pagar eh: R$ " << valorTotal << endl;
=======
#include <cmath>    
using namespace std;

int main() {
    float raio, area;

    cout << "Digite o raio do circulo: ";
    cin >> raio;

    area = M_PI * pow(raio, 2); 

    cout << "A area do circulo eh: " << area << endl;

>>>>>>> 4d74872 (adicionando atividade de amanha)
    return 0;
}

