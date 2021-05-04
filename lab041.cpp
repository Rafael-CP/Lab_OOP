#include <iostream>
using namespace std;

class Carro{
    int tanque, distancia;
    public:

    Carro();
    Carro(int t, int d){  
        tanque = t;
        distancia = d;
    } 

    int calcRest(){
    return ((15*tanque)-distancia);

    }

    int getTanque(){
    return tanque;
    }

    int getDist(){
    return distancia;
    }

};

int main(){
    Carro c1(20,200);
    Carro c2(30,400);

    cout << "Carro 1 abastecido com " << c1.getTanque() << " Litros." << endl;
    cout << "Carro 2 abastecido com " << c2.getTanque() << " Litros." << endl;
    cout << "Carro 1 percorreu " << c1.getDist() << " km." << endl;
    cout << "Carro 2 percorreu " << c2.getDist() << " km." << endl;
    cout << "Carro 1 ainda pode percorrer mais " << c1.calcRest() << " km" << endl;
    cout << "Carro 2 ainda pode percorrer mais " << c2.calcRest() << " km" << endl;


    return 0;
}