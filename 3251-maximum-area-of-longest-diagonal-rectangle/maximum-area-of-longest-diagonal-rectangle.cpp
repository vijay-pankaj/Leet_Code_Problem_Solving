class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        long long maxDiagonalSq = -1;
        int maxarea = 0;

        for (int i = 0; i < dimensions.size(); i++) {
            int l = dimensions[i][0], w = dimensions[i][1];
            long long diagonalSq = 1LL * l * l + 1LL * w * w;

            if (diagonalSq > maxDiagonalSq) {
                maxDiagonalSq = diagonalSq;
                maxarea = l * w;
            }
            else if (diagonalSq == maxDiagonalSq) {
                maxarea = max(maxarea, l * w);
            }
        }
        return maxarea;
    }
};
