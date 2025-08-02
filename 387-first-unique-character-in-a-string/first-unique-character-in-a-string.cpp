class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> repeatChar(26, 0);

        for (char ch : s) { 
            repeatChar[ch - 'a']++;
        }

        for (int i = 0; i < s.size(); i++) {
            if (repeatChar[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};

// class Solution {
// public:

//     bool isuniqChar(string s,char ch){
//         int count=0;
//         for(int i=0; i<s.size(); i++){
//             if(s[i]==ch)count++;
//             if(count>1)return false;
//         }
//         return true;
//     }
//     int firstUniqChar(string s) {
//         for (int i = 0; i < s.size(); i++) {
//             if(isuniqChar(s,s[i]))return i;
//         }
//         return -1;
//     }
// };