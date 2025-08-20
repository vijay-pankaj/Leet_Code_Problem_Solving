class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        int i = 0;
        while (i < s.size()) {
            while (i < s.size() && s[i] == ' ') {
                i++;
            }
            if (i >= s.size()) break;
            count++;
            while (i < s.size() && s[i] != ' ') {
                i++;
            }
        }

        return count;
    }
};
