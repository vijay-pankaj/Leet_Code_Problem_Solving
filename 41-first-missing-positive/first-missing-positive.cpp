class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // int missingNum=1;
        //  sort(nums.begin(), nums.end());
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i]==missingNum){
        //         missingNum++;
        //     }
        //     else if(nums[i]>missingNum){
        //         break;
        //     }
        // }
        //  return missingNum;
        int n=nums.size();
        for(int i=0; i<n; i++){
            while(nums[i]>=1 && nums[i]<=n && nums[i]!=nums[nums[i]-1]){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
         for (int i = 0; i < n; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }
    return n+1;
    }
   
};