#include <iostream>

using namespace std;

int main() {
	// Declaração de variáveis
	float base, altura, area, perimetro;

	// Solicitar medidas ao utilizador
	cout << "Digite a medida da base do retangulo: ";
	cin >> base;

	cout << "Digite a medida da altura do retangulo: ";
	cin >> altura;

	// Calcular área e perímetro
	area = base * altura;
	perimetro = 2 * (base + altura);

	// Apresentar resultados
	cout << "A area do retângulo e: " << area << endl;
	cout << "O perimetro do retângulo e: " << perimetro << endl;

	return 0;
}
