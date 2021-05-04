#include <iostream>
using namespace std;

class Shape{
    protected:
    int length, height;
    public:
    Shape(){
        length = 0;
        height = 0;
    }
    Shape(int l, int h){
        length = l;
        height = h;
    }
    int get_length(){
        return length;
    }
    int get_height(){
        return height;
    }
    void set_Shape(int l, int h){
        length = l;
        height = h;
    }
    void print(){
        cout << "Largura: " << length << endl;
        cout << "Altura: " << height << endl;
    }
    int area(){}

};

class Triangle : public Shape{
    public:
    int area(){
        return (length*height)/2;
    }
};

class Rectangle : public Shape{
    public:
    int area(){
        return (length*height);
    }
};

int main(){
    Triangle t;
    Rectangle r;

    t.set_Shape(20,10);
    r.set_Shape(10,10);

    cout << "Area triangulo: " << t.area() << endl;
    
    cout << "Area retangulo: " << r.area() << endl;
    
    return 0;
}