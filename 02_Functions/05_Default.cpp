#include<iostream>
using namespace std;

void printSum(int a, int b=10) {
    cout << "Sum = " << a + b << endl;
}

int main() {
    printSum(5, 15); // Uses both parameters
    printSum(5);     // Uses default value for b
}
