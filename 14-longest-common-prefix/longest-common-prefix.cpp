class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())return "";
        string str = "";
        string firstStr = strs[0];
        for (int i = 0; i < firstStr.size(); i++) {
            char currentChar = firstStr[i];

            for (int j = 1; j < strs.size(); j++) {
               if (i >= strs[j].size() || strs[j][i] != currentChar){
                 return strs[0].substr(0, i);
               }
                   
            }
            
        }
        return strs[0];
    }
};