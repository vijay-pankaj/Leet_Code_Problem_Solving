class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        for (int i = 0; i < n; i++) {
            if (haystack.substr(i, m) == needle)
                return i;
        }
        return -1;
    }
};