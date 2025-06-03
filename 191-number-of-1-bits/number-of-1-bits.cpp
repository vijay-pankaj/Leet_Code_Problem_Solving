class Solution {
public:
    int hammingWeight(int n) {
       int hammingWeight=0;
        while(n){
            int rem=n%2;
            if(rem==1){
                hammingWeight++;
            }
            n/=2;
        }
        return hammingWeight;
    }
};