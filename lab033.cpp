#include <iostream>
using namespace std;

class SomaNum{
    private:
        int x, y;
    //public:
        SomaNum();
        SomaNum(int a, int b){
            x = a;
            y = b;
            cout << "Numeros Inicializados!" << endl;
        }
        int somador(){
            return x+y;
        }
};

int main(){
    int a, b;

    cout << "Primeiro numero: " << endl;
    cin >> a;
    cout << "Segundo numero: " << endl;
    cin >> b;

    SomaNum sn(a,b);

    cout << "O teste de adicao e: " << sn.somador() << endl;

 return 0;
}