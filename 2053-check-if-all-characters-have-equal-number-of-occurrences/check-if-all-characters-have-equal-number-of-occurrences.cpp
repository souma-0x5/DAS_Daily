class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int freq[26] = {0};
        for (char c : s) {
            freq[c - 'a']++;
        }

        int expected = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0) continue;
            if (expected == 0) {
                expected = freq[i];
            } else if (freq[i] != expected) {
                return false;
            }
        }
        return true;
    }
};