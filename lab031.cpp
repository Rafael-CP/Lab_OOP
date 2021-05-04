#include <iostream>
using namespace std;

class Retangulo {
    public:
        Retangulo();
        Retangulo(int a, int b){
            x = a;
            y = b;
        }
        int x, y;
        int area(int x, int y){
            return (x*y);
        }
};

int main(){
    Retangulo r(1,2); // iniciar com um valor qualquer
    int c, l;
cout << "Entre com o comprimento do retangulo:" << endl;
cin >> c;
cout << "Entre com a largura do retangulo:" << endl;
cin >> l;

cout << "Area:" <<  r.area(c,l) << endl;


return 0;

}