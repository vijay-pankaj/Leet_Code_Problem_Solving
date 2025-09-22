class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count=0,zero=0,sign=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0)count++;
            if(nums[i]==0)zero++;
        }
        if((count>0 && count%2==0)||count==0)sign = 1;
        if(!((count>0 && count%2==0)||count==0)) sign =-1;
        if(zero>0)sign= 0;
        return sign;
    }
};