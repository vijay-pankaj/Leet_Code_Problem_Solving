class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int a=1; a<=n; a++){
            for(int b=1;b<=n;b++){
                int val=a*a+b*b;
                int sqrtVal=sqrt(val);
                if(sqrtVal*sqrtVal==val && sqrtVal<=n)count++;
            }
        }
        return count;  
    }
};