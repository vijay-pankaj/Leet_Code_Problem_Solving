class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int end = digits.size();
        for (int i = end - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i] += 1;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;

//          long long num = 0;
//         int i = 0;

//         while (i < digits.size()) {
//             num = num * 10 + digits[i];
//             i++;
//         }


//         num = num + 1;

//         vector<int> result;
//         while (num) {
//             result.push_back(num % 10);
//             num /= 10;
//         }

//         reverse(result.begin(), result.end());
//         return result;
    
    }
};