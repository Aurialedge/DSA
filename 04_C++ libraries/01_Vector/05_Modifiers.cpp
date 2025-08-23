#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};

    //************************ Modifiers **************************
    // push_back():- to add an element at the end
    arr.push_back(6);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // ************************* pop_back():- to remove the last element
    arr.pop_back();
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // ************************* insert():- to insert an element at a specific position
    arr.insert(arr.begin()+2, 10);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // ************************* erase():- to remove an element at a specific position
    arr.erase(arr.begin()+2);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // elements after the erased element are shifted ahead as
    // vector is contiguous
    // eg.
    vector <int> arr1 = {1, 2, 3, 4, 5};
    arr1.erase(arr1.begin()+2);
    for(int i=0; i<arr1.size(); i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;


    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // ************************* clear():- to remove all elements
    arr.clear();
    if(arr.empty()){
        cout<<"Vector is empty";
    }else{
        cout<<"Vector is not empty";
    }

    return 0;
}
