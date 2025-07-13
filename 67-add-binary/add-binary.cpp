class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int n = a.length() - 1;
        int m = b.length() - 1;
        int carry = 0;
        while (n >= 0 || m >= 0 || carry) {
            int sum = carry;
            if (n >= 0)
                sum += a[n--] - '0';
            if (m >= 0)
                sum += b[m--] - '0';
            res = char((sum % 2) + '0') + res;
            ;
            carry = sum / 2;
        }
        return res;
    }
};