class Solution {
public:
    void sortColors(vector<int>& nums) {
        int color1=0,color2=0,color3=0;
        for(int num:nums){
            if(num==0)color1++;
            else if(num==1)color2++;
            else color3++;
        }
        int index=0;
        while(color1--)nums[index++]=0;
        while(color2--)nums[index++]=1;
        while(color3--)nums[index++]=2;
    }
};