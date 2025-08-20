#include <iostream>
using namespace std;

int main() {
    float precoOriginal, percentualDesconto, precoComDesconto;
    
    cout << "Digite o preço original do produto: ";
    cin >> precoOriginal;
    cout << "Digite o percentual de desconto (%): ";
    cin >> percentualDesconto;
    
    precoComDesconto = precoOriginal - (precoOriginal * percentualDesconto / 100);
    cout << "Preço com desconto: " << precoComDesconto << endl;
    
    return 0;
}
