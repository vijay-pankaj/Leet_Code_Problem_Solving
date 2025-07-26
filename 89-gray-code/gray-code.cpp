class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int>grayCodeSeq;
        int total=pow(2,n); 
        for (int i = 0; i < total; i++) {
            grayCodeSeq.push_back(i ^ (i >> 1));
        }

        return grayCodeSeq;
    }
};
