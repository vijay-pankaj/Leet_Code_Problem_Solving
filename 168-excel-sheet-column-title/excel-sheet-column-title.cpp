class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res="";
        while(columnNumber){
            columnNumber--;
            char ch='A'+(columnNumber%26);
            res=ch+res;
            columnNumber/=26;
        }
        return res;
    }
};