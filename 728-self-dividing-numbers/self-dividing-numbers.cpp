class Solution {
public:

    bool isDivisible(int num, string str) {
        for (char c : str) {
            int digit = c - '0'; 
            if (digit == 0 || num % digit != 0) {
                return false;
            }
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>arr;
        for(int i=left; i<=right; i++){
            string str=to_string(i); 
            if(isDivisible(i,str))arr.push_back(i);   
        }
        return arr;
    }
};