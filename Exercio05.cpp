#include <iostream>
using namespace std;

int main() {
<<<<<<< HEAD
    float celsius, fahrenheit;
    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9/5) + 32;
    cout << "A temperatura em Fahrenheit eh: " << fahrenheit << endl;
=======
    float precoUnitario, quantidade, valorTotal;

    cout << "Digite o preço unitario: ";
    cin >> precoUnitario;

    cout << "Digite a quantidade: ";
    cin >> quantidade;

    valorTotal = precoUnitario * quantidade;

    cout << "Valor total da compra: " << valorTotal << endl;

>>>>>>> 4d74872 (adicionando atividade de amanha)
    return 0;
}

