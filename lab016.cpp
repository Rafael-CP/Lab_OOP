#include <iostream>
using namespace std;
int main(){
	int opc;
	cout << "Indique a opção \n1) Entrar \n2) Executar \n3) Parar \n4) Sair \n";
	cin >> opc;

  
	switch(opc){
		case 1: cout << "Você escolheu entrar. \n";
		break;
		case 2: cout << "Você escolheu executar. \n";
		break;
		case 3: cout << "Você escolheu parar. \n";
		break;
		case 4: cout << "Você escolheu sair. \n";
		break;
		default: cout << "Opção inválida. \n";
	}
	cout << "Programa finalizado!" <<endl;
}