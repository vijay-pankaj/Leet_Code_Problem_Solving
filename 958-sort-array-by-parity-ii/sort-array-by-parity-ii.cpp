class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = 1;

        while (start < n && end < n) {
            while (start < n && nums[start] % 2 == 0){start += 2;}
            while (end < n && nums[end] % 2 == 1){ end += 2;}
            if (start < n && end < n){ swap(nums[start], nums[end]);}
        }
        return nums;
    }
};
