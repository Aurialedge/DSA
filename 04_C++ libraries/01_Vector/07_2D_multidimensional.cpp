#include<iostream>
#include<vector>
using namespace std;
int main(){

    // 2D vector
    vector<vector<int>> v = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    // another way of declaring
    vector <vector <int>> v2(3, vector<int>(4,0));
    // 3X4 matrix

    // using the methods in 2D vector
    int n = v2.size();
    int m = v2[0].size();
    // more methods can be used with 2D vectors
    v2.push_back(vector<int>(4, 1)); // adds a new row
    for(int i=0; i<v2.size(); i++){
        for(int j=0; j<v2[i].size(); j++){
            cout << v2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
