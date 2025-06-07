class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastLength=0,n=s.size(),i=n-1;
        while(i>=0&&s[i]==' '){
            i--;
        }
        while(i>=0 && s[i]!=' '){
            lastLength++;
            i--;
        }
        return lastLength;
    }
};