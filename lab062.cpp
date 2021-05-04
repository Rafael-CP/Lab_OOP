#include <iostream>
#include <math.h>
using namespace std;

class Complex{
    private:
        double re, im;
    public:
        Complex(){
            re = 0;
            im = 0;
        }
        Complex(double r, double i){
            re = r;
            im = i;
        }
        double get_re(){
            return re;
        }
        double get_im(){
            return im;
        }
        double get_module(){
            return (sqrt((re*re)+(im*im)));
        }
        double get_angle(){
            return atan(im/re);
        }

        friend ostream& operator<<(ostream& out, const Complex& c){
            out << c.re << " + " << c.im << "i" << endl;
            return out;
        }
        friend istream& operator>>(istream& in, Complex& c){
            in >> c.re >> c.im;
            return in;
        }

        bool operator>(Complex& c2){
            if ((sqrt((re*re)+(im*im)) > c2.get_module())) return true;
            return false;
        }
        bool operator<(Complex& c2){
            if ((sqrt((re*re)+(im*im)) < c2.get_module())) return true;
            return false;
        }
        bool operator==(Complex& c2){
            if ((sqrt((re*re)+(im*im)) == c2.get_module())) return true;
            return false;
        }
        bool operator!=(Complex& c2){
            if ((sqrt((re*re)+(im*im)) != c2.get_module())) return true;
            return false;
        }
       
};
int main(){

    Complex c1{100, 600};
    Complex c2{3002, 756};   
    cout << "Inicio do programa" << endl;
    cout << "------------------------------------" << endl;
    cout << "Modulos e angulos:" << endl;
    cout << "Primeiro Complexo: " << c1 << "Modulo " << c1.get_module() << " Angulo " << c1.get_angle() << endl;
    cout << "Segundo Complexo: " << c2 << "Modulo " << c2.get_module() << " Angulo " << c2.get_angle() << endl;

    if (c1 > c2){
        cout << "O Primeiro Complexo e maior que o Segundo Complexo." << endl;
    }
    if (c1 < c2) {
        cout << "O Primeiro Complexo nao e maior que o Segundo Complexo." << endl;
    }
    if (c1 == c2) {
        cout << "O Primeiro Complexo e identico ao Segundo Complexo." << endl;
    }
    if(c1 != c2) {
        cout << "O Primeiro Complexo e diferente do Segundo Complexo." << endl;
    }
    
return 0;
}