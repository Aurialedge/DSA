#include<iostream>
using namespace std;
int main(){
    // loops in cpp :- for, while, do while

    // for loop
    for(int i=0; i<5; i++){
        cout<<"For loop iteration: "<<i<<endl;
    }

    // while loop
    int j=0;
    while(j<5){
        cout<<"While loop iteration: "<<j<<endl;
        j++;
    }

    // do while loop
    int k=0;
    do{
        cout<<"Do while loop iteration: "<<k<<endl;
        k++;
    }while(k<5);

    return 0;
}