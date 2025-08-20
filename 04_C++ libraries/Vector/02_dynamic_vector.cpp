#include<iostream>
#include<vector>
using namespace std;
int main(){

    // vector library dynamic value assignment
    vector<int> v;
     cout<<"Enter no. of values you wanna input"<<endl;
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
         int x;
         cin>>x;
         v.push_back(x);
     }

     return 0;
}