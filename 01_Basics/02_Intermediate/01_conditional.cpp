#include<iostream>
using namespace std;
int main(){
    // conditional statements in the cpp :- if, if else, if else if , switch

    int a=0;
    if(a==0){
        cout<<"a is zero";
    }

    // else if
    int z=1;
    if(z==0){
        cout<<"z is zero";
    }
    else if(z==1){
        cout<<"z is one";
    }
    else{
        cout<<"z is neither zero nor one";
    }

    // switch case
    switch(z){
        case 0:
            cout<<"z is zero";
            break;
        case 1:
            cout<<"z is one";
            break;
        default:
            cout<<"z is neither zero nor one";
    }
}