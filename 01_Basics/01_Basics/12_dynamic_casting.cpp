// Dynamic casting example it is used in polymorphism


#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { cout << "Base class\n"; }
};

class Derived : public Base {
public:
    void show() { cout << "Derived class\n"; }
};

int main() {
    Base* basePtr = new Derived(); // Upcasting (safe)
    Derived* dPtr = dynamic_cast<Derived*>(basePtr); // Downcasting
    if (dPtr)
        dPtr->show();
    else
        cout << "Casting failed\n";
    return 0;
}
