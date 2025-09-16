#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to compute LCM using GCD
    long long lcm(long long a, long long b) {
        return (a / __gcd(a, b)) * b;  // to avoid overflow
    }

    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<long long> stack;  // use long long to handle large LCM values

        for (int num : nums) {
            stack.push_back(num);

            // keep merging while last two are non-coprime
            while (stack.size() > 1) {
                long long a = stack[stack.size() - 2];
                long long b = stack[stack.size() - 1];
                long long g = __gcd(a, b);

                if (g == 1) break;  // coprime, stop merging

                long long merged = lcm(a, b);
                stack.pop_back();
                stack.pop_back();
                stack.push_back(merged);
            }
        }

        // Convert back to int (guaranteed <= 1e8 by constraints)
        vector<int> result;
        for (auto x : stack) result.push_back((int)x);

        return result;
    }
};
