#include <iostream>
using namespace std;

int main() {
<<<<<<< HEAD
    int votosBrancos, votosNulos, votosValidos, totalEleitores;
    float percentualBrancos, percentualNulos, percentualValidos;
    
    cout << "Digite o numero de votos brancos: ";
    cin >> votosBrancos;
    cout << "Digite o numero de votos nulos: ";
    cin >> votosNulos;
    cout << "Digite o numero de votos validos: ";
    cin >> votosValidos;
    
    totalEleitores = votosBrancos + votosNulos + votosValidos;
    percentualBrancos = (votosBrancos / float(totalEleitores)) * 100;
    percentualNulos = (votosNulos / float(totalEleitores)) * 100;
    percentualValidos = (votosValidos / float(totalEleitores)) * 100;
    
    cout << "Percentual de votos brancos: " << percentualBrancos << "%" << endl;
    cout << "Percentual de votos nulos: " << percentualNulos << "%" << endl;
    cout << "Percentual de votos válidos: " << percentualValidos << "%" << endl;
    
=======
    float precoOriginal, percentualDesconto, valorDesconto, precoFinal;

    cout << "Digite o preso original do produto: ";
    cin >> precoOriginal;

    cout << "Digite o percentual de desconto (%): ";
    cin >> percentualDesconto;

    valorDesconto = (precoOriginal * percentualDesconto) / 100;
    precoFinal = precoOriginal - valorDesconto;

    cout << "Valor do desconto: " << valorDesconto << endl;
    cout << "Preso com desconto: " << precoFinal << endl;

>>>>>>> 4d74872 (adicionando atividade de amanha)
    return 0;
}

