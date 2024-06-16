#include <iostream>

using namespace std;

int main() {
	int valor1, valor2, valor3, somaTotal = 0; // Inicializar a variável 'somaTotal' com 0

	// Solicitar os valores ao usuário
	cout << "Digite o primeiro valor: ";
	cin >> valor1;

	cout << "Digite o segundo valor: ";
	cin >> valor2;

	cout << "Digite o terceiro valor: ";
	cin >> valor3;

	// Somar os 3 primeiros valores e armazenar em 'somaTotal'
	somaTotal = valor1 + valor2 + valor3;

	// Pedir os 2 últimos valores
	cout << "Digite o quarto valor: ";
	cin >> valor1; // Reutilizar 'valor1' para o quarto valor

	cout << "Digite o quinto valor: ";
	cin >> valor2; // Reutilizar 'valor2' para o quinto valor

	// Somar os 2 últimos valores e adicionar à 'somaTotal'
	somaTotal += valor1 + valor2; // Utilizar o operador '+=' para somar e armazenar

	// Apresentar o resultado da soma
	cout << "A soma dos 5 valores e: " << somaTotal << endl;

	return 0;
}
