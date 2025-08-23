// deleting and than shifting as array is continguous
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    // deletion
    int indexToDelete = 2; // delete element at index 2
    for(int i=indexToDelete; i<4; i++){
        arr[i] = arr[i+1];
    }
    // after deletion
    for(int i=0; i<4; i++){
        cout << arr[i] << " ";
    }


    return 0;
}