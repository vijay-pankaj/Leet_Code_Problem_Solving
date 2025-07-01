class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            nums[i]=nums[i]*nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            for(int j=1; j<nums.size()-i; j++){
                if(nums[j-1]>nums[j])swap(nums[j-1],nums[j]);
            }
        }
        return nums;

    }
};