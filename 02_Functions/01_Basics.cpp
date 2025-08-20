// the syntax of the function is <return_type> <function_name>(<parameters>) {
//     // function body
// }


#include <iostream>
using namespace std;

int add(int, int); // Declaration

int main() {
    cout << add(5, 10); // Call
}

int add(int a, int b) { // Definition
    return a + b;
}
