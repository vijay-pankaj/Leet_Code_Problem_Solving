class Solution {
public:
    bool isValid(string word) {
        bool isVowels=false,isConsonent=false;
     if(word.size()<3){
        return false;
     }
     for(int i=0; i<word.size(); i++){
        if(!((word[i]>='0'&&word[i]<='9')||
        (word[i]>='a'&&word[i]<='z')||(word[i]>='A'&&word[i]<='Z'))){
            return false;
        }
        if((word[i]>='a'&&word[i]<='z')||(word[i]>='A'&&word[i]<='Z')){
            if(((word[i]=='a'||word[i]=='e'||word[i]=='i'|word[i]=='o'||word[i]=='u')||
            (word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U'))){
                isVowels = true;
            }else{
                isConsonent=true;
            }
        }
     }
     return isConsonent&&isVowels;
    }
};