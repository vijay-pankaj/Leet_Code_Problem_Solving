
class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<int> heights(n, 0);
        int res = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 0) heights[j] = 0;
                else heights[j] += 1;
            }

            for (int j = 0; j < n; j++) {
                if (heights[j] > 0) {
                    int min_h = heights[j];
                    for (int k = j; k >= 0; k--) {
                        if (heights[k] == 0) break;
                        min_h = min(min_h, heights[k]);
                        res += min_h;
                    }
                }
            }
        }
        return res;
    }
};