class Solution {
public:
    string baseNeg2(int n) {
        if(n==0)return "0";
        string str="";
        while(n){
            int rem=n%-2;
             n/=-2;
            if(rem<0){
                rem+=2;
                n+=1;
            }
            str=to_string(rem)+str;

        }
        return str;
    }
};