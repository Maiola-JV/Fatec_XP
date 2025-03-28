#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <Windows.h>

using namespace std;

struct registroFuncionario {
	int codigo;
	string nome;
	int idade;
	double salario;
};

void menu() {
	cout << "-------------------------------------------\n";
	cout << "1. Cadastrar Funcionário\n";
	cout << "2. Consultar Funcionário\n";
	cout << "3. Remover Funcionário\n";
	cout << "4. Listar Funcionários\n";
	cout << "5. Sair\n\n";
}

int validaInput_int(string mensagem) {
	int valor = 0;
	while(true) {
		cout << mensagem;
		cin >> valor;
		
		if(cin.fail()) {
			cin.clear();
			cin.ignore(100, '\n');
			
			cout << "Entrada inválida! \n\n";
			continue;
		}
		if(valor <= 0) {
			cout << "Entrada inválida! \n\n";
			continue;
		}
		return valor;
	}
	
}

double validaInput_double(string mensagem) {
	double valor = 0.0;
	while(true) {
		cout << mensagem;
		cin >> valor;
		
		if(cin.fail()) {
			cin.clear();
			cin.ignore(100, '\n');
			
			cout << "Entrada inválida! \n\n";
			continue;
		}
		if(valor <= 0) {
			cout << "Entrada inválida! \n\n";
			continue;
		}
		return valor;
	}
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
	int opcaoMenu = 0;
	
	int qtdFuncionarios_maximo = 10;
	registroFuncionario funcionarios[qtdFuncionarios_maximo];
	int qtdFuncionarios = 0;
	
	int codigo = 0;
	
	while(opcaoMenu != 5) {
		menu();
		cout << "\n";
		
		opcaoMenu = validaInput_int("Selecione uma opção: ");
		
		switch(opcaoMenu) {
			case 1:
				{
					cout << "\n\n";
					cout << "--------------- Adicionar Funcionário ---------------\n\n";
					
					cout << "Nome do funcionário: ";
					cin.ignore();
					getline(cin,funcionarios[qtdFuncionarios].nome);
					
					funcionarios[qtdFuncionarios].idade = validaInput_int("Idade do funcionário: ");
					
					funcionarios[qtdFuncionarios].salario = validaInput_double("Salário do funcionário: ");
					
					bool codigoValido = false;
					
					while (!codigoValido) {
						codigo = rand() % 101 + 1;
						codigoValido = true;
						
						for(int i = 0; i < qtdFuncionarios; i++) {
							if(codigo == funcionarios[i].codigo) {
								codigoValido = false;
								i = qtdFuncionarios;
							}
						}
					}
					
					funcionarios[qtdFuncionarios].codigo = codigo;
					cout << "\n\n";
					cout << "Funcionário " << funcionarios[qtdFuncionarios].nome << " cadastrado com sucesso!";
					cout << "\n\n";
					qtdFuncionarios++;
					
					break;
				}
				
			case 2:
				{
					cout << "\n\n";
					cout << "--------------- Consultar Funcionário ---------------\n\n";
					
					codigo = validaInput_int("Insira o código do funcionário a ser consultado: ");
					bool funcionarioConsultado = false;
					
					cout << "\n\n";
					
					cout << setw(10) << left << "Código" << setw(20) << left << "Nome" 
					     << setw(10) << left << "Idade" << setw(15) << left << "Salário (R$)" << endl;
				    cout << "------------------------------------------------------------\n";
					
					for(int i=0; i < qtdFuncionarios; i++) {
						if(codigo == funcionarios[i].codigo) {
							cout << setw(10) << left << funcionarios[i].codigo
	             			<< setw(20) << left << funcionarios[i].nome
				            << setw(10) << left << funcionarios[i].idade
				            << setw(15) << left << fixed << setprecision(2) 
							<< funcionarios[i].salario << endl;
							
							funcionarioConsultado = true;
						}
					}
					
					if(!funcionarioConsultado) {
						cout << "Nenhum funcionário com o código" << codigo << "foi encontrado!";
						cout << "\n Consulta cancelada...";
					}
					cout << "\n\n";
					break;
				}
			case 3:
				{
				
					cout << "\n\n";
					cout << "--------------- Remover Funcionário ---------------\n\n";
					
					int codigo = validaInput_int("Insira o código do funcionário a ser demitido: ");
					bool funcionarioDemitido = false;
					
					for(int i=0; i < qtdFuncionarios; i++) {
						if(codigo == funcionarios[i].codigo) {
							
							for(int j=i+1; j < qtdFuncionarios; j++) {
								funcionarios[j-1].codigo = funcionarios[j].codigo;
								funcionarios[j-1].nome = funcionarios[j].nome;
								funcionarios[j-1].idade = funcionarios[j].idade;
								funcionarios[j-1].salario = funcionarios[j].salario;
							}
							funcionarioDemitido = true;
							
							qtdFuncionarios--;
							i = qtdFuncionarios;
						}
					}
					
					if(funcionarioDemitido) {
						cout << "\n\n Funcionário com o código " << codigo << " foi demitido!";
					}
					else{
						cout << "\n\n Funcionário com o código " << codigo << " não foi encontrado!";
					}
					cout << "\n\n";
					break;
				}
				
			case 4:
				{
					cout << "\n\n";
					cout << "--------------- Listar Funcionários ---------------\n\n";
					
					if(qtdFuncionarios != 0){
						cout << setw(10) << left << "Código" << setw(20) << left << "Nome" 
						     << setw(10) << left << "Idade" << setw(15) << left << "Salário (R$)" << endl;
					    cout << "------------------------------------------------------------\n";
					    
					    for(int i=0; i < qtdFuncionarios; i++) {
					    	cout << setw(10) << left << funcionarios[i].codigo
		         			<< setw(20) << left << funcionarios[i].nome
				            << setw(10) << left << funcionarios[i].idade
				            << setw(15) << left << fixed << setprecision(2) 
							<< funcionarios[i].salario << endl;
						}
					}
					else{
						cout << "Nenhum funcionário cadastrado!";
					}
					cout << "\n\n";
					break;
				}
				
			case 5:
				cout << "Encerrando o programa...";
				break;
				
			default: 
				cout << "Opção inválida!";
				break;
	
		}
	}
}