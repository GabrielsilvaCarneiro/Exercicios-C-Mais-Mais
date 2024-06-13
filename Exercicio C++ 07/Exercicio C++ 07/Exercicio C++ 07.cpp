#include <iostream> <locale>
using namespace std;


// ATIVIDADE 1

//	double salario(int b, int c );
//int main() {
//	locale::global(locale("pt_BR.UTF-8"));
//	
//	int number;
//	int Hrs;
//	int valorHrs;
//
//	cout << "Preencha as informação abaixo: " << std::endl;
//	cout << "Número do Funcionário: ";
//	cin >> number;
//	cout << "Horas trabalhadas: ";
//	cin >> Hrs;
//	cout << "Valor que recebe por hora: ";
//	cin >> valorHrs;
//
//	cout << "\n";
//
//	double resultado = salario(Hrs, valorHrs);
//
//	cout << "Número do Funcionário: " << number << std::endl;
//	cout << "Salário do Funcionário:R$ " << resultado << std::endl;
//
//}
//
//	double salario(int b, int c) {
//		return b * c;
//	};


// ATIVIDADE 2

//	double totalPagar(int a, int b);
//int main() {
//	locale::global(locale("pt_BR.UTF-8"));
//
//
//	int quantidade;
//	double valor;
//
//	cout << "Preencha as informações: " << std::endl;
//	cout << "Quantidade do produto: ";
//	cin >> quantidade;
//	cout << "Valor unitário do produtos: ";
//	cin >> valor;
//
//	double resultado = totalPagar(quantidade, valor);
//
//	cout << "Total a pagar: " << resultado;
//}
//	double totalPagar(int a, int b) {
//		return(a * b);
//	}



// ATIVIDADE 3

//	float triangulo(int a, int b, int c);
//	float circulo(int a,int b, int c);
//	float trapezio(int a, int b, int c);
//	float quadrado(int a, int b);
//	float retangulo(int a, int b);
//
//int main() {
//	locale::global(locale("pt_BR.UTF-8"));
//
//	float valorA;
//	float valorB;
//	float valorC;
//	double pi = 3.14;
//
//	cout << "Escreva três valores: " << std::endl;
//	cout << "Primeiro Valor: "; 
//	cin >> valorA;
//	cout << "Segundo Valor: ";
//	cin >> valorB;
//	cout << "Terceiro Valor: ";
//	cin >> valorC;
//
//	cout << "Resultado: " << std::endl;
//	cout << "\n";
//	cout << "Triangulo: " << triangulo(valorA, valorB, valorC) << std::endl;
//	cout << "Circulo: " << circulo(pi, valorC, valorC) << std::endl;
//	cout << "trapezio: " << trapezio(valorA, valorB, valorC) << std::endl;
//	cout << "quadrado: " << quadrado(valorB, valorB) << std::endl;
//	cout << "retangulo: " << retangulo(valorA, valorB) << std::endl;
//}
//
//	float triangulo(int a, int b, int c) {
//		return a * c / 2.0;
//	};
//
//	float circulo(int a, int b, int c) {
//		return a * c * c;
//	};
//
//	float trapezio(int a, int b, int c) {
//		return (a + b) / 2.0 * c;
//	};
//	float quadrado(int a, int b) {
//		return b * b;
//	};
//	float retangulo(int a, int b) {
//		return a * b;
//	};