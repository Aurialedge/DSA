#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> v = {1, 2, 3, 4, 5};

for(auto it = v.begin(); it != v.end(); it++)
    cout << *it << " ";  // 1 2 3 4 5

for(auto it = v.rbegin(); it != v.rend(); it++)
    cout << *it << " ";  // 5 4 3 2 1

// Swapping 
vector<int> a = {1,2}, b = {3,4};
a.swap(b); // now a={3,4}, b={1,2}

return 0;
}