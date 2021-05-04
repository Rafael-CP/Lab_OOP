#include <iostream>
#include <stdexcept>
using namespace std;

class DivideZero : public runtime_error{
    public: 
        DivideZero()
        : runtime_error("Erro: Tentativa de divisao por zero") {}
};

int divide(int a, int b){
    if (b == 0)
        throw DivideZero();
    return a/b;     
}

int main(){
int a, b;

cout << "Forneca o dividendo: " << endl;
cin >> a;
cout << "Forneca o divisor: " << endl;
cin >> b;

try{
    cout << divide(a,b) << endl;;
}

catch(DivideZero &ex){
    cout << ex.what() << endl;
}

return 0;
}