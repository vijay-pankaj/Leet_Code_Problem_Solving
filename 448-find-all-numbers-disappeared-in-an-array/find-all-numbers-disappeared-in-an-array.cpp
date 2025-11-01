class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<bool> seen(n + 1, false);

        for (int num : nums)
            seen[num] = true;

        vector<int> missing;
        for (int i = 1; i <= n; i++) {
            if (!seen[i])
                missing.push_back(i);
        }

        return missing;
    }
};


// for(int i=1; i<=nums.size();i++){
        //     bool check=false;
        //     for(int j=0; j<nums.size(); j++){
        //         if(i==nums[j])check=true;
        //     }
        //     if(!check)arr.push_back(i);
        // }
        // return arr;