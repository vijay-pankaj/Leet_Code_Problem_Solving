class Solution {
public:
    string convertToBase7(int num) {
        int originalNum = num;string str2="";
        if (num == 0) return "0";
        bool isNegative = num < 0;
        num = abs(num);
        while (num) {
             int rem = num % 7;
            str2 = to_string(rem) + str2;
            num /= 7;
        }
        if(isNegative)
        str2 = '-'+str2;
        return str2;
    }
};