class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<=0)return false;
        for(long i=1;i<=num; i++)if(i*i==num)return true;
        return false;
    }
};