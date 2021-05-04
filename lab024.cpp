#include <iostream>
using namespace std;

const int m = 34;
int p = 1; // tirar const do p

int main() {
   int i = 0;
   for(i = 0; i < m; i+=p)
   {
     cout << i << endl;
     p++;
   }
   
   return 0;
}

