/* #include <iostream>

/* run this program using the
 console pauser or
 add your own getch,
 system("pause") or input loop */

/* /int main(int argc, char** argv) {
	std::cout << "Bom dia a todos";
	return 0; */
	// declaração dos includes
#include <iostream>
using namespace std;

// declaração das variáveis globais


// função main
/* int main(int argc, char** argv) {
	// declaração das variáveis locais da função
	int idade; // criar a variável idade para guardar valores inteiros
	char letra = 'a';
	float altura = 1.82;
	// 1.083,14 -> forma incorreta
	// 1083.14  -> forma correta
	bool achei = false;
	// o C distingue maiúsculas de minúsculas (case sensitive)
	// "false" é diferente de "False"

	// escrever no ecrã
	cout << "Isto e' uma frase\n";
	cout << "Isto e' outra frase" << endl;
	cout << "A altura foi " << altura << endl;
	cout << "Escreva a idade = ";

	// ler do teclado
	cin >> idade;

	cout << "A idade escrita foi = " << idade;

	return 0;
} */
#include <iostream>
using namespace std;

/**************************************************
Programa para testar as operações aritméticas
**************************************************/

/* int main(int argc, char** argv) {
	int n1 = 7;
	int n2 = 2;
	int quociente, quocienteInteiro, resto;
	float quocienteDecimal;

	cout << "Divisoes\n"
		<< "--------\n";
	// Ao dividir 2 valores inteiros, é feita uma divisão inteira
	quociente = n1 / n2;
	cout << "Divisao de inteiros (7/2) = " << quociente << endl;

	// Se um dos valores for decimal, é feita uma divisão "normal",
	// ou seja, o quociente (resultado) pode ter vírgulas
	// Pode-se forçar um dos valores a ser decimal usando uma
	// "coerção" -> converter (forçar) o n1 para um valor fracionário
	quocienteDecimal = (float)n1 / n2;
	cout << "Divisao usando virgulas (7/2) = " << quocienteDecimal << endl;

	// obter o resto da divisão inteira
	resto = n1 % n2; // lê-se "n1 mod n2" 
	cout << "Resto da divisao inteira (7%2) = " << resto << endl;

	cout << "------------------------------------------\n";
	cout << "Quociente " << 7 / 2 << " Resto " << 7 % 2 << endl;
	cout << "Quociente " << 7 / 2.0;

	return 0;
} */

/**************************************************
Programa para ver as diferenças de prefixo e sufixo
nos operadores para incremento (++).
As regras são iguais para o decremento (--)
**************************************************
Cuidado com as implementações dos compiladores.
Executado no Visual Studio, os resultados são iguais.
Executado no site do w3Schools, os resultados serão
diferentes (este site usa um interpretador)
**************************************************/

/* int main(int argc, char** argv) {
	int x = 2;
	int y = 2;

	setlocale(LC_ALL, "");
	cout << "SUFIXO: primeiro usa a variável e só depois a incrementa\n";
	cout << "Valor inicial de x = " << x << endl;// 2
	cout << "Valor (usando x++) x = " << x++ << endl; // 2
	cout << "Valor (depois da instrução anterior) x = " << x << endl;   // 3

	cout << "\nPREFIXO: primeiro incrementa a variável e só depois a utiliza\n";
	cout << "Valor inicial de y = " << y << endl;// 2
	cout << "Valor (usando ++y) = " << ++y << endl; // 3
	cout << "Valor (depois da instrução anterior) y = " << y << "\n\n";   // 3

	/************************************************************************
	/* CUIDADO: não usar incrementos à mesma variável numa mesma instrução	*
	/*			porque o resultado depende do compilador.					*
	/*			Se usarem o DevC++, os resultados ficam "mal".				*
	/************************************************************************/

/*	cout << "Testes com incrementos\n"
		<< "----------------------\n";
	x = 4;
	cout << x++ << " " << ++x << " " << x << endl;   // 466 (DevC++ = 566)

	x = 4;
	cout << x++ << " " << x << " " << ++x << endl;   // 456 (DevC++ = 566)

	x = 4;
	cout << x++ << " " << x << " " << x++ << endl;   // 455 (DevC++ = 564)

	x = 4;
	cout << x++ << " " << x++ << " " << x++ << endl; // 456 (DevC++ = 654)

	x = 4;
	cout << ++x << " " << ++x << " " << ++x << endl; // 567 (DevC++ = 777)

	// Se os incrementos forem em linhas diferentes, nunca há problema!!!
	x = 4;
	cout << x++;		// 4
	cout << " " << ++x;	// 6
	cout << " " << x;	// 6

	return 0; */
} 

1.1.Maior de 2 valores
Editado às 19 / 04
Material
0.10.Instrução switch ()...case
Publicado em 8 / 04
Material
0.9.Operador ternário
Publicado em 8 / 04
Material
0.8.Soluções dos exercícios(rectângulo, círculo e triângulo)
Publicado em 8 / 04
Material
0.7.Decisão dentro de outra decisão
Publicado em 5 / 04
Material
0.6.Instruções de decisão
Publicado em 5 / 04
Material
0.5.Atribuições
Publicado em 22 / 03
Utilização de uma atribuição em conjunto com um operador

5.Operacoes(atribuicoes).cpp
Texto
Material
0.4.Incrementos e decrementos
Publicado em 22 / 03
Material
0.3.Operações aritméticas(divisões)
Publicado em 22 / 03
Material
0.2.Input e Output
Publicado em 22 / 03
Material
0.1.Início
Publicado em 22 / 03
Apresentações
Apresentações
Material
Apresentação 2
Publicado em 15 / 03
Material
Apresentação 1
Publicado em 11 / 03
Exercícios
Exercícios
Material
Inserir elemento num array ordenado
Publicado em 3 / 06
Material
Apagar um elemento num array
Publicado em 3 / 06
Material
Pesquisar num array
Publicado em 3 / 06
Material
14.4.Converter exercício 14.3 para usar funções
Editado às 24 / 05
Material
14.3.Ordenar turma pelo nome dos alunos
Publicado em 24 / 05
Material
13.2.Listar as pessoas de uma dada idade
Editado às 20 / 05
Material
13.1 Ler e escrever um array de estruturas(alunos)
Publicado em 20 / 05
Material
12.5.Exercícios com strings - contar palavras
Publicado em 17 / 05
Material
12.4.Exercícios com strings - vogais em maiúscula
Publicado em 17 / 05
Material
12.3.Exercícios com strings - conversões
Editado às 17 / 05
Software
Software
Material
VSCode no menu de contexto
Publicado em 20 / 03
Material
Pasta de configuração do VSCode
Publicado em 18 / 03
Material
Instalação do VSCode
Editado às 20 / 03
Material
Raptor
Publicado em 11 / 03
Material
DevC++
Publicado em 11 / 03
#include <iostream>
using namespace std;

/********************************************************
Utilização de uma atribuição em conjunto com um operador
	+=
	-=
	*=
	/=
	%=
*********************************************************/

 /*/int main(int argc, char** argv) {
	int x;

	x = 3;
	cout << "\nValor de (x = 3) = " << x << endl; // 5
	x = x + 2;
	cout << "Valor de (x = x+2) = " << x << endl; // 5

	// Este troço de código faz o mesmo que o anterior
	// Pode-se usar += sempre que o 1º operando é
	// a mesma variável onde fica o resultado
	x = 3;
	cout << "\nValor de (x = 3) = " << x << endl; // 5
	x += 2;
	cout << "Valor de (x += 2) = " << x << endl; // 5

	return 0; */
}

#include <iostream>
using namespace std;

/**************************************************************
	Condição: instrução if()
	Pode ter algumas variantes
		if()
		if() else
		if() else if()
		if() else if() else
***************************************************************/
int main() {
	int x;

	cout << "Valor para o x = ";
	cin >> x;

	if (x == 5) { // x é igual a 5?
		cout << "x e' 5" << endl; // vem por aqui se a resposta for "sim"
	}
	else {
		cout << "x nao e' 5" << endl; // aqui é quando a resposta é "não"
	}

	return 0;
}
