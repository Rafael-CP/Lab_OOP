#include <iostream>
using namespace std;

class Mother{
    public:
        void display(){
            cout << "mother: display function" << endl;
        } 
};

class Daughter : public Mother{
    public: 
        void display(){
            cout << "daughter: display function" << endl;
        }
};

int main(){
    Mother m;
    Daughter d;

    m.display();
    d.display();

    return 0;
}