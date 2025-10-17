class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0,e=s.length()-1;
        while(i<e){
            if((s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')&& (s[e]>='a'&&s[e]<='z'||s[e]>='A'&&s[e]<='Z')){
                swap(s[i],s[e]);
                i++;
                e--;
            }

            else if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')))i++;
            else if(!((s[e]>='a'&&s[e]<='z')||(s[e]>='A'&&s[e]<='Z')))e--;
        }
        return s;
    }
};