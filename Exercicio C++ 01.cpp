#include <iostream>

		/*EXERCICIO 01*/

//using namespace std;
//int main() {
//	float instalacao = 300.00;
//	float limpeza = 150.00;
//	float manutencao = 499.99;
//	int soma = instalacao + limpeza + manutencao;
//
//	cout << soma;
//
//	return 0;
//}

	/*\\\\\\\\\\\\\\\\\\\\\*/
		/*EXERCICIO 02*/

//using namespace std;
//int main() {
//	float SalarioHora = 35.00;
//	int HorasTrabalhadas = 8;
//	int mult = SalarioHora * HorasTrabalhadas;
//
//	cout << mult;
//
//	return 0;
//}

	/*\\\\\\\\\\\\\\\\\\\\\*/
		/*EXERCICIO 03*/

//using namespace std;
//int main() {
//	int CaixaBomBom = 16;
//	int Unidades = 27;
//	int mult = CaixaBomBom * Unidades;
//
//	cout << mult;
//
//	return 0;
//}

	/*\\\\\\\\\\\\\\\\\\\\\*/
		/*EXERCICIO 04*/

//int CalculoCaixas(
//	int GarrafasVendidas, 
//	int GarrafasPorCaixa
//) {
//	return GarrafasVendidas / GarrafasPorCaixa;
//}
//using namespace std;
//int main()
//
//{
//	int GarrafasVendidas = 300;
//	int GarrafasPorCaixa = 20;
//	int CaixasUsadas = CalculoCaixas(GarrafasVendidas, GarrafasPorCaixa);
//
//	cout << "foram usadas " << CaixasUsadas << " caixas de agua" << std::endl;
//
//	return 0;
//}

	/*\\\\\\\\\\\\\\\\\\\\\*/
		/*EXERCICIO 05*/

using namespace std;
int main() {
	int CamisetasLoja = 120;
	int CamisetasCompradas = 50;
	int CamisetasVendidas = 80;
	float ValorCamiseta = 30.00;
	int mult = CamisetasVendidas * ValorCamiseta;
	int EstoqueFinal = CamisetasLoja - CamisetasVendidas + CamisetasCompradas;

	cout << "O faturamento foi de " << mult << " Reais"; 
	cout << " e a loja agora possui " << EstoqueFinal << " camisetas no estoque";
	return 0;
}


