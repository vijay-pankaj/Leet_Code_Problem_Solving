class Solution {
public:
    int m, n;
    vector<vector<int>> grid;
    int dirs[4][2] = {{1,1}, {1,-1}, {-1,-1}, {-1,1}};
    vector<vector<vector<vector<int>>>> memo;

    int dfs(int x, int y, int dir, int canTurn, int target) {
        int nx = x + dirs[dir][0];
        int ny = y + dirs[dir][1];

        if (nx < 0 || ny < 0 || nx >= m || ny >= n || grid[nx][ny] != target) {
            return 0;
        }

        if (memo[nx][ny][dir][canTurn] != -1) {
            return memo[nx][ny][dir][canTurn];
        }

        int nextTarget = (target == 2 ? 0 : 2);
        int best = dfs(nx, ny, dir, canTurn, nextTarget);

        if (canTurn) {
            int newDir = (dir + 1) % 4;
            best = max(best, dfs(nx, ny, newDir, 0, nextTarget));
        }

        return memo[nx][ny][dir][canTurn] = best + 1;
    }

    int lenOfVDiagonal(vector<vector<int>>& g) {
        grid = g;
        m = grid.size();
        n = grid[0].size();

        memo.assign(m, vector<vector<vector<int>>>(n,
              vector<vector<int>>(4, vector<int>(2, -1))));

        int ans = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    for (int d = 0; d < 4; d++) {
                        ans = max(ans, 1 + dfs(i, j, d, 1, 2));
                    }
                }
            }
        }
        return ans;
    }
};
