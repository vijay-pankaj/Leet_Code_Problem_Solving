class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallestNum=INT_MAX;
        int largestNum=INT_MIN;
        int gcd=1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>largestNum)largestNum=nums[i];
            if(smallestNum>nums[i])smallestNum=nums[i];
        }
        for(int i=1; i<=largestNum; i++){
            if(largestNum%i==0 && smallestNum%i==0){
                if(i>gcd)gcd=i;
            }
        }
        return gcd;
    }
};