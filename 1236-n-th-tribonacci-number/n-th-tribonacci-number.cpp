class Solution {
public:
    int tribonacci(int n) {
        if(n==0)return 0;
        if(n==1||n==2) return 1;
        int n1=0,n2=1,n3=1,nth=0;
        for(int i=3; i<=n; i++){
            nth=n1+n2+n3;
            n1=n2;
            n2=n3;
            n3=nth;
        }
    return nth;
    }
};