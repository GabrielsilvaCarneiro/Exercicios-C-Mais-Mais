#include <iostream> <locale>

using namespace std;
int main() {
	locale::global(locale("pt_BR.UTF-8"));


	//ATIVIDADE 1
	/*int numero = 1;
	while (numero <= 10) {
		cout << numero << "\n";
		numero += 1;
	}*/

	
	//ATIVIDADE 2
	/*int tab1;
	cout << "Informe um número: ";
	cin >> tab1;
	for (int j = 1; j <= 10; j++) {
		int resultado = tab1 * j;
		cout << resultado << "\n";
		cout << tab1 << " x " << j << " = " << resultado << "\n";
	}*/


	//ATIVIDADE 3
	/*int numero = 0;
	while (numero <= 50) {
		cout << numero << "\n";
		numero += 5;
	}*/


	//ATIVIDADE 4
	/*int numero;
	
	for (int i = 1; i <= 5; i++) {
		cout << "Informe um número: ";
		cin >> numero;
		if (numero <= 100){
			cout << "Número comum" << "\n";
		}
		else if (numero > 100) {
			cout << "NÚMERO ESPECIAL" << "\n";
		}
	}*/


	//ATIVIDADE 5
	/*int numero = 1;
	while (numero <= 31) {
		cout << numero << "\n";
		numero += 2;
	}*/
	

	//ATIVIDADE 6
	/*int numero;

	for (int i = 1; i <= 5; i++) {
		cout << "Informe um número: ";
		cin >> numero;
		if (numero > 0) {
			cout << "Número Positivo" << "\n";
		}
		else if (numero < 0) {
			cout << "Número Negativo" << "\n";
		}
		else {
			cout << "O número é ZERO" << "\n";
		}
	}*/
}