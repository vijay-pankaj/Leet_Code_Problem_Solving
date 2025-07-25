class Solution {
public:
    static bool compare(string a, string b) {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> numStr;
        for (int num : nums) {
            numStr.push_back(to_string(num));
        }

        sort(numStr.begin(), numStr.end(), compare);

        if (numStr[0] == "0"){
            return "0";
        } 

        string result = "";
        for (string s : numStr) {
            result += s;
        }

        return result;
    }
};
