#include <iostream>
using namespace std;

class Mamifero{
    protected:
        void print(){
            cout << "Mamiferos parem seus filhotes" << endl;
        }
};

class Alado : public Mamifero{
    protected:
    void printA(){
        cout << "Seres alados podem voar" << endl;
    }
};

class Morcego : public Alado{
    public:
        Morcego() {};
        void print(){
            cout << "Mamiferos parem seus filhotes" << endl;
        }
        void printA(){
            cout << "Seres alados podem voar" << endl;
        }
};

int main(){

Morcego m;

m.print();
m.printA();

return 0;
}