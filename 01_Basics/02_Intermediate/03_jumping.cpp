// break, continue, return and goto

#include<iostream>
using namespace std;

int main(){
    // break statement :- breaks out of the loop
    for(int i=0; i<5; i++){
        if(i==3){
            break;
        }
        cout<<"Break statement iteration: "<<i<<endl;
    }

    // continue statement :- skips the current iteration
    for(int i=0; i<5; i++){
        if(i==2){
            continue;
        }
        cout<<"Continue statement iteration: "<<i<<endl;
    }

    // return statement :- exits the program
    // int x=5;
    // if(x==5){
    //     return 0;
    // }

    // goto statement :- jumps to a specific label
    int y=0;
    start:
    cout<<"Goto statement iteration: "<<y<<endl;
    y++;
    if(y<5){
        goto start;
    }

    return 0;
}