#include<iostream>
#include<vector>
using namespace std;

// Pass by reference to actually swap values
void swap(int &i, int &j){
    int t = i;
    i = j;
    j = t;
}

int main(){
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;

    vector<int> arr;
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    // Bubble Sort in descending order
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] < arr[j+1]){  // For descending order
                swap(arr[j], arr[j+1]);
            }
        }
    }

    cout << "Sorted array in descending order:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
