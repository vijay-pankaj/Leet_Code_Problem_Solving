class Solution {
public:
    int fib(int n) {
        if(n==0){
            return false;
        }
        int num1=0,num2=1,next;
        for(int i=2; i<=n; i++){
            next=num1+num2;
            num1=num2;
            num2=next;
        }
        return next;
    }
};