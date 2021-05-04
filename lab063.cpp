#include <iostream>
using namespace std;

struct A
{
    A(int) { }
    A(int, int) { }
    operator bool() const { return true; }
};
 
struct B
{
    B(int) { }
    B(int, int) { }
    operator bool() const { return true; }

};
 
int main()
{
  cout << "Início do programa" << endl << endl;
  
  cout << "Executando a estrutura A." << endl;
  
  A a1 = 1;
  A a2(2); 
  A a3 {4, 5}; 
  A a4 = {4, 5}; 
  A a5 = (A)1; 
  bool na1 = a1; 
  bool na2 = static_cast<bool>(a1); 
  
  cout << "Executando a estrutura B." << endl;
  
  B b1 = 1;
  B b2(2);
  B b3 {4, 5}; 
  B b4 = {4, 5}; 
  B b5 = (B)1;  
  bool nb1 = b2; 
  bool nb2 = static_cast<bool>(b2);
  
  cout << endl;
  cout << "Fim do Programa." << endl;
}