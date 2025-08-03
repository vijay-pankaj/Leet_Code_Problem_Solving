class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty())
            return "";

        int start = 0, maxLength = 1;

        for (int i = 0; i < s.size(); ++i) {
            int l = i, r = i;
            while (l >= 0 && r < s.size() && s[l] == s[r]) {
                if (r - l + 1 > maxLength) {
                    start = l;
                    maxLength = r - l + 1;
                }
                l--;
                r++;
            }
            l = i;
            r = i + 1;
            while (l >= 0 && r < s.size() && s[l] == s[r]) {
                if (r - l + 1 > maxLength) {
                    start = l;
                    maxLength = r - l + 1;
                }
                l--;
                r++;
            }
        }

        return s.substr(start, maxLength);
    }
};

// class Solution {
// public:
//     bool ispalindrom(string str) {
//         int s = 0, e = str.size() - 1;
//         while (s < e) {
//             if (str[s] != str[e])
//                 return false;
//             s++;
//             e--;
//         }
//         return true;
//     }

//     string longestPalindrome(string s) {
//         string longeststr = "";

//         for (int i = 0; i < s.size(); i++) {
//             string currentstr = "";
//             for (int j = i; j < s.size(); j++) {
//                 currentstr += s[j];
//                 if (ispalindrom(currentstr) &&
//                     currentstr.size() > longeststr.size()) {
//                     longeststr = currentstr;
//                 }
//             }
//         }

//         return longeststr;
//     }
// };
