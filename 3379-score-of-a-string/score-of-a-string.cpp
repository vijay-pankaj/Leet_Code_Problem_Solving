class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=0; i<s.length()-1; i++){
           int val= s[i]-s[i+1];
           if(val>0)sum+=val;
           else{
            val=-val;
            sum+=val;
           };
        }
        return sum;
    }
};