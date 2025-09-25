class Solution {
public:
    string thousandSeparator(int n) {
        string str = to_string(n);
        string result = "";
        int count = 0;

        for (int i = str.size() - 1; i >= 0; i--) {
            result += str[i];
            count++;
            if (count % 3 == 0 && i != 0) {
                result += '.';
            }
        }

        reverse(result.begin(), result.end());
        return result;
    }
};


// class Solution {
// public:
//     string thousandSeparator(int n) {
//         int originalVal=n;
//         string str=to_string(n);
//         int len=str.length();
//         if(len>=4){
//             int value=n/1000;
//             string str2=to_string(value);
//             int rem=originalVal%1000;
//             string str3=to_string(rem);
//             return str2+"."+str3;
//         }
//         return str;
        
//     }
// };