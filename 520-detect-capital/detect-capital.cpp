class Solution {
public:

    bool isCapitalAll(string str) {
        for (char c : str) {
            if (!(c >= 'A' && c <= 'Z')) return false;
        }
        return true;
    }

  bool isAllSmall(string str) {
        for (char ch : str) {
            if (!(ch >= 'a' && ch <= 'z')) return false;
        }
        return true;
    }

bool isFirstCapitalRestSmall(string str) {
        if (!(str[0] >= 'A' && str[0] <= 'Z')) return false;
        for (int i = 1; i < str.size(); i++) {
            if (!(str[i] >= 'a' && str[i] <= 'z')) return false;
        }
        return true;
    }

    bool detectCapitalUse(string word) {
        return isCapitalAll(word)||isAllSmall(word)||isFirstCapitalRestSmall(word);
    }
};