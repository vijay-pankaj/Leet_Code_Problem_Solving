class Solution {
public:
    string toHex(int num) {
        if (num == 0)
            return "0";

        string hex = "0123456789abcdef";
        string hexNum = "";
        unsigned int n = num;

        while (n != 0) {
            hexNum = hex[n % 16] + hexNum;
            n /= 16;
        }

        return hexNum;
    }
};
