#include <iostream>
using namespace std;

class Numero{
    private:
        int x, y, z;
    public:
        Numero();
        Numero(int i, int j, int k);
        int get_x() {return x;}
        int get_y() {return y;}
        int get_z() {return z;}
        Numero operator--();
};

Numero::Numero(int i, int j, int k){
    x = i;
    y = j;
    z = k;
}

Numero Numero::operator--(){
    x = x*(-1);
    y = y*(-1);
    z = z*(-1);
}

int main(){
    int a, b, c;

    cout << "Forneca os tres numeros separados por espaco" << endl;
    cin >> a >> b >> c;

    Numero num(a,b,c);

    cout << "Atual: " << num.get_x() << " " << num.get_y() << " " << num.get_z() << endl;

    --num;

    cout << "Apos Inversao: " << num.get_x() << " " << num.get_y() << " " << num.get_z() << endl;

    return 0;
}
