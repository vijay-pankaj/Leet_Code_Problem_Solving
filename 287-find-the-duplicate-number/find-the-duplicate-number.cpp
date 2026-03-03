class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>st;
        for(int num:nums){
            if(st.count(num))return num;
            else st.insert(num);
        }
        return -1;
    }
};


// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         vector<int>arr;
//        for(int i=0; i<nums.size(); i++){
//         bool check=true;
//         for(int j=0; j<arr.size(); j++){
//             if(nums[i]==arr[j])return nums[i];
//         }
//         arr.push_back(nums[i]);
//        }
//        return -1;
//     }
// };

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int count=0;
//         for(int i=0; i<nums.size(); i++){
//             for(int j=i+1; j<nums.size();j++){
//                 if(nums[i]==nums[j]){
//                     return nums[i];
//                 }

//             }
//         }
//         return -1;
//     }
// };
