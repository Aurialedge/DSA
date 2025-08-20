#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int &ref = x; // reference to x

    cout << "x = " << x << endl;
    cout << "ref = " << ref << endl;

    ref = 50; // modifies x as well
    cout << "x after change = " << x << endl;
}
