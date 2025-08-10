class Solution {
public:

    bool checkDuplicates(vector<int> nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] == nums[i + 1]) {
                return true;
            }
        }
        return false;
    }
    bool containsNearbyDuplicate(vector<int>& nums, int k) {  
        if (!checkDuplicates(nums)) {
            return false;
        }
        for (int i = 0; i < nums.size(); ++i) {
            for (int g = 0; g < nums.size(); ++g) {
                int absDist = abs(i - g);
                if ((nums[i] == nums[g]) && (absDist <= k) && (i != g)) {
                    return true;
                }
            }
        }
        return false;
    }
};