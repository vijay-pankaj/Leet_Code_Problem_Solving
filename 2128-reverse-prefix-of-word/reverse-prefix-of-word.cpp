class Solution {
public:
    string reversePrefix(string word, char ch) {
       int index=0;
       string pref="";
        for(int i=0; i<word.length(); i++){
            if(word[i]==ch){
                index=i;
                break;
            }
        }
        for(int i=0; i<=index; i++){
            pref+=word[i];
        }
        int s=0,e=pref.length()-1;
        while(s<e){
            swap(pref[s],pref[e]);
            s++;
            e--;
        }
        for(int i=index+1; i<word.length(); i++){
            pref+=word[i];
        }
        return pref;
    }
};