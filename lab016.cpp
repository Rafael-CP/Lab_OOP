#include <iostream>
using namespace std;
int main(){
	int opc;
	cout << "Indique a op��o \n1) Entrar \n2) Executar \n3) Parar \n4) Sair \n";
	cin >> opc;

  
	switch(opc){
		case 1: cout << "Voc� escolheu entrar. \n";
		break;
		case 2: cout << "Voc� escolheu executar. \n";
		break;
		case 3: cout << "Voc� escolheu parar. \n";
		break;
		case 4: cout << "Voc� escolheu sair. \n";
		break;
		default: cout << "Op��o inv�lida. \n";
	}
	cout << "Programa finalizado!" <<endl;
}