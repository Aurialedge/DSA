// using the vector method useful in the dsa
#include <iostream>
#include <vector>
using namespace std;
int main(){

    // Some basic methods
    vector <int> arr={1,2,3,4,5};
    cout<<arr.front(); //this will print the first element
    cout<<arr.back(); //this will print the last element
    cout<<arr.at(2); //this will print the element at index 2
    // another useful method for accessing is direct accessing
    cout<<arr[2]; //this will also print the element at index 2


    // pushing elements
    arr.push_back(6); //this will add 6 to the end of the vector
    arr.push_back(7); //this will add 7 to the end of the vector
    cout<<arr.size()<<endl; //this will print the new size of the vector

    // popping elements
    arr.pop_back(); //this will remove the last element
    cout<<arr.size()<<endl; //this will print the new size of the vector


    // to check if the vector is empty
    if(arr.empty()){
        cout<<"Vector is empty";
    }else{
        cout<<"Vector is not empty";
    }

   

    return 0;
}