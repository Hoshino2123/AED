#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    // Solicitar dois números inteiros ao usuário
    cout << "Digite o primeiro nnmero inteiro: ";
    cin >> num1;

    cout << "Digite o segundo nnmero inteiro: ";
    cin >> num2;

    // Verificar qual número é maior e armazenar em variavel 'maior'
    int maior;
    if (num1 > num2) {
        maior = num1;
    }
    else {
        maior = num2;
    }

    // Escrever o maior número na tela
    cout << "O maior numero e: " << maior << endl;

    return 0;
}
