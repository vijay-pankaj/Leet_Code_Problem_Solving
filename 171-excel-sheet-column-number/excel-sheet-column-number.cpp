class Solution {
public:
    int titleToNumber(string columnTitle) {
        int value=0;
        for(auto ch:columnTitle){
            value*=26;
            value+= ch - 'A'+1;
        }
        return value;
        
    }
};