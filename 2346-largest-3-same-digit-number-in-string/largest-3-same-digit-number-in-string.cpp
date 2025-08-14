class Solution {
public:
    string largestGoodInteger(string num) {
        string substr1 = "", largestgoodStr = "";

        for (int i = 0; i < num.size(); i++) {
            if (i > 0 && num[i] == num[i - 1] && substr1.size() < 3) {
                substr1 += num[i];
            } 
            else {
                if (substr1.size() == 3 && substr1 > largestgoodStr) {
                    largestgoodStr = substr1;
                }
                substr1 = "";
                substr1 += num[i];
            }
        }

        if (substr1.size() == 3 && substr1 > largestgoodStr) {
            largestgoodStr = substr1;
        }

        return largestgoodStr;
    }
};


/*
class Solution {
public:
    string largestGoodInteger(string num) {
        string str="";
        int ismax=0;
        int count[10]={0};
        for(char c:num){
            count[c-'0']++;
        }
        for(int i=0; i<10; i++){
            if(count[i]==3){
                if(i>ismax)ismax=i;
            }
        }
        while(count[ismax]--){
            str+=ismax+'0';
        }
        return str;
    }
};
*/