class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int originalNum=x;
        long rev=0;
        while(x){
            int rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
        return originalNum==rev;
    }
};