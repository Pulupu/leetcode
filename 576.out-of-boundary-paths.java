/*
 * @lc app=leetcode id=576 lang=java
 *
 * [576] Out of Boundary Paths
 */

// @lc code=start
class Solution {
    public int findPaths(int m, int n, int N, int i, int j) {
        if (N <= 0) {
            return 0;
        }

        final int MOD = 1000000007;
        int dp[][][] = new int[N+1][m][n];

        int dirs[][] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };

        for (int step = 1; step <= N; step++) {
            for (int y = 0; y < m; y++) {
                for (int x = 0; x < n; x++) {
                    for (int[] ls : dirs) {
                        int tx = x + ls[0];
                        int ty = y + ls[1];
                        if (tx < 0 || tx > n - 1 || ty < 0 || ty > m - 1) {
                            dp[step][y][x] += 1;
                        }else{
                            dp[step][y][x] = (dp[step][y][x] + dp[step - 1][ty][tx]) % MOD;
                        }
                    }
                }
            }
        }

        return dp[N][i][j];
    }
}
// @lc code=end
