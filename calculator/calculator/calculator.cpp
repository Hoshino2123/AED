#include <iostream>

using namespace std;

int main() {
    float num1, num2;
    char op;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o operador (+, -, *, /): ";
    cin >> op;

    cout << "Digite o segundo número: ";
    cin >> num2;

    float resultado;

    switch (op) {
    case '+':
        resultado = num1 + num2;
        break;
    case '-':
        resultado = num1 - num2;
        break;
    case '*':
        resultado = num1 * num2;
        break;
    case '/':
        if (num2 == 0) {
            cout << "Erro: Divisão por zero!" << endl;
            return 1;
        }
        resultado = num1 / num2;
        break;
    default:
        cout << "Operador inválido!" << endl;
        return 1;
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}