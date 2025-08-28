#include <vector>
#include <iostream>
using namespace std;

// nums is sorted here



void twoPointerTemplate(vector<int>& nums,int target) {
    // Initialize two pointers
    int left = 0;                   // Starting pointer
    int right = nums.size() - 1;    // Ending pointer
    
    // Main two pointer loop
    while (left <= right) {         // or left < right, depending on problem
        // Perform some operation or check condition
        int sum = nums[left] + nums[right];
        
        // Handle different cases
        if (sum == target) {
            // Found solution - process it
            cout << "Found at indices: " << left << ", " << right << endl;
            left++;  // move both pointers
            right--;
        } 
        else if (sum < target) {
            // Need larger sum - move left pointer forward
            left++;
        } 
        else {
            // Need smaller sum - move right pointer backward
            right--;
        }
    }
}