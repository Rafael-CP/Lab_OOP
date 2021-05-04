#include <iostream>
#include <string>

using namespace std;

class Ball{
    private:
        float x, y, xspd, yspd;
    public:
        Ball(){
            x = 0;
            y = 0;
            xspd = 0;
            yspd = 0;
        }
        Ball(float a, float b, float va, float vb){
            x = a;
            y = b;
            xspd = va;
            yspd = vb;
        }
        float get_x(){
            return x;
        }
        float get_y(){
            return y;
        }
        float get_xspd(){
            return xspd;
        }
        float get_yspd(){
            return yspd;
        }
        void set_x(float a){
            x = a;
        }
        void set_y(float b){
            y = b;
        }
        void set_xspd(float va){
            xspd = va;
        }
        void set_yspd(float vb){
            yspd = vb;
        }
        void setXY(float a, float b){
            x = a;
            y = b;
        }
        void setXYSpeed(float va, float vb){
            xspd = va;
            yspd = vb;
        }
        void move(){
            x = x+xspd;
            y = y+yspd;
        }
        void print(){
            cout << "Bola esta em (" << x << ", " << y << ") com velocidade" << "(" << xspd << ", " << yspd << ")." << endl;
        }
};

int main() {

    Ball ball;
    ball.print();
    ball.setXY(1.1, 2.2);
    ball.setXYSpeed(3.3, 4.4);
    ball.print(); 
    ball.set_x(5.5);
    ball.set_y(6.6);
    ball.print();
    cout << "x is " << ball.get_x() << endl;  // x is 5.50
    cout << "y is " << ball.get_y() << endl;  // y is 6.60
    ball.move();
    ball.print();

   return 0;
}

