#include <iostream> 
using namespace std; 

inline int cube(int x){
    return (x*x*x);
}

int main() 
{ 
  int v;
  
  cout << "Forneça um valor:" << endl;
  
  cin >> v;
  
  cout << "O cubo de " << v << " é: " << cube(v) << "\n"; 
  
  return 0; 
}