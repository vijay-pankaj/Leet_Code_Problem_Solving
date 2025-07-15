class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int s = 0, n = nums.size();
        vector<int> arr(n);
        for (int i = 0; i < nums.size(); i++) {
            s = (k + i) % n;
            arr[s] = nums[i];
            s++;
        }
        nums = arr;
    }
};