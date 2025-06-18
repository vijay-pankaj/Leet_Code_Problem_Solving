class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0,original=x;
        while(x){
            int rem=x%10;
            sum+=rem;
            x/=10;
        }
        if(original%sum==0)return sum;
        else return -1;
    }
};