#include <iostream>
#include <stdexcept>
using namespace std;

class NumSimples: public runtime_error{
    public:
    NumSimples()
        : runtime_error("terminate called without an active exception exited, aborted") {}
};

void VerificaNum(int a){
    if(a >= 0 && a <= 9){
        cout << "Este e um numero simples" << endl;
    }
    else throw NumSimples();

}


int main(){

int a;

cout << "Entre um numero : ";
cin >> a;

try
{
    VerificaNum(a);
}
catch(NumSimples &e)
{
    cout << e.what() << '\n';
}

    return 0;
}