class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;
        
        // Count frequency of each element
        for (int num : nums) {
            freq[num]++;
        }
        
        int maxFreq = 0;
        // Find the maximum frequency
        for (auto &p : freq) {
            maxFreq = max(maxFreq, p.second);
        }
        
        int result = 0;
        // Count all elements that have maximum frequency
        for (auto &p : freq) {
            if (p.second == maxFreq) {
                result += p.second;
            }
        }
        
        return result;
    }
};
