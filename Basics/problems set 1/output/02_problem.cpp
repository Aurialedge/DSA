// Calculator problem
#include<iostream>
using namespace std;
void Calculator(){
    cout<<"Enter the operation you want to do"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    int choice;
    cin>>choice;
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    switch(choice){
        case 1: cout<<"The sum is "<<a+b<<endl; break;
        case 2: cout<<"The difference is "<<a-b<<endl; break;
        case 3: cout<<"The product is "<<a*b<<endl; break;
        case 4: cout<<"The quotient is "<<a/b<<endl; break;
        default: cout<<"Invalid choice"<<endl;
    }
    
}
int main(){
    Calculator();
    return 0;
}