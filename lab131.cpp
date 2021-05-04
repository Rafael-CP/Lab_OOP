#include <iostream>
#include <string>
using namespace std;


template<typename T>
void maior(T a, T b){
    if(a > b){
        cout << a;
    }
    else cout << b;
}
int main(){

int a, b;
a = 30;
b = 50;

double x, y;
x = 115.8;
y = 57.3;

string u, v;
u = "TESTEasdasdqwe";
v = "TESTE";

maior(a,b);
cout << endl;
maior(x,y);
cout << endl;
maior(u,v);

    return 0;
}