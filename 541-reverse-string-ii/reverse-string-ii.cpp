class Solution {
public:
    string reverseStr(string s, int k) {
            int n = s.size();
        int i = 0;

        while (i < n) {
            int j = min(i + k - 1, n - 1);
            int left = i, right = j;

            while (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }

            i += 2 * k; 
        }

        return s;
    }
};