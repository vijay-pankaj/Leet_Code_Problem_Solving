class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) { 
                if (nums1[i] == nums2[j]) {
                    bool found = false;
                    for (int k = 0; k < arr.size(); k++) {
                        if (arr[k] == nums1[i]) {
                            found = true;
                            break;
                        }
                    }
                    if (!found) arr.push_back(nums1[i]); 
                }
            }
        }
        return arr;
    }
};
