class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            bool left=(i==0 || nums[i]!=nums[i-1]);
             bool right = (i == nums.size() - 1 || nums[i] != nums[i + 1]);
            if(left && right ){
                return nums[i];
            }
        }
        return -1;
    }
};

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         for (int i = 0; i < nums.size(); i++) {
//             int count = 0;
//             bool check = false;
//             for (int j = 0; j < nums.size(); j++) {
//                 if (nums[j] == nums[i])
//                     count++;
//                 if (count > 1) {
//                     check = true;
//                     break;
//                 }
//             }
//             if (!(check)) {
//                 return nums[i];
//             }
//         }
//         return -1;
//     }
// };

