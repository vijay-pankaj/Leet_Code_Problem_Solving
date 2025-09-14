class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int k = 0;
        string temp = word;
        while (sequence.find(temp) != string::npos) {
            k++;
            temp += word; 
        }
        return k;
    }
};
