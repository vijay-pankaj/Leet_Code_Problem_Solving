class Solution {
public:
    bool checkDivisibility(int n) {
        int original=n;
        int sum = 0;
        int mul=1;
        while (n) {
            int rem = n % 10;
            mul*=rem;
            sum += n % 10;
            n = n / 10;
        }
        sum+=mul;
        if(original%sum==0)return true;
        else return false;
    }
};