#include <iostream>
using namespace std;

int main() {
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
    
    return 0;
}

