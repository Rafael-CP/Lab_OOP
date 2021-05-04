#include <iostream>
using namespace std;

class Box{
   public:
      int l, h, c;
   Box(){
      l = 0;
      h = 0;
      c = 0;
   }
   Box(int x, int y, int z){
      l = x;
      h = y;
      c = z;
   }
   void set_l(int x){
      l = x;
   }
   void set_h(int y){
      h = y;
   }
   void set_c(int z){
      c = z;
   }
   int get_volume(){
      return (l*h*c);
   }

};

int main(){
   int a, b, c;
   
   cout << "Insira as dimensoes da caixa" << endl;
   cin >> a >> b >> c; 

   Box B1{a,b,c};

   cout << "Volume da Caixa" << endl;
   cout << B1.get_volume();

   return 0;
}