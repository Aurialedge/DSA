// traversal
#include<iostream>
using namespace std;
int main(){
    // declaration
    int arr[5]; // array of size 5
    // initialization
    for(int i=0; i<5; i++){
        arr[i] = i+1;
    }
    // accessing elements
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }

    // traversal:-visiting elements at each index once
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}