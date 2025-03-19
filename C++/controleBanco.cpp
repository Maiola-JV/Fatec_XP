#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

void cabecalho(){
	SetConsoleOutputCP(CP_UTF8);
	
	cout << "===== Banco da Fatec =====\n";
	cout << "1. Cadastrar conta\n 2. Depósito\n 3. Saque\n 4. Consultar Saldo\n 5. Sair";
	cout << "===========================\n";
}

int main(){
	int operacao = 0;
	int contas[9];
	
	SetConsoleOutputCP(CP_UTF8);
	
	while (operacao != 5){
		int conta = 0
		
		cabecalho()
		cin >> operacao
		
		if isnumber(operacao){
			switch (operacao){
				case 1:
					system("cls");
					
					if (sizeof(contas) < 9){
						contas.pushback(0.0);
						cout << "Conta adicionada com sucesso!";
					}
					else{
						cout << "Número limite de contas atingido!\n Operação cancelada..."
					}
					
					break;
				case 2:
					float deposito = 0;
					
					system("cls");
					
					cout << "===== Realizar Depósito =====\n";
					cout << "Digite o número da conta: ";
					
					cin >> conta;
					
					if(isnumber(conta)){
						if(conta <= sizeof(contas)){
							cout << "\n Valor a depositar: ";
							
							cin >> deposito;
							
							if(isnumber(deposito)){
								contas[conta-1] = deposito;
								
								cout << "Depósito de R$ " << deposito << " na conta " << conta << " realizado com sucesso!";
							}
							else{
								cout << "Erro! Valor inválido... \n Depósito cancelado...";
							}
						}
						else{
							cout << "Erro! Conta inválida... \n Operação cancelada...";
						}
					}
					else{
						cout << "Erro! Número inválido...\n Operação cancelada..."
					}
					break;
				case 3:
					float saque = 0;
					system("cls");
					
					cout << "===== Realizar Saque =====";
					cout << "Digite o número da conta: ";
					
					cin >> conta;
					
					if(isnumber(conta)){
						if(conta <= sizeof(contas)){
							cout << "Saldo disponível: R$ " << contas[conta-1]
							cout << "\n Valor a ser sacado: "
							
							cin >> saque
							
							if(isnumber(saque)){
								if(saque <= contas[conta-1]){
									contas[conta-1] = contas[conta-1] - saque
								}
								else{
									cout << "Saldo insuficiente! Operação de saque cancelada..."
								}
							}
							
						}
					}
					break;
				case 4:
					system("cls");
					
					cout << "===== Consultar Saldo =====";
					break;
				case 5:
					system("cls");
					cout << "Volte sempre!";
					break;
				default:
					cout << "Erro! Operação inválida..."
			}
		}
	}
}