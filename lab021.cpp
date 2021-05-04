#include <iostream>
using namespace std;

int main(){
    int a;
    int* b = &a;

    cout << "Entre um número:" << endl;
    cin >> a;  
    cout << "O valor do ponteiro é" << " " << *b << " " << "seu endereço de memória: ";


    return 0;
}