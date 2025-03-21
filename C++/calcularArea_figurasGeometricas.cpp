#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <cmath>

using namespace std;

float calcular_areaQuadrado(float lado) {
	return pow(lado, 2);
}

float calcular_areaCirculo(float raio) {
	return M_PI * pow(raio, 2);
}

float calcular_areaTriangulo(float base, float altura) {
	return (base * altura)/2;
}

float calcular_areaTrapezio(float baseMa, float baseMe, float altura) {
	return ((baseMa + baseMe) * altura)/2;
}

float pegaFloat() {
	float num = 0;
	
	if (!(cin >> num)) {
		cin.clear();
		cin.get();
		
		num = 0;
	}
	return num;
}

void mostraMenu() {
	cout << "------------------------------------------------------\n";
	cout << "Calcular área de figuras geométricas planas\n";
	cout << "------------------------------------------------------";

	cout << "\n\n";
	cout << "1. Área do quadrado \n2. Área do círculo \n3. Área do triângulo \n4. Área do trapézio \n5. Sair";
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
	
	int opcao = 0;
	float area = 0;
	
	float lado = 0;
	float raio = 0;
	float altura = 0;
	
	float baseTriangulo = 0;
	float baseMa = 0;
	float baseMe = 0;
	
	
	
	while(opcao != 5){
		mostraMenu();
		cout << "\n\nInsira a opção desejada: ";
		
		opcao = pegaFloat();
		
		
		cout << "\n\n";
		
		switch (opcao){
			case 1:
				cout << "Digite o lado do quadrado: ";
				
				lado = pegaFloat();
				area = calcular_areaQuadrado(lado);
				
				break;
			case 2:
				cout << "Digite o raio do circulo: ";
				
				raio = pegaFloat();
				area = calcular_areaCirculo(raio);

				break;
			case 3:
				cout << "Digite a base do triângulo: ";
				baseTriangulo = pegaFloat();
				
				cout << "\nDigite a altura do triângulo: ";
				altura = pegaFloat();
				
				area = calcular_areaTriangulo(baseTriangulo, altura);
				break;
			case 4:
				cout << "Digite a base maior do trapézio: ";
				baseMa = pegaFloat();
				
				cout << "\nDigite a base menor do trapézio: ";
				baseMe = pegaFloat();
				
				cout << "\nDigite a altura do trapézio: ";
				altura = pegaFloat();
				
				area = calcular_areaTrapezio(baseMa, baseMe, altura);
				break;
			case 5:
				cout << "Encerrando o programa...";
				break;
			default:
				cout << "Opção desconhecida. Tente novamente";
				break;
		}
		if (opcao >= 1 && opcao <= 4) {
			cout << endl << endl << "A área da figura é " << area << endl;
		}
	}
	
	
}