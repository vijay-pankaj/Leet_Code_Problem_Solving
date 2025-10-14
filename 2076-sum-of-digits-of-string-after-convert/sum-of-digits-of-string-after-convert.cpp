class Solution {
public:
    int getLucky(string s, int k) {
        int sum = 0;
        int result = 0;
        char arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                        'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                        's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
                        
        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j < 26; j++) {
                if (s[i] == arr[j]) {
                    int val = j + 1;
                    while (val > 0) {
                        sum += val % 10;
                        val /= 10;
                    }
                }
            }
        }

        k--;

        while (k > 0) {
            int temp = 0;
            while (sum > 0) {
                temp += sum % 10;
                sum /= 10;
            }
            sum = temp;
            k--;
        }

        result = sum;
        return result;
    }
};
