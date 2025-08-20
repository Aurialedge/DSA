#include<iostream>
using namespace std;
int main(){
    // sizeof operator tells the size of data type in bytes
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;

    // comma operator ( , ) is used to separate two or more expressions.
    int a = (5, 10);
    cout << "Value of a (using comma operator) : " << a << endl;

}