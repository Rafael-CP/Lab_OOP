#include <iostream>
using namespace std;

class Retangulo{
    public: 
        int x, y;
        Retangulo();
        Retangulo(int a, int b){
            x = a;
            y = b;
        }
        int area(){
            return x*y;
        }
};

int main(){
    int c, l;
    cout << "Entre com o comprimento do retangulo:" << endl;
    cin >> c;
    cout << "Entre com a largura do retangulo:" << endl;
    cin >> l;

    Retangulo r(c,l);
    cout << "Area: " << r.area() << endl;

    return 0;
}