// This is the perfect example of the call by value, call by pointer, and call by reference.

#include <iostream>
using namespace std;

void changeByValue(int a) {
    a = 20;
}

void changeByPointer(int *a) {
    *a = 30;
}

void changeByReference(int &a) {
    a = 40;
}

int main() {
    int x = 10;

    changeByValue(x);
    cout << "After call by value: " << x << endl; // still 10

    changeByPointer(&x);
    cout << "After call by pointer: " << x << endl; // 30

    changeByReference(x);
    cout << "After call by reference: " << x << endl; // 40
}
