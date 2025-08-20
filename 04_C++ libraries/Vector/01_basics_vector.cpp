#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int> myVector; // declares an empty vector of integers

    // adding elements to the vector
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);

    // accessing elements in the vector
    for(int i=0; i<myVector.size(); i++){
        cout<<"Element at index "<<i<<": "<<myVector[i]<<endl;
    }

    return 0;
}