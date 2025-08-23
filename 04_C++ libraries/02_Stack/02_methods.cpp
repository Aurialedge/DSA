// stack follow the LIFO (Last In First Out) principle
#include<iostream>
#include<stack>
using namespace std;
int main(){
    // initialization
    stack<int> y;
    
    // methods in stack
    // 01 push : adds an element to the top
    y.push(1);
    y.push(2);
    y.push(3);
    y.push(4);
    y.push(5);

    // 02 pop :- removes the top element
    y.pop();


    // 03 top :- returns the top element
    int x = y.top();


    // 04 empty :- checks if the stack is empty
    if(y.empty()){
        cout << "Stack is empty" << endl;
    }

    //  05 size :- returns the number of elements in the stack
    int size = y.size();

    // 06 swap :- swaps the top two elements
    stack<int> z;
    z.push(11);
    z.push(12);
    y.swap(z);
    cout << "Top element of y: " << y.top() << endl; // 12
    cout << "Top element of z: " << z.top() << endl; // 5
}