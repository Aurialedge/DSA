#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a; // pointer stores address of a

    cout << "Value of a = " << a << endl;
    cout << "Address of a = " << &a << endl;
    cout << "Pointer p = " << p << endl;
    cout << "Value at *p = " << *p << endl;
   

    //the &a is said to be the address of the a 
    // the *a is said to be the value of the a

    //& → address-of (gives address).

// * → dereference (accesses value at address).


    *p = 20; // changing value using pointer
    cout << "New value of a = " << a << endl;
}
