class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> repeatChar(26, 0);

        for (char ch : s) { 
            repeatChar[ch - 'a']++;
        }

        for (int i = 0; i < s.size(); i++) {
            if (repeatChar[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};