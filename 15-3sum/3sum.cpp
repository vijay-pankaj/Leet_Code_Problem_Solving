class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    res.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left - 1])
                        left++;
                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return res;
    }
};

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> res;
//         for(int i=0; i<nums.size(); i++){
//             for(int j=i+1; j<nums.size();j++){
//                 for(int k=2;k<nums.size(); k++){
//                     if(i!=j+1 && i!=k && j!=k){
//                         if(nums[i]+nums[j]+nums[k]==0){
//                             vector<int>arr={nums[i], nums[j], nums[k]};
//                             res.push_back(arr);
//                         }
//                     }
//                 }
//             }
//         }
//         return res;
//     }
// };
