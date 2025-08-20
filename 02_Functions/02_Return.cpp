// The return statement is used to return a value from a function.
// It can be used to return any data type, including primitive types and objects.

// we use void when we don't want to return a value.
 
#include<iostream>
using namespace std;

// when you  dont want to return anything
void greet(){
    cout << "Hello Buddy";
}


// if  you want to return int datatype
int add(int a, int b) {
    return a + b; // Returning the sum of a and b
}

// pointer return
int* getPointer(int x) {
    int* p = new int(x); // dynamic memory
    return p;
}


int main() {
    greet(); // Calling the function
    int sum=add(2,4);
    cout<<sum;
  

    // This is the pointer function calling 
    int* ptr = getPointer(50);
    cout << *ptr; // 50
    delete ptr;   // free memory
    
    return 0;
    
}
