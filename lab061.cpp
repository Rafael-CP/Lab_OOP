#include <iostream>
using namespace std;

class Vector3D{
    private:
        int x, y, z;
    public:
        Vector3D(){
            x = 0;
            y = 0;
            z = 0;
        }
        Vector3D(int a, int b, int c){
            x = a;
            y = b;
            z = c;
        }
        ~Vector3D() { }
        int get_x(){
            return x;
        }
        int get_y(){
            return y;
        }
        int get_z(){
            return z;
        }

        Vector3D operator+(Vector3D& V2){
            int Xn, Yn, Zn;

            Xn = x + V2.get_x();
            Yn = y + V2.get_y();
            Zn = z + V2.get_z(); 
            return Vector3D{Xn,Yn,Zn};
        }
        
        Vector3D operator-(Vector3D& V2){
            int Xn, Yn, Zn;

            Xn = x - V2.get_x();
            Yn = y - V2.get_y();
            Zn = z - V2.get_z(); 
            return Vector3D{Xn,Yn,Zn};
        }

        friend ostream& operator<<(ostream& out, const Vector3D& v){
            out << v.x << "i + " << v.y << "j + " << v.z <<"k " << endl;
            return out;
        }
        friend istream& operator>>(istream& in, Vector3D& v){
            in >> v.x >> v.y >> v.z;
            return in;
        }
};

int main(){
    Vector3D V1{12,55,33};
    Vector3D V2{56,23,1};

    cout << "Programa para calculo de vetores" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Vetor 1 (V1): " << V1 << endl;
    cout << "Vetor 2 (V2): " << V2 << endl;
    cout << "Soma (V1+V2): " << V1+V2 << endl;
    cout << "Subtracao (V1-V2): " << V1-V2 << endl;

    cout << "Fim do programa!" << endl;





    return 0;
}