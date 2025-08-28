// longest subarray with sum<=k
#include<iostream>
#include<vector>
using namespace std;
int main(vector<int>& nums, int target){
        int n=nums.size();
        int left=0;
        int right=0;
        int sum=0;
        while(sum<target&&right<n){
            sum+=nums[right];
            right++;
        }
        while(sum>target&&left<right){
            sum-=nums[left];
            left++;
        }
        if(sum==target){
            cout<<"Found subarray from "<<left<<" to "<<right-1<<endl;
        }
}