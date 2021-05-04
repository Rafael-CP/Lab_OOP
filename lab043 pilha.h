#ifndef PILHA_H
#define PILHA_H

class Pilha{
    private:
        int *dados;
        int topo;
        int tamanho;

        void aloca_memoria();
     public:
        Pilha();
        Pilha(int);
        ~Pilha();

        bool empty();
        void push(int);
        int top();
        int pop();
};

#endif