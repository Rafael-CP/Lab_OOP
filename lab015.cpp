#include <iostream>
using namespace std;

int main() {
  int num;  
  
  num = 0;
  
  while (num != 4)
  {
    
    cout << "1 - Imprimir \" Olá mundo! \" " << endl;
    cout << "2 - Somar 1 + 1" << endl;
    cout << "3 - Escrever o nome completo da UNIFEI em maiúsculo" << endl;
    cout << "4 - Sair do programa" << endl;
    cout << "Selecione um menu (1-4):" << endl;
    
    cin >> num;
     
    switch(num){
    case 1: cout << "Olá mundo" << endl;
    break;
    case 2: cout << "2" << endl;
    break; 
    case 3: cout << "UNIVERSIDADE FEDERAL DE ITAJUBÁ" << endl;
    break;
    case 4:
    break;
    default: cout << "Menu incorreto!" << endl;
    }
  

  }
  
  
}
