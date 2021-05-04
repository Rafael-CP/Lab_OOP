#include <iostream>
#include <string>
using namespace std;

class Estudante{
    public:
        float nota1, nota2;
        string nome;
        Estudante();
        Estudante(string n, int x, int y){
            nome = n;
            nota1 = x;
            nota2 = y;
        }
        float calc_media(){
            return ((nota1+nota2)/2);
        }

        void imprime(){
           cout << "O estudante " << nome << " tem media de: " << calc_media() << endl;
        }
};

int main(){
    float n1, n2;
    string nome;

    cout << "Informe o nome: " << endl;
    cin >> nome;
    cout << "Informe a nota 1: " << endl;
    cin >> n1;
    cout << "Informe a nota 2: " << endl;
    cin >> n2;

    Estudante est(nome, n1, n2);

    est.calc_media();
    est.imprime();

}