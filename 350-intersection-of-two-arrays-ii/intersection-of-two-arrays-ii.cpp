// class Solution {
// public:
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//         int n1 = nums1.size();
//         int n2 = nums2.size();
//         vector<int> arr;
//         if (n1 < n2) {
//             for (int i = 0; i < n1; i++) {
//                 for (int j = 0; j < n2; j++) {
//                     if (nums1[i] == nums2[j])
//                         arr.push_back(nums1[i]);
//                 }
//             }
//         }
//         else {
//             for (int i = 0; i < n2; i++) {
//                 for (int j = 0; j < n1; j++) {
//                      if (nums2[i] == nums1[j])
//                         arr.push_back(nums1[i]);
//                 }
//             }
//         }
//         return arr;
//     }
// };

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> arr;
        if (n1 > n2) swap(nums1, nums2);
        vector<bool> used(nums2.size(), false);
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (!used[j] && nums1[i] == nums2[j]) {
                    arr.push_back(nums1[i]);
                    used[j] = true;          
                    break;                   
                }
            }
        }
        return arr;
    }
};
