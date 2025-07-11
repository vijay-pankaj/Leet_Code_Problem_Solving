class Solution {
public:
    bool isHappy(int n) {
        while(n!=1&&n!=4){
            int sumOfsqrt=0;
            while(n){
                int digit=n%10;
                sumOfsqrt+=digit*digit;
                n/=10;
            }
            n=sumOfsqrt;
        }
       return n==1;
    }
};