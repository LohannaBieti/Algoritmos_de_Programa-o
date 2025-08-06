#include <iostream>
<<<<<<< HEAD
using namespace std;

int main() {
    float vendas, comissaoVendas, comissaoSapatos, salarioTotal;
    int sapatosVendidos;
    cout << "Digite o valor total das vendas do mes: ";
    cin >> vendas;
    cout << "Digite o numero de sapatos vendidos: ";
    cin >> sapatosVendidos;
    comissaoVendas = vendas * 0.20;
    comissaoSapatos = sapatosVendidos * 5;
    salarioTotal = comissaoVendas + comissaoSapatos;
    cout << "O salario do vendedor sera: R$ " << salarioTotal << endl;
=======
#include <cmath>  
using namespace std;

int main() {
    float peso, altura, imc;

    cout << "Digite o peso (em kg): ";
    cin >> peso;

    cout << "Digite a altura (em metros): ";
    cin >> altura;

    if (altura > 0) {
        imc = peso / pow(altura, 2);
        cout << "O IMC eh: " << imc << endl;
    } else {
        cout << "Erro: altura deve ser maior que zero." << endl;
    }

>>>>>>> 4d74872 (adicionando atividade de amanha)
    return 0;
}

