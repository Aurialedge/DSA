class Solution {
public:
    string sortVowels(string s) {
        vector<pair<int,char>> vowels; 
        int n = s.length();

        // Collect all vowels with their indices
        for (int i = 0; i < n; i++) {
            char c = s[i];
            if (c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U') {
                vowels.push_back({i, c});
            }
        }

        // Extract only vowel characters for sorting
        vector<char> sortedVowels;
        for (auto &p : vowels) {
            sortedVowels.push_back(p.second);
        }

        // Sort vowels
        sort(sortedVowels.begin(), sortedVowels.end());

        // Replace vowels back in original string in sorted order
        int k = 0;
        for (auto &p : vowels) {
            s[p.first] = sortedVowels[k++];
        }

        return s;
    }
};
