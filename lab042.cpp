#include <iostream>
#include <String>
using namespace std;

class Pessoa{
    public:
        string nome;
        int idade;
        float altura;

        Pessoa(){
            nome = "Indefinido";
            idade = 0;
            altura = 0.0;
        }

        Pessoa(string n, int a, float h){
            nome = n;
            idade = a;
            altura = h;
        }

        ~Pessoa() { }

        string getNome(){
            return nome;
        }

        int getIdade(){
            return idade;
        }

        float getAltura(){
            return altura;
        }
        
        void setNome(string n){
            nome = n;
        }

        void setIdade(int a){
            idade = a;
        }

        void setAltura(float h){
            altura = h;
        }

};

int main(){

    Pessoa p0;
    Pessoa p1("Manel", 33, 1.75);
    Pessoa p2("Maria", 18, 1.65);

    // Desnecessario
    p0.setAltura(0.0);
    p0.setIdade(0);
    p0.setNome("Indefinido");
    
    p1.setAltura(1.75);
    p1.setIdade(33);
    p1.setNome("Manel");

    p2.setAltura(1.65);
    p2.setIdade(18);
    p2.setNome("Maria");
    
    cout << p0.getNome() << " tem " << p0.getIdade() << " e mede " << p0.getAltura() << endl;
    cout << p1.getNome() << " tem " << p1.getIdade() << " e mede " << p1.getAltura() << endl;
    cout << p2.getNome() << " tem " << p2.getIdade() << " e mede " << p2.getAltura() << endl;

    return 0;
}