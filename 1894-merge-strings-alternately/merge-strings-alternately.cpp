class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string newStr="";
        int word1Len=word1.size();
        int word2Len=word2.size();
        int i=0;
        int j=0;
        while(i<word1Len && i<word2Len){
            newStr+=word1[i];
            newStr+=word2[i];
            i++;
            j++;
        }
        while(i<word1Len){
            newStr+=word1[i];
            i++;
        }
        while(j<word2Len){
            newStr+=word2[j];
            j++;
        }
        return newStr;
    }
};