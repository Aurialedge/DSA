#include<iostream>
using namespace std;


    // There are 3 type of variable scoping in cpp
    // 1. Local Scope :- Variables declared inside a function or block
    // 2. Global Scope :- Variables declared outside of all functions
    // 3. Static Scope :- Variables declared with static keyword

int globalVar = 10; // Global

void test() {
    static int count = 0; // Static
    count++;
    cout << "Count = " << count << endl;
}

int main() {
    int localVar = 5; // Local
    cout << "Local = " << localVar << endl;
    cout << "Global = " << globalVar << endl;

    test();
    test(); // retains value
}



