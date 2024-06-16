#include <iostream>

using namespace std;

int main() {
    // Declaração de variáveis
    float lado1, lado2, lado3;

    // Solicitar medidas ao usuário
    cout << "Digite o valor do primeiro lado: ";
    cin >> lado1;

    cout << "Digite o valor do segundo lado: ";
    cin >> lado2;

    cout << "Digite o valor do terceiro lado: ";
    cin >> lado3;

    // Verificar se os lados formam um triângulo
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        cout << "Os lados informados formam um triAngulo!" << endl;
    }
    else {
        cout << "Os lados informados nao formam um triangulo." << endl;
    }

    return 0;
}
