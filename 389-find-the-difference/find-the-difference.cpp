class Solution {
public:
    char findTheDifference(string s, string t) {
        char result=0; 
        for(char it:s){
            result^=it;
        }for(char it:t){
            result^=it;
        }
        return  result;
    }
};