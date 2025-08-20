// More operators
#include<iostream>
using namespace std;
int main(){
    
    // increment and decrement operator
    int i=0;
    i++;
    cout << "Value of i after increment : " << i << endl;
    i--;
    cout << "Value of i after decrement : " << i << endl;
    // pre and post increment/decrement
    int j = 0;
    cout << "Value of j (post-increment) : " << j++ << endl;
    cout << "Value of j (after post-increment) : " << j << endl;
    cout << "Value of k (pre-increment) : " << ++j << endl;


    // Bitwise Operators
    int a = 5;  // 0101 in binary
    int b = 3;  // 0011 in binary
    cout << "Value of a & b : " << (a & b) << endl;  // Bitwise AND
    cout << "Value of a | b : " << (a | b) << endl;  // Bitwise OR
    cout << "Value of a ^ b : " << (a ^ b) << endl;  // Bitwise XOR
    cout << "Value of ~a : " << (~a) << endl;        // Bitwise NOT
    cout << "Value of a << 1 : " << (a << 1) << endl; // Left shift
    cout << "Value of a >> 1 : " << (a >> 1) << endl; // Right shift

    // Ternary Operator
    int max = (a > b) ? a : b;
    cout << "Maximum value : " << max << endl;

}