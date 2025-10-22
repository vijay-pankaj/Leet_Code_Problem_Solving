class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int count=0;
        char ch=s[0];
        int secCount=0;
        for(int i=0; i<s.length();i++){
            if(s[i]==ch)count++;
        }
        for(int i=1; i<s.length(); i++){
            for(int j=0; j<s.length(); j++){
                if(s[i]==s[j])secCount++;
            }
            if(secCount!=count){
                return false;
                break;
            }else{
                secCount=0;
            }
        }
        return true;
    }
};