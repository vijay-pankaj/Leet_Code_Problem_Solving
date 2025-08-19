class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long res = 0;
        long long zeroCount = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zeroCount++;
                res += zeroCount;
            } else {
                zeroCount = 0;
            }
        }
        return res;
    }
};