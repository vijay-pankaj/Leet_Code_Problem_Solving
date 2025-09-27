class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    bool check(int num, vector<int>& nums) {
        int count = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == num) count++;
        }
        return isPrime(count);
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (check(nums[i], nums)) {
                return true;
            }
        }
        return false;
    }
};
