#include <iostream>
#include <math.h>
using namespace std;

template<typename T>
class Calculator{
    public:
        T a, b;
    Calculator() {}
    Calculator(T c, T v){
        a = c;
        b = v;
    }
    T soma(){
        return a+b;
    }
    T sub(){
        return a-b;
    }
    T mult(){
        return a*b;
    }
    T divi(){
        return a/b;
    }
};

int main(){

int a, b;
float x, y;

a = 2;
b = 1;

x = 2.4;
y = 1.2;

Calculator<int> c1{a,b};
Calculator<float> c2{x, y};

cout << "INT:" << endl;
cout << "Os numeros sao: " << a << " e " <<  b << endl;
cout << "Adicao: " << c1.soma() << endl;
cout << "Subtracao: " << c1.sub() << endl;
cout << "Multiplicacao: " << c1.mult() << endl;
cout << "Divisao: " << c1.divi() << endl;

cout << "FLOAT:" << endl;
cout << "Os numeros sao: " << x << " e " << y << endl;
cout << "Adicao: " << c2.soma() << endl;
cout << "Subtracao: " << c2.sub() << endl;
cout << "Multiplicacao: " << c2.mult() << endl;
cout << "Divisao: " << c2.divi() << endl;

    return 0;
}