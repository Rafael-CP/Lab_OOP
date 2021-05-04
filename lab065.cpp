#include <iostream>
using namespace std;

class Box {
    private:
        double l, b, h;
    public:
    Box(){
        l = 0;
        b = 0;
        h = 0;
    }
    Box (double x, double y, double z){
        l = x;
        b = y;
        h = z;
    }
    getLength(){
        return l;
    }
    getBreadth(){
        return b;
    }
    getHeigth(){
        return h;
    }

    void setLength(double x){
        l = x;
    }
    void setBreadth(double y){
        b = y;
    }
    void setHeight(double z){
        h = z;
    }
    int getVolume(){
        return (l*b*h);
    }
    Box operator+(Box& b1){
        double Nl, Nb, Nh;
        Nl = l + b1.getLength();
        Nb = b + b1.getBreadth();
        Nh = h + b1.getHeigth();
        return Box{Nl, Nb, Nh};
    }

};


// Main function for the program
int main() {
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   Box Box3;                // Declare Box3 of type Box
   double volume = 0.0;     // Store the volume of a box here
 
   // box 1 specification
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);
 
   // box 2 specification
   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);
 
   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;
 
   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;
 
   // Add two object as follows:
   Box3 = Box1 + Box2;
 
   // volume of box 3
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;
 
   return 0;
}
