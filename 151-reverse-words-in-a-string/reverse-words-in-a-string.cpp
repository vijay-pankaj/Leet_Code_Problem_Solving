class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int n = s.size() - 1;
        while (n >= 0) {
            while (n >= 0 && s[n] == ' ')
                n--;
            string temp = "";
            while (n >= 0 && s[n] != ' ') {
                temp = s[n] + temp;
                n--;
            }
            if (!temp.empty()) {
                if (!result.empty())
                    result += " ";
                result += temp;
            }
        }

        return result;
    }
};
