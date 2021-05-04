#include <iostream>

using namespace std;

float real(float dolar){
  return (dolar*3.82);
  
}

int main() {
  int dolar;
  
  cout << "Valor em dólares:";
  cin >> dolar;
  cout << "Dólares: US$ " << dolar; 
  cout << "Reais: R$ " << real(dolar) << endl;
 
  
  return 0;
}