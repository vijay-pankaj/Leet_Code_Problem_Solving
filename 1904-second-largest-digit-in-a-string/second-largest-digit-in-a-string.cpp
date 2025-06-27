class Solution {
public:
    int secondHighest(string s) {
        int max=INT_MIN,secMax=-1;
       for(int i=0; i<s.size();i++){
        if(s[i]>='0'&&s[i]<='9'){
           int num=s[i]-'0';
            if(num>max)max=num;
        }
       }
       for(int i=0;i<s.size();i++){
        if(s[i]>='0'&&s[i]<='9'){
           int newNum=s[i]-'0';
            if(newNum>secMax && newNum!=max) secMax=newNum;
        }
       }
       return secMax;
    }
};