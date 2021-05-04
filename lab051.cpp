#include <iostream>
using namespace std;

class Incremento{
    public:
        int valor;
        Incremento();
        Incremento(int);
        int print();
        Incremento operator++();
        Incremento operator--();

};

Incremento::Incremento(){
    valor = 0;
}

Incremento::Incremento(int x){
    valor = x;
}

int Incremento::print(){
    return valor;
}

Incremento Incremento::operator++()
{  
    valor = valor+2 ;
}

Incremento Incremento::operator--()
{  
    valor = valor-5 ;
}

int main() {

  int x,y;
  
  cout << "[Exercicio 01]" << endl;
  cout << "Forneca o valor v1: ";
  cin >> x;
  cout << "Forneca o valor v2: ";
  cin >> y;

  Incremento a(x);
  Incremento b(y);

  ++a;
  ++b;
  
  cout << "Incremento Especial de v1 (+2): " << a.print() << endl;
  cout << "Incremento Especial de v2 (+2): " << b.print() << endl;
  
  --a;
  --b;

  cout << "Decremento Especial de v1 (-5): " << a.print() << endl;
  cout << "Decremento Especial de v2 (-5): " << b.print() << endl;

  cout << "[FIM do Exercicio 01]" << endl;

  return 0;
}



