#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        string profession;
        int age;
        Person(){
            profession = "unemployed";
            age = 16;
        }

        void walk(){
            cout << "I can walk" << endl;
        }
        void talk(){
            cout << "I can talk" << endl;
        }
        void display(){
            cout << "My profession is: " << profession << endl;
            cout << "My age is: " << age << endl;
            walk();
            talk();
        }
};

class MathsTeacher : public Person{
    public:
    void display(){
    Person::display();
    cout << "I can teach Maths" << endl;
    }
};

class Footballer : public Person{
    public:
    void display(){
    Person::display();
    cout << "I can play Football" << endl;
    }
};

int main()
{
     MathsTeacher teacher;
     teacher.profession = "Teacher";
     teacher.age = 23;
     teacher.display();
     //teacher.displayT();
 
     Footballer footballer;
     footballer.profession = "Footballer";
     footballer.age = 19;
     footballer.display();
     //footballer.displayF();
 
     return 0;
}