#include <iostream>
using namespace std;

int main() {
    float precoUnitario, quantidade, valorTotal;
    
    cout << "Digite o preço unitário: ";
    cin >> precoUnitario;
    cout << "Digite a quantidade: ";
    cin >> quantidade;
    
    valorTotal = precoUnitario * quantidade;
    cout << "Valor total da compra: " << valorTotal << endl;
    
    return 0;
}
