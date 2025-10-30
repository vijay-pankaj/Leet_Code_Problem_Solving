#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        int n = nums.size();
        for (int i = 0; i < n; ) {
            int j = i + 1;
            while (j < n && nums[j] == nums[i]) {
                j++;
            }

            if (j - i == 1) {
                sum += nums[i];
            }
            i = j;
        }
        return sum;
    }
};
