#include <bits/stdc++.h>
using namespace std;

int longestSubstringKDistinct(string s, int k) {
    int n = s.size();
    if (n * k == 0) return 0;

    unordered_map<char, int> freq;
    int left = 0, right = 0;
    int maxLen = 1;

    while (right < n) {
        // Expand window
        freq[s[right]]++;

        // Shrink window if > k distinct
        while (freq.size() > k) {
            freq[s[left]]--;
            if (freq[s[left]] == 0) freq.erase(s[left]);
            left++;
        }

        // Update max length
        maxLen = max(maxLen, right - left + 1);
        right++;
    }
    return maxLen;
}

int main() {
    string s = "eceba";
    int k = 2;
    cout << "Longest substring length = " << longestSubstringKDistinct(s, k);
    return 0;
}
