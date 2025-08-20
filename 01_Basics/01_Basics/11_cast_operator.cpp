#include<iostream>
using namespace std;
int main(){
    // Type casting is the conversion of one type into the another

    // 1 Implicit type casting (automatic)
    // int x=10;
    // double y=6.7;
    // double z=x+y; 
    // in z, x is implicitly converted to double

    // 2 Explicit type casting (manual)
    //  explicit type casting has 4 types

    // 1 C-style casting
    int a = 10;
    double b = (double)a; // C-style cast
    cout << "C-style cast: " << b << endl;

    // 2 Function-style casting
    int c = 20;
    double d = double(c); // Function-style cast
    cout << "Function-style cast: " << d << endl;

    // 3 static_cast
    int e = 30;
    double f = static_cast<double>(e); // static_cast
    cout << "static_cast: " << f << endl;

    // 4 const_cast
    const int g = 40;
    int* h = const_cast<int*>(&g);
    *h = 50; // Modifying the value
    cout << "const_cast: " << *h << endl;
    cout << "Original value after const_cast: " << g << endl;


    // reinterpret_cast
    int x=65;
    char* y = reinterpret_cast<char*>(&x);
    cout << "reinterpret_cast: " << *y << endl;
    // Expecting to see the first byte of x
    // Dynamic cast in next code

}