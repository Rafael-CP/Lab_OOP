#include <iostream>
#include <string>
using namespace std;


class basicInfo{
    protected:
        string nome, id;
        char gender;
    public:
        void set_basic(){
            cout << "Enter employee's basic info" << endl;
            cout << "Enter Name:" << endl;
            cin >> nome;
            cout << "Enter Emp. Id:" << endl;
            cin >> id;
            cout << "Enter Gender:" << endl;
            cin >> gender;
        }
};

class dptoInfo {
   protected:
        string dptName, work;
        int time;
    public:
        void set_dpto(){
            cout << "Enter employee's department info" << endl;
            cout << "Enter Department Name: " << endl;
            cin >> dptName;
            cout << "Enter assigned work: " << endl;
            cin >> work;
            cout << "Enter time in hours to complete work: " << endl;
            cin >> time;
        }
};

class funcionario : private basicInfo, private dptoInfo{
    public:
        void set_info(){
            set_basic();
            set_dpto();
        }

        void print(){
            cout << "Name: " << nome << endl;
            cout << "Id: " << id << endl;
            cout << "Gender: " << gender << endl;
            cout << "Department: " << dptName << endl; 
            cout << "Assigned Work: " << work << endl;  
            cout << "Time to complete work: " << time << "hours" << endl;
        }
};

int main(){
    funcionario emp;
    emp.set_info();
    emp.print();
    return 0;
}