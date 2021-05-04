#include <iostream>
#include "Pilha.h"
using namespace std;

int main(){
  Pilha p;
  p.push(90);
  p.push(60);
  cout << "Pilha esta vazia? \n";
  if(p.empty()) 
    cout << "SIM \n";
  else 
    cout << "NAO \n";
  cout << "Inserindo elementos. \n";
  p.push(120);
  p.push(200);
  p.push(300);
  
  cout << "O topo e: " << p.top() << "\n";
  cout << "Retirando elemento: " << p.pop() << "\n";
  cout << "Retirando elemento: " << p.pop() << "\n";
  cout << "O topo e: " << p.top() << "\n";
}