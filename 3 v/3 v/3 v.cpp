#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    // Solicitar três números inteiros ao usuário
    cout << "Digite o primeiro numero inteiro: ";
    cin >> num1;

    cout << "Digite o segundo numero inteiro: ";
    cin >> num2;

    cout << "Digite o terceiro numero inteiro: ";
    cin >> num3;

    // Encontrar o maior número entre os três
    int maior = num1;
    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }

    // Escrever o maior número na tela
    cout << "O maior numero entre os tres e: " << maior << endl;

    return 0;
}
