class Solution {
public:
bool countDigit(int num){
            int count=0;
            while(num){
                num/=10;
                count++;
            }
            return count%2==0;
        }
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0; i<nums.size();i++){
            if(countDigit(nums[i]))count++;
        }
        return count;
    }
};