#include <iostream>
#include "Pilha.h"
using namespace std;

void Pilha::aloca_memoria(){
    if(tamanho>0)
        dados = new int[tamanho];
    else 
        dados = nullptr;
}

Pilha::Pilha(){
    tamanho = 100;
    topo = -1;
    aloca_memoria();
}

Pilha::Pilha(int t){
    if (t<0) t = 0;
    tamanho = t;
    topo = -1;
    aloca_memoria();
    cout << "construindo..." << endl;
}


Pilha::~Pilha(){
    if(dados != nullptr)
        delete[] dados;
    cout << "Destruindo" << endl;
}

bool Pilha::empty(){
    return (topo == -1 ? true : false);
}

void Pilha::push(int v){
    if (dados != nullptr && topo != tamanho -1)
    { topo++;
       dados[topo] = v;}
}
int Pilha::top(){
    if(!empty())
        return dados[topo];
}
int Pilha::pop(){
    if(!empty())
        return dados[topo--];
}