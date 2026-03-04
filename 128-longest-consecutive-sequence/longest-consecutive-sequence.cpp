class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int count=1,maxcount=0;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                continue;
            }
            else if(nums[i]+1==nums[i+1]){
                count++;
            }
            else{
                if(count>maxcount)maxcount=count;
                count=1;
            }
        }
        if(count>maxcount)maxcount=count;
        return maxcount;
    }
};