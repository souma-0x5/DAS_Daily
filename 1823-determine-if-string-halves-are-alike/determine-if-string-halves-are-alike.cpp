class Solution {
public:
    bool halvesAreAlike(string s) {
        string vowels = "aeiouAEIOU";
        int n = s.size();
        int count = 0;

        for (int i = 0; i < n / 2; i++) {
            if (vowels.find(s[i]) != string::npos) {
                count++;
            }
        }
        for (int i = n / 2; i < n; i++) {
            if (vowels.find(s[i]) != string::npos) {
                count--;
            }
        }
        return count == 0;
    }
};