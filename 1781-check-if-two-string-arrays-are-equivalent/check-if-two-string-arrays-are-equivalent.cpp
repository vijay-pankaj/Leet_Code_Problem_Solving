class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1="",str2="";
        int i=0,j=0;
        // for(int i=0; i<word1.size(); i++){
        //     str1+=word1[i];
        // }
        // for(int i=0; i<word2.size(); i++){
        //     str2+=word2[i];
        // }
        // return str1==str2;
        while(i<word1.size() && j<word2.size()){
            str1+=word1[i];
            str2+=word2[j];
            i++;
            j++;
        }
        while(i<word1.size()){
            str1+=word1[i];
            i++;
        }
        while(j<word2.size()){
            str2+=word2[j];
            j++;
        }
        return str1==str2;
    }
};