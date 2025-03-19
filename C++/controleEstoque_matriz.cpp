#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	
	int lojas[3][4];
	int totalItens;
	int produto;
	
	cout << "Registro de Estoque\n\n";
	
	for(int i=0; i < 3; i++){
		cout << "Loja " << i+1 << ":\n";
		for(int j=0; j<4; j++){
			cout << "Produto " << (char) ('A'+j) << ":";
		
			if(cin >> produto) {
				lojas[i][j] = produto;
				
			}
			else {
				cin.clear();
				cin.get();
				lojas[i][j] = 0;
			}
		}
		cout << endl << endl;
	}
	
	cout << "Estoque Filiais\n\n";
	for (int i=0; i<3; i++) {
		for (int j=0; j<4; j++) {
			cout << lojas[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
	
	
	cout << "Total de cada produtos entre filiais\n";
	for (int j=0; j<4; j++) {
		totalItens = 0;
		for (int i=0; i<3; i++) {
			totalItens += lojas[i][j];
		}
		cout << "Quantia total do produto " << (char)('A'+j) << ": " << totalItens;
		cout << endl;
	}
	cout << endl << endl;
	
	cout << "Total de produtos por filial\n";
	
	for (int i=0; i<3; i++) {
		totalItens = 0;
		for (int j=0; j<4; j++) {
			totalItens += lojas[i][j];
		}
		
		cout << "Total de produtos na Loja " << i+1 << ": " << totalItens << endl;
	}

	
	
}