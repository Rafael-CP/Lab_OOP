#include <iostream>
using namespace std;


int main(){
    int a, b;
    int* ptrA = &a;
    int* ptrB = &b;


    cout << "Enter value of A:" << endl;
    cin >> a; 
    cout << "Enter value of B:" << endl;
    cin >> b;   
    cout << "Value of ptrA is " << *ptrA <<  endl;
    cout << "Value of ptrB is " << *ptrB << endl;
    cout << "Address of ptrA is " << ptrA << endl;
    cout << "Address of ptrB is " << ptrB << endl;



    return 0;
}