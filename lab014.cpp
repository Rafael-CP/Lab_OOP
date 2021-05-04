#include <iostream>

using namespace std;

float graurad(int grau){
  
return (grau*(3.14159265359)/180);

}

int main() {
  
  int grau,rad;
  
  cout << "Digite o ângulo em graus:";
  cin >> grau;
  
  cout << "Graus = " << grau << " " << "Radianos = " << graurad(grau) << endl;
  
  
  return 0;
}

