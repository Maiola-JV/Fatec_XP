#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	string opcao;
	float num1;
	float num2;
	
	while (opcao != "5"){
		cout << "Calculadora simples" << endl;
		cout << "---------------------------" << endl;
		cout << "1. Soma" << endl << "2. Subtração" << endl << "3. Multiplicação" << endl << "4. Divisão" << endl << "5. Encerrar Programa" << endl;
		cout << "---------------------------" << endl << endl;
		
		cout << "Operação desejada: ";
		cin >> opcao;
		
		if (opcao == "1"){
			cout << "Digite o número 1: ";
			if(cin >> num1) {
				cout << "Digite o número 2: ";
				
				if (cin >> num2) {
					cout << "Resultado: " << num1 << " + " << num2 << " = " << num1 + num2 << endl << endl;
				}
				else {
					cin.clear();
					cin.get();
					cout << "Número desconhecido..." << endl;
					cout << "Operação cancelada!" << endl << endl;
				}
			}
			else{
				cin.clear();
				cin.get();
				cout << "Número desconhecido..." << endl;
				cout << "Operação cancelada!" << endl << endl;
			}
		}
		else if (opcao == "2") {
			cout << "Digite o número 1: ";
			if(cin >> num1) {
				cout << "Digite o número 2: ";
				
				if (cin >> num2) {
					cout << "Resultado: " << num1 << " - " << num2 << " = " << num1 - num2;
				}
				else {
					cin.clear();
					cin.get();
					cout << "Número desconhecido..." << endl;
					cout << "Operação cancelada!" << endl << endl;
				}
			}
			else {
				cin.clear();
				cin.get();
				cout << "Número desconhecido..." << endl;
				cout << "Operação cancelada!" << endl << endl;
			}
		}
		else if (opcao == "3"){
			cout << "Digite o número 1: ";
			if(cin >> num1) {
				cout << "Digite o número 2: ";
				
				if (cin >> num2) {
					cout << "Resultado: " << num1 << " x " << num2 << " = " << num1 * num2;
				}
				else {
					cin.clear();
					cin.get();
					cout << "Número desconhecido..." << endl;
					cout << "Operação cancelada!" << endl << endl;
				}
			}
			else {
				cin.clear();
				cin.get();
				cout << "Número desconhecido..." << endl;
				cout << "Operação cancelada!" << endl << endl;
			}
		}
		else if (opcao == "4"){
			cout << "Digite o número 1: ";
			if(cin >> num1) {
				cout << "Digite o número 2: ";
				
				if (cin >> num2) {
					if (num2 != 0){
						cout << "Resultado: " << num1 << " / " << num2 << " = " << num1 / num2;
					}
					else{
						cout << "Erro: divisão por 0" << endl << "Operação cancelada!" << endl << endl;
					}
				}
				else {
					cin.clear();
					cin.get();
					cout << "Número desconhecido..." << endl;
					cout << "Operação cancelada!" << endl << endl;
				}
			}
			else {
				cin.clear();
				cin.get();
				cout << "Número desconhecido..." << endl;
				cout << "Operação cancelada!" << endl << endl;
			}
		}
		else if (opcao == "5"){
			cout << "Você escolheu sair";
		}
		else{
			cout << "Escolha uma operação válida!" << endl << endl;
		}
		cin.clear();
		cin.get();
	}
	
}