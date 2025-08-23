#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Original array: ";
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;

    // Insertion at index 2
    for(int i=n; i>2; i--) arr[i] = arr[i-1];
    arr[2] = 99;
    n++;

    cout << "After insertion: ";
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;

    // Deletion at index 3
    for(int i=3; i<n-1; i++) arr[i] = arr[i+1];
    n--;

    cout << "After deletion: ";
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
