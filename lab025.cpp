#include <iostream>
#include <string>

using namespace std;


class MITStudent {
    public:
        string nomeAluno, identidade, idadeAluno; // atributos

};

int main (){ 

    MITStudent nome; // objetos
    MITStudent id;
    
    nome.nomeAluno = "Geza";
    id.identidade = "123456789";
 
    cout << "student1 name is " << nome.nomeAluno << endl;
    cout << "student1 id is " << id.identidade << endl;

    nome.nomeAluno = "Jesse";
    id.identidade = "987654321";

    cout << "student2 name is " << nome.nomeAluno << endl;
    cout << "student2 id is " << id.identidade << endl;

    return 0;
}

