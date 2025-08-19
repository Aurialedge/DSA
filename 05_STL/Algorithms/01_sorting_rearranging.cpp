#include<bits/stdc++.h> // for all standard libraries
using namespace std;

int main(){
    // sort()
    vector<int> arr = {5, 2, 8, 1, 3};
    sort(arr.begin(), arr.end());
    for(int i : arr) cout << i << " ";
    return 0;
    
}