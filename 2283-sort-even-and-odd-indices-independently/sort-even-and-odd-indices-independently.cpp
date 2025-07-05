class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        
        for (int evenStart = 0; evenStart < n; evenStart += 2) {
            for (int evenSecond = evenStart + 2; evenSecond < n; evenSecond += 2) {
                if (nums[evenStart] > nums[evenSecond]) {
                    swap(nums[evenStart], nums[evenSecond]);
                }
            }
        }
        
        for (int oddFirst = 1; oddFirst < n; oddFirst += 2) {
            for (int oddSecond = oddFirst + 2; oddSecond < n; oddSecond += 2) {
                if (nums[oddFirst] < nums[oddSecond]) {
                    swap(nums[oddFirst], nums[oddSecond]);
                }
            }
        }
        
        return nums;
    }
};
