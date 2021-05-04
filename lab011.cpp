#include <iostream>
using namespace std;

float reais(float dolar, float cambio){
return (cambio * dolar);
   
}


int main() {
  float dolar, cambio, real;
  
  cout << "Dólares US$:" << endl;
  cin >> dolar;
  
  cout << "Câmbio R$/US$:" << endl;
  cin >> cambio;
  
  cout << "Dólares US$:" << dolar << " " << "Reais R$" << reais(dolar, cambio) << endl;
  
  return 0;
}