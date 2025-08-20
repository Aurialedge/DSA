#include<bits/stdc++.h>
using namespace std;
int main(){
    // I will be telling you about the operators in the cpp language 
    // Types
    // 01 Assignment Operator (=, +=, -=, *=, /=, %=)
    int a = 5;
    a += 2; // a = a + 2
    cout << "Value of a after += : " << a << endl;

    // 2. Arithematic Operators (+,-,*,/,%)
    int sum =4+3;
    int sub = 36-3;

    // 3. Logical :- && , || !
    bool x = (5 > 3) && (8 > 5); // true
    bool y = (5 > 3) || (8 < 5); // true
    bool z = !(5 > 3); // false

    cout << "Value of x (&&) : " << x << endl;
    cout << "Value of y (||) : " << y << endl;
    cout << "Value of z (!) : " << z << endl;

    // 4. Relational Operators (==, !=, >, <, >=, <=)
    bool eq = (5 == 5); // true
    bool neq = (5 != 3); // true
    bool gt = (5 > 3); // true
    bool lt = (5 < 3); // false
    bool gte = (5 >= 5); // true
    bool lte = (5 <= 3); // false

    cout << "Value of eq (==) : " << eq << endl;
    cout << "Value of neq (!=) : " << neq << endl;
    cout << "Value of gt (>) : " << gt << endl;
    cout << "Value of lt (<) : " << lt << endl;
    cout << "Value of gte (>=) : " << gte << endl;
    cout << "Value of lte (<=) : " << lte << endl;

}