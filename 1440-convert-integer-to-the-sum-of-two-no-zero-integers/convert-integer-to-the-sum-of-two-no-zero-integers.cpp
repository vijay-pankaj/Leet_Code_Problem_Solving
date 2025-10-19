class Solution {
public:

     bool hasZero(int num) {
        while (num > 0) {
            if (num % 10 == 0) return true;
            num /= 10;
        }
        return false;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int> arr;
        for (int i = 1; i <= n; i++) {
            int j = n - i;
            if (i + j == n && !hasZero(i) &&!hasZero(j)) {
                arr.push_back(i);
                arr.push_back(j);
                break;
            }
        }
        return arr;
    }
};