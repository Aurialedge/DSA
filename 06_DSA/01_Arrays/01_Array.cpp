#include<iostream>
using namespace std;
int main(){
    // declaration of the array
    // Syntax: data_type array_name[array_size];

    int myArray[5]; // declares an array of integers with size 5

    //  the dynamic array
    int* dynamicArray = new int[5]; // declares a dynamic array of integers with size 5
    //  Assigning values to the dynamic array
    for(int i=0; i<5; i++){
        dynamicArray[i] = i+1;
    }
    // don't forget to free the dynamically allocated memory
    delete[] dynamicArray;

    // We will use vectors for our dsa

}