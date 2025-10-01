class Solution {
public:
    int maxPower(string s) {
        string currentstr = "";
        string substr = "";
        int maxlength = 0;

        for (int i = 0; i < s.length(); i++) {
            currentstr = s[i];
            for (int j = i + 1; j < s.length(); j++) {
                if (s[j] == s[i]) {
                    currentstr += s[j];  
                } else {
                    break; 
                }
            }
            if (currentstr.length() > maxlength) {
                substr = currentstr;
                maxlength = currentstr.length();
            }
        }
        return substr.length();
    }
};
