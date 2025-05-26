class Solution {
public:
    int bulbSwitch(int n) {
        int a=0;
        for(long long i=1; (i*i)<=n; i++){
            a++;
        }
        return a++;
    }
};