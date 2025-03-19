#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	int qtdClientes = 0;
	char pesquisa = "";
	
	
	
	int soma1 = 0;
	int soma2 = 0;
	int soma3 = 0;
	
	int aux
	
	
	while not(pesquisa == "n")
		cout << "\n =====Pesquisa de satisfação de clientes =====\n"
	                                                                           
		
		
		if(cin >> qtdClientes){
			cout << "Nota comida: ";
					if (cin >> aux) {
						if (aux < 1 || aux > 5){
							aux = 1
						}
						qualiComida[i] = aux;
					}
					else {
						cin.clear();
						cin.get();
						qualiComida[i] = 1;
					}
					
					cout << "Nota atendimento: ";
					
					if (cin >> aux) {
						if (aux < 1 || aux > 5){
							aux = 1
						}
						qualiAtend[i] = aux;
					}
					else {
						cin.clear();
						cin.get();
						qualiAtend[i] = 1;
					}
					
					cout << "Nota ambiente: ";
					
					if (cin >> aux) {
						if (aux < 1 || aux > 5){
							aux = 1
						}
						qualiAmbi[i] = aux;
					}
					else {
						cin.clear();
						cin.get();
						qualiAmbi[i] = 1;
					}
				}
				
				for (int i=0; i<qtdClientes; i++){
					soma1 += qualiComida[i];
					soma2 += qualiAtend[i];
					soma3 += qualiAmbi[i];
				}
				
				cout << "Média de qualidade comida: " << soma1/qtdClientes;
				cout << "Média de qualidade atendimento: " << soma2/qtdClientes;
				cout << "Média de qualidade ambiente: " << soma3/qtdClientes << "\n\n";
				cout << "Média geral: " << (soma1+soma2+soma3)/3
				
			
		
		
		
					
			}
			else {
				cout << "Quantidade de clientes inválida!" << endl << endl;
			}
		}
		else {
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Insira uma quantia válida!" << endl << endl;
		}
		     get
	return 0;
}  