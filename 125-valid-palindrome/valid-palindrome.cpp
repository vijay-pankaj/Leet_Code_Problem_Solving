class Solution {
public:
string concatnetstr(string s) {
    string str="";
    for(int i=0; i<s.size(); i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]>='0'&&s[i]<='9'){
            str+= tolower(s[i]);
        }
    }
      return str;
        
    }
    bool isPalindrome(string s) {
          string str2=concatnetstr(s);
    int i=0,j=str2.size()-1;
    while(i<j){
        if(str2[i]!=str2[j]){
            return false;
        }
        i++;
        j--;
        
    }
    
    return true;
        
    }
};