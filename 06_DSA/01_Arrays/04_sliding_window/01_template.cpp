// Sliding Window Template
#include <vector>
#include <iostream>
using namespace std;

void slidingWindowTemplate(const vector<int>& nums, int k) {
    int n = nums.size();
    if (n < k) return;

    // Initialize the window
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += nums[i];
    }
    cout << "Initial window sum: " << windowSum << endl;

    // Slide the window
    for (int i = k; i < n; i++) {
        windowSum += nums[i] - nums[i - k];
        cout << "Updated window sum: " << windowSum << endl;
    }
}
