#include<iostream>
#include<vector>
using namespace std;
int main(){

    // Getting the size of the vector
    vector <int> arr={1,2,3,4,5};
    cout<<arr.size()<<endl;

    // memory allocated
    cout<<arr.capacity()<<endl;

    // reserve():- to preallocate memory
    arr.reserve(10);
    cout<<arr.capacity()<<endl;

    // resize():- to change the size of the vector
    arr.resize(3);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    // cout<<arr[4]<<endl; // this will give an error
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    // empty():- to check if the vector is empty returns true if empty
    if(arr.empty()){
        cout<<"Vector is empty";
    }else{
        cout<<"Vector is not empty";
    }

    return 0;
}
