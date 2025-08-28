// when window size is constant eg. max subarray sum for 4 consecutive elements

#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(const vector<int>& nums, int k) {
    int n = nums.size();
    if (n < k) return -1;

    // Calculate initial window sum
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += nums[i];
    }
    int maxSum = windowSum;

    // Slide the window
    for (int i = k; i < n; i++) {
        windowSum += nums[i] - nums[i - k];
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}
