class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(), sum=n*(n+1)/2, actualsum=0;
        for(int num:nums)actualsum+=num;
        return sum-actualsum;
    }
};