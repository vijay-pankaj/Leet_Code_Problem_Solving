class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0)
            return 0;
        if (n == 1)
            return nums[0];

        int rob = nums[0];
        int maxRob = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++) {
            int curr = max(maxRob, nums[i] + rob);
            rob = maxRob;
            maxRob = curr;
        }
        return maxRob;
    }
};

// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         int maxRob=INT_MIN;
//         for(int i=0; i<nums.size(); i++){
//             int currentRob=0;
//             currentRob+=nums[i];
//             int j=i+2;
//             while(j<nums.size()){
//                 currentRob+=nums[j];
//                 j+=2;
//             }
//             if(currentRob>maxRob){
//                 maxRob=currentRob;
//             }
//         }
//         return maxRob;
//      }
// };