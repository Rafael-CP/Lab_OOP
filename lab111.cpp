#include <iostream>
using namespace std;

class Animal{
    public:

    virtual void carrega(){
    cout << "Carregando detalhes do animal." << endl;
}

};

class Cavalo : public Animal{
    void carrega(){
        Animal::carrega();
        cout << "Carregando detalhes do cavalo." << endl;
    }
};
class Baleia : public Animal{
    void carrega(){
        Animal::carrega();
        cout << "Carregando detalhes da baleia." << endl;
    }

};
class Girafa : public Animal{
    void carrega(){
        Animal::carrega();
        cout << "Carregando detalhes da girafa." << endl;
    }

};

int main(){

Animal* c = new Cavalo;
Animal* b = new Baleia;
Animal* g = new Girafa;

c->carrega();
b->carrega();
g->carrega();

 return 0;
}