#include<iostream>
#include<vector>
using namespace std;
int maxSumArray(vector<int>&arr,int k){
    int n=arr.size();
    if(n<k) return -1; //not possible
    int windowSum=0,maxSum=INT16_MIN;
    for(int i=0;i<k;i++){
        windowSum+=arr[i];
    }
    maxSum=windowSum;
    for(int i=k;i<n;i++){
        windowSum+=arr[i]-arr[i-k];
        maxSum=max(maxSum,windowSum);
    }
    return maxSum;
}