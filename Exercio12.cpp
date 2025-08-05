#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    swap(a, b);
    cout << "Apos a troca, o valor de a eh " << a << " e o valor de b eh " << b << endl;
    return 0;
}

