#include <iostream>
#include <vector>

using namespace std;

int main() {

    //1 – Peça para o usuário inserir dados em um vetor de 10 posições e depois, mostre os elementos(um em cada linha)
    vector<int> numeros(10); 

    cout << "Digite 10 números para o vetor:\n";

    for (int i = 0; i < 10; i++) {
        cout << " Numero " + i + 1;
        cin >> numeros[i]; 
    }

    cout << "\nOs números inseridos sao:\n";
    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << "\n"; 
    }

    return 0;
}
